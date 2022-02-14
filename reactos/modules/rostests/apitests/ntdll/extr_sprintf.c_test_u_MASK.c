
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

    FUNC_1(VAR_0, "%u", 1234);
    FUNC_0(VAR_0, "1234");

    FUNC_1(VAR_0, "%u", -1234);
    FUNC_0(VAR_0, "4294966062");

    FUNC_1(VAR_0, "%lu", -1234);
    FUNC_0(VAR_0, "4294966062");

    FUNC_1(VAR_0, "%llu", -1234);
    FUNC_0(VAR_0, "4294966062");

    FUNC_1(VAR_0, "%+u", 1234);
    FUNC_0(VAR_0, "1234");

    FUNC_1(VAR_0, "% u", 1234);
    FUNC_0(VAR_0, "1234");

}
