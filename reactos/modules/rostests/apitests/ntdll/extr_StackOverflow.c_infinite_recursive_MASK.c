
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
struct TYPE_3__ {int Type; int Protect; int State; int RegionSize; int AllocationProtect; int BaseAddress; int AllocationBase; } ;
typedef scalar_t__ PVOID ;
typedef int NTSTATUS ;
typedef int MemoryBasicInfo ;
typedef TYPE_1__ MEMORY_BASIC_INFORMATION ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,int ,TYPE_1__*,int,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (char*,char*,int ) ;

__attribute__((used)) static
void
FUNC_7(void)
{
    MEMORY_BASIC_INFORMATION VAR_10;
    NTSTATUS VAR_11;
    char VAR_12[0x500];

    FUNC_6(VAR_12, "Iteration %d.\n", VAR_9++);

    VAR_11 = FUNC_1(
        FUNC_0(),
        &VAR_12[0],
        VAR_3,
        &VAR_10,
        sizeof(VAR_10),
        ((void*)0));
    FUNC_4(VAR_11, VAR_6);

    FUNC_5(VAR_10.AllocationBase, VAR_7);

    FUNC_5(VAR_10.BaseAddress, (PVOID)FUNC_2(&VAR_12[0]));

    FUNC_3(VAR_10.AllocationProtect, VAR_4);





    FUNC_3(VAR_10.State, VAR_1);

    FUNC_3(VAR_10.Protect, VAR_4);

    FUNC_3(VAR_10.Type, VAR_2);

    VAR_0 = &VAR_12[-0x500];

    FUNC_7();
}
