
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int test2 ;
typedef int test1 ;


 scalar_t__ FUNC_0 (char const*,int,char*) ;

__attribute__((used)) static int
FUNC_1(void)
{
    static const char VAR_0[] =
        "\x03\x00\x00\x13"
        "\x0e\xd0\x00\x00\x12\x34\x00\x02\x0f\x08\x00\x02\x00\x00\x00";
    static const char VAR_1[] = "\x03\x00\x00\x13"
        "\x0e\xd0\x00\x00\x12\x34\x00\x03\x00\x08\x00\x05\x00\x00\x00";

    int VAR_2 = 0;

    VAR_2 += FUNC_0(VAR_0, sizeof(VAR_0) - 1, "NLA-sup");
    VAR_2 += FUNC_0(VAR_1, sizeof(VAR_1) - 1, "NLA-unsup");

    return VAR_2;
}
