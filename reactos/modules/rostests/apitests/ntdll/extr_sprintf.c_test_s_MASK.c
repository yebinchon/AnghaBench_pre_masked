
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*,char*) ;

void
FUNC_2()
{
    char VAR_0[64];

    FUNC_1(VAR_0, "%s", "test");
    FUNC_0(VAR_0, "test");

    FUNC_1(VAR_0, "%S", L"test");
    FUNC_0(VAR_0, "test");

    FUNC_1(VAR_0, "%ls", L"test");
    FUNC_0(VAR_0, "test");

    FUNC_1(VAR_0, "%ws", L"test");
    FUNC_0(VAR_0, "test");

    FUNC_1(VAR_0, "%hs", "test");
    FUNC_0(VAR_0, "test");

    FUNC_1(VAR_0, "%hS", "test");
    FUNC_0(VAR_0, "test");

    FUNC_1(VAR_0, "%7s", "test");
    FUNC_0(VAR_0, "   test");

    FUNC_1(VAR_0, "%07s", "test");
    FUNC_0(VAR_0, "000test");

    FUNC_1(VAR_0, "%.3s", "test");
    FUNC_0(VAR_0, "tes");

    FUNC_1(VAR_0, "%+7.3s", "test");
    FUNC_0(VAR_0, "    tes");

    FUNC_1(VAR_0, "%+4.0s", "test");
    FUNC_0(VAR_0, "    ");


}
