
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int priority ;
typedef int ULONG ;
struct TYPE_3__ {scalar_t__ PriorityClass; } ;
typedef TYPE_1__ PROCESS_PRIORITY_CLASS ;
typedef scalar_t__ NTSTATUS ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int * FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_6 (int *,int ,TYPE_1__**,int,int *) ;

__attribute__((used)) static void FUNC_7(void)
{
    PROCESS_PRIORITY_CLASS VAR_7[2];
    ULONG VAR_8;
    DWORD VAR_9;
    NTSTATUS VAR_10;
    BOOL VAR_11;

    VAR_10 = FUNC_6(((void*)0), VAR_2, ((void*)0), sizeof(VAR_7[0]), ((void*)0));
    FUNC_5(VAR_10 == VAR_3 || FUNC_4(VAR_10 == VAR_5) ,
       "Expected STATUS_ACCESS_VIOLATION, got %08x\n", VAR_10);

    VAR_10 = FUNC_6(((void*)0), VAR_2, &VAR_7, sizeof(VAR_7[0]), ((void*)0));
    FUNC_5(VAR_10 == VAR_5, "Expected STATUS_INVALID_HANDLE, got %08x\n", VAR_10);

    VAR_10 = FUNC_6(FUNC_0(), VAR_2, &VAR_7, 1, &VAR_8);
    FUNC_5(VAR_10 == VAR_4, "Expected STATUS_INFO_LENGTH_MISMATCH, got %08x\n", VAR_10);

    VAR_10 = FUNC_6(FUNC_0(), VAR_2, &VAR_7, sizeof(VAR_7), &VAR_8);
    FUNC_5(VAR_10 == VAR_4, "Expected STATUS_INFO_LENGTH_MISMATCH, got %08x\n", VAR_10);

    VAR_9 = FUNC_2(FUNC_0());
    VAR_11 = FUNC_3(FUNC_0(), VAR_0);
    FUNC_5(VAR_11, "Failed to set priority class: %u\n", FUNC_1());

    VAR_10 = FUNC_6(FUNC_0(), VAR_2, &VAR_7, sizeof(VAR_7[0]), &VAR_8);
    FUNC_5(VAR_10 == VAR_6, "Expected STATUS_SUCCESS, got %08x\n", VAR_10);
    FUNC_5(VAR_7[0].PriorityClass == VAR_1,
       "Expected PROCESS_PRIOCLASS_BELOW_NORMAL, got %u\n", VAR_7[0].PriorityClass);

    VAR_11 = FUNC_3(FUNC_0(), VAR_9);
    FUNC_5(VAR_11, "Failed to reset priority class: %u\n", FUNC_1());
}
