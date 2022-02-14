
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int skdi ;
typedef int ULONG ;
typedef int SYSTEM_KERNEL_DEBUGGER_INFORMATION ;
typedef int NTSTATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int ,int *,int,int*) ;

__attribute__((used)) static void FUNC_2(void)
{
    NTSTATUS VAR_3;
    ULONG VAR_4;
    SYSTEM_KERNEL_DEBUGGER_INFORMATION VAR_5;

    VAR_3 = FUNC_1(VAR_2, &VAR_5, 0, &VAR_4);
    FUNC_0( VAR_3 == VAR_0, "Expected STATUS_INFO_LENGTH_MISMATCH, got %08x\n", VAR_3);

    VAR_3 = FUNC_1(VAR_2, &VAR_5, sizeof(VAR_5), &VAR_4);
    FUNC_0( VAR_3 == VAR_1, "Expected STATUS_SUCCESS, got %08x\n", VAR_3);
    FUNC_0( sizeof(VAR_5) == VAR_4, "Inconsistent length %d\n", VAR_4);

    VAR_3 = FUNC_1(VAR_2, &VAR_5, sizeof(VAR_5) + 2, &VAR_4);
    FUNC_0( VAR_3 == VAR_1, "Expected STATUS_SUCCESS, got %08x\n", VAR_3);
    FUNC_0( sizeof(VAR_5) == VAR_4, "Inconsistent length %d\n", VAR_4);
}
