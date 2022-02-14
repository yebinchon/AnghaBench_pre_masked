
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HMODULE ;
typedef scalar_t__ FARPROC ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*,...) ;

__attribute__((used)) static void FUNC_4(void)
{
    FARPROC VAR_2;

    FUNC_2(0xdeadbeef);
    VAR_2 = FUNC_1(((void*)0), "non_ex_call");
    FUNC_3( !VAR_2, "non_ex_call should not be found\n");
    FUNC_3( FUNC_0() == VAR_1, "Expected ERROR_PROC_NOT_FOUND, got %d\n", FUNC_0() );

    FUNC_2(0xdeadbeef);
    VAR_2 = FUNC_1((HMODULE)0xdeadbeef, "non_ex_call");
    FUNC_3( !VAR_2, "non_ex_call should not be found\n");
    FUNC_3( FUNC_0() == VAR_0, "Expected ERROR_MOD_NOT_FOUND, got %d\n", FUNC_0() );
}
