#include "string_utils.h"

#include <iostream>
#include <string>

using namespace std;
using namespace nmsp;

int main01(int argc, const char *argv[])
{
    std::string s1("12212");
    std::string s2("12212");
    cout << replace_all(s1, "12", "21") << endl;
    cout << replace_all_distinct(s2, "12", "21") << endl;
    return 0;
}

int main02(int argc, char const *argv[])
{

    std::string str = R"([{"service name": "CSD", "service id": "301","service status": "200","service message": "OK" },{"service name": "xxx", "service id": "xxx","service status": "201","service message": "空间不足" },.....])";
    cout << replace_all_distinct(str, ".", "") << endl;
    return 0;
}

int main03(int argc, char const *argv[])
{
    string s = "a, b, c, d, e, f";

    vector<string> v = SplitString(s, ", "); //可按多个字符来分隔;
    for (vector<string>::size_type i = 0; i != v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    return 0;
}

int main04(int argc, char const *argv[])
{
    string s = "a,b*c*d,?>e";
    // string s;
    // getline(cin,s);
    vector<string> v = SplitMultiDelim(s, ",*>?"); //可按多个字符来分隔;
    for (vector<string>::size_type i = 0; i != v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;
    //输出: a b c d e
    return 0;
}

int main(int argc, char const *argv[])
{
    uint16_t out1 = charToU16("254");
    uint32_t out2 = charToU32("65537");
    uint64_t out3 = charToU64("65535000");
    cout << out1 << " " << out2 << " " << out3 << endl;
    return 0;
}
