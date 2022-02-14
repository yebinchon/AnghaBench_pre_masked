
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int WorkQueueItem; int DeviceObject; int Irp; TYPE_2__* Context; } ;
struct TYPE_8__ {TYPE_1__* FDODeviceExtension; } ;
struct TYPE_7__ {int FunctionalDeviceObject; int TimerWorkQueueEnabled; int SrbErrorHandlingActive; } ;
typedef TYPE_2__* PIRP_CONTEXT ;
typedef int PIRP ;
typedef TYPE_3__* PERRORHANDLER_WORKITEM_DATA ;
typedef int NTSTATUS ;
typedef int ERRORHANDLER_WORKITEM_DATA ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int *,int ,TYPE_3__*) ;
 int FUNC_3 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

NTSTATUS
FUNC_4(
    PIRP_CONTEXT VAR_8,
    PIRP VAR_9)
{
    PERRORHANDLER_WORKITEM_DATA VAR_10;




    VAR_10 = FUNC_1(VAR_3, sizeof(ERRORHANDLER_WORKITEM_DATA), VAR_7);
    if (!VAR_10)
    {



        return VAR_4;
    }




    VAR_8->FDODeviceExtension->SrbErrorHandlingActive = VAR_6;




    VAR_8->FDODeviceExtension->TimerWorkQueueEnabled = VAR_2;




    FUNC_2(&VAR_10->WorkQueueItem,
                         VAR_1,
                         VAR_10);

    VAR_10->DeviceObject = VAR_8->FDODeviceExtension->FunctionalDeviceObject;
    VAR_10->Context = VAR_8;
    VAR_10->Irp = VAR_9;
    VAR_10->DeviceObject = VAR_8->FDODeviceExtension->FunctionalDeviceObject;

    FUNC_0("Queuing WorkItemROutine\n");
    FUNC_3(&VAR_10->WorkQueueItem, VAR_0);
    return VAR_5;
}
