
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (char*,char*) ;

__attribute__((used)) static void FUNC_7(void)
{
    BOOL VAR_2;
    BOOL VAR_3;
    BOOL VAR_4;

    VAR_2 = FUNC_2();
    FUNC_6("Theming is %s\n", (VAR_2) ? "active" : "inactive");

    VAR_3 = FUNC_1();
    FUNC_6("Test executable is %s\n", (VAR_3) ? "themed" : "not themed");

    FUNC_4(0xdeadbeef);
    VAR_4 = FUNC_3(((void*)0), 0 , 0);
    FUNC_5( VAR_4 == VAR_1, "Expected FALSE\n");
    FUNC_5( FUNC_0() == VAR_0,
        "Expected E_HANDLE, got 0x%08x\n",
        FUNC_0());
}
