
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pmc ;
typedef int PROCESS_MEMORY_COUNTERS ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int) ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_3 (int,char*,...) ;

__attribute__((used)) static void FUNC_4(void)
{
    PROCESS_MEMORY_COUNTERS VAR_5;
    DWORD VAR_6;

    FUNC_2(0xdeadbeef);
    VAR_6 = FUNC_1(((void*)0), &VAR_5, sizeof(VAR_5));
    FUNC_3(!VAR_6, "GetProcessMemoryInfo should fail\n");
    FUNC_3(FUNC_0() == VAR_2, "expected error=ERROR_INVALID_HANDLE but got %d\n", FUNC_0());

    FUNC_2(0xdeadbeef);
    VAR_6 = FUNC_1(VAR_4, &VAR_5, sizeof(VAR_5));
    FUNC_3(!VAR_6, "GetProcessMemoryInfo should fail\n");
    FUNC_3(FUNC_0() == VAR_0, "expected error=ERROR_ACCESS_DENIED but got %d\n", FUNC_0());

    FUNC_2(0xdeadbeef);
    VAR_6 = FUNC_1(VAR_3, &VAR_5, sizeof(VAR_5)-1);
    FUNC_3(!VAR_6, "GetProcessMemoryInfo should fail\n");
    FUNC_3(FUNC_0() == VAR_1, "expected error=ERROR_INSUFFICIENT_BUFFER but got %d\n", FUNC_0());

    FUNC_2(0xdeadbeef);
    VAR_6 = FUNC_1(VAR_3, &VAR_5, sizeof(VAR_5));
    FUNC_3(VAR_6 == 1, "failed with %d\n", FUNC_0());
}
