
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG_PTR ;
typedef scalar_t__ HKL ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 () ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (char*,char*) ;

__attribute__((used)) static void FUNC_7(void)
{
    BOOL VAR_2;
    char VAR_3[VAR_1];

    if (0)
        VAR_2 = FUNC_1(((void*)0));

    FUNC_4(0xdeadbeef);
    VAR_2 = FUNC_2(((void*)0));
    FUNC_5(!VAR_2, "got %d\n", VAR_2);
    FUNC_5(FUNC_3() == VAR_0, "got %d\n", FUNC_3());

    if (FUNC_0(0) != (HKL)(ULONG_PTR)0x04090409) return;

    VAR_3[0] = 0;
    VAR_2 = FUNC_1(VAR_3);
    FUNC_5(VAR_2, "GetKeyboardLayoutNameA failed %u\n", FUNC_3());
    FUNC_5(!FUNC_6(VAR_3, "00000409"), "expected 00000409, got %s\n", VAR_3);
}
