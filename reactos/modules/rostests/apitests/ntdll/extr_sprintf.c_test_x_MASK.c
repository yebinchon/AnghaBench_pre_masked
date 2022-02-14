
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*,int) ;

void
FUNC_2()
{
    char VAR_0[64];

    FUNC_1(VAR_0, "%x", 0x1234abcd);
    FUNC_0(VAR_0, "1234abcd");

    FUNC_1(VAR_0, "%X", 0x1234abcd);
    FUNC_0(VAR_0, "1234ABCD");

    FUNC_1(VAR_0, "%#x", 0x1234abcd);
    FUNC_0(VAR_0, "0x1234abcd");

    FUNC_1(VAR_0, "%#X", 0x1234abcd);
    FUNC_0(VAR_0, "0X1234ABCD");


    FUNC_1(VAR_0, "%#012X", 0x1234abcd);
    FUNC_0(VAR_0, "0X001234ABCD");

    FUNC_1(VAR_0, "%llx", 0x1234abcd5678ULL);
    FUNC_0(VAR_0, "abcd5678");

    FUNC_1(VAR_0, "%I64x", 0x1234abcd5678ULL);
    FUNC_0(VAR_0, "1234abcd5678");

}
