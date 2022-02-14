
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ptrdiff_t ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*,int) ;

void
FUNC_2()
{
    char VAR_0[64];

    FUNC_1(VAR_0, "%p", (void*)(ptrdiff_t)0x123abc);
    FUNC_0(VAR_0, "00123ABC");

    FUNC_1(VAR_0, "%#p", (void*)(ptrdiff_t)0x123abc);
    FUNC_0(VAR_0, "0X00123ABC");

    FUNC_1(VAR_0, "%#012p", (void*)(ptrdiff_t)0x123abc);
    FUNC_0(VAR_0, "  0X00123ABC");

    FUNC_1(VAR_0, "%9p", (void*)(ptrdiff_t)0x123abc);
    FUNC_0(VAR_0, " 00123ABC");

    FUNC_1(VAR_0, "%09p", (void*)(ptrdiff_t)0x123abc);
    FUNC_0(VAR_0, " 00123ABC");

    FUNC_1(VAR_0, "% 9p", (void*)(ptrdiff_t)0x123abc);
    FUNC_0(VAR_0, " 00123ABC");

    FUNC_1(VAR_0, "%-9p", (void*)(ptrdiff_t)0x123abc);
    FUNC_0(VAR_0, "00123ABC ");

    FUNC_1(VAR_0, "%4p", (void*)(ptrdiff_t)0x123abc);
    FUNC_0(VAR_0, "00123ABC");

    FUNC_1(VAR_0, "%9.4p", (void*)(ptrdiff_t)0x123abc);
    FUNC_0(VAR_0, " 00123ABC");

    FUNC_1(VAR_0, "%I64p", 0x123abc456789ULL);
    FUNC_0(VAR_0, "123ABC456789");

    FUNC_1(VAR_0, "%hp", 0x123abc);
    FUNC_0(VAR_0, "00003ABC");

}
