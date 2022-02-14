
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_5__ {int RtlHandle; } ;
typedef int RTL_HANDLE_TABLE ;
typedef int RTL_HANDLE ;
typedef TYPE_1__* NTSTATUS ;
typedef TYPE_1__ MY_HANDLE ;
typedef int BOOLEAN ;


 int FUNC_0 (int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int,int,int *) ;
 int FUNC_6 (int *,int ,int **) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    BOOLEAN VAR_1;
    NTSTATUS VAR_2;
    ULONG VAR_3;
    MY_HANDLE * VAR_4;
    RTL_HANDLE_TABLE VAR_5;

    if (!&FUNC_5)
    {
        FUNC_7("RtlInitializeHandleTable is not available\n");
        return;
    }

    FUNC_5(0x3FFF, sizeof(MY_HANDLE), &VAR_5);
    VAR_4 = (MY_HANDLE *)FUNC_2(&VAR_5, &VAR_3);
    FUNC_1(VAR_4 != ((void*)0), "RtlAllocateHandle failed\n");
    FUNC_0(&VAR_4->RtlHandle);
    VAR_4 = ((void*)0);
    VAR_1 = FUNC_6(&VAR_5, VAR_3, (RTL_HANDLE **)&VAR_4);
    FUNC_1(VAR_1, "Handle %p wasn't valid\n", VAR_4);
    VAR_1 = FUNC_4(&VAR_5, &VAR_4->RtlHandle);
    FUNC_1(VAR_1, "Couldn't free handle %p\n", VAR_4);
    VAR_2 = FUNC_3(&VAR_5);
    FUNC_1(VAR_2 == VAR_0, "RtlDestroyHandleTable failed with error 0x%08x\n", VAR_2);
}
