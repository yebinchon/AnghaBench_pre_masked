
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_10__ ;


struct TYPE_23__ {scalar_t__ Argument1; } ;
struct TYPE_24__ {TYPE_3__ Others; } ;
struct TYPE_27__ {TYPE_4__ Parameters; } ;
struct TYPE_25__ {scalar_t__ Information; int Status; } ;
struct TYPE_26__ {int RetryCount; struct TYPE_26__* cbw; TYPE_10__* FDODeviceExtension; struct TYPE_26__* Irp; struct TYPE_26__* Self; struct TYPE_26__* PDODeviceExtension; int LowerDeviceObject; TYPE_5__ IoStatus; scalar_t__ Cdb; } ;
struct TYPE_22__ {TYPE_1__* Pipes; } ;
struct TYPE_21__ {int PipeHandle; } ;
struct TYPE_20__ {size_t BulkInPipeIndex; size_t BulkOutPipeIndex; int * LastTimerActiveSrb; int TimerWorkQueueEnabled; void* SrbErrorHandlingActive; TYPE_2__* InterfaceInformation; int LowerDeviceObject; } ;
typedef TYPE_6__* PSCSI_REQUEST_BLOCK ;
typedef TYPE_6__* PIRP_CONTEXT ;
typedef TYPE_8__* PIO_STACK_LOCATION ;
typedef int PDEVICE_OBJECT ;
typedef TYPE_6__* PCDB ;
typedef int NTSTATUS ;


 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (char*,int,...) ;
 void* VAR_0 ;
 int FUNC_2 (TYPE_6__*) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_6__*,int ) ;
 TYPE_8__* FUNC_4 (TYPE_6__*) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (TYPE_6__*,TYPE_6__*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,TYPE_6__*) ;
 int FUNC_9 (int ,TYPE_10__*) ;
 int FUNC_10 (int ,int ) ;

NTSTATUS
FUNC_11(
    PDEVICE_OBJECT VAR_4,
    PIRP_CONTEXT VAR_5)
{
    NTSTATUS VAR_6 = VAR_2;
    PIO_STACK_LOCATION VAR_7;
    PSCSI_REQUEST_BLOCK VAR_8;
    PCDB VAR_9;




    FUNC_0(VAR_5);
    FUNC_0(VAR_5->PDODeviceExtension);
    FUNC_0(VAR_5->PDODeviceExtension->Self);
    FUNC_0(VAR_5->Irp);




    VAR_6 = FUNC_9(VAR_5->FDODeviceExtension->LowerDeviceObject, VAR_5->FDODeviceExtension);
    if (FUNC_5(VAR_6))
    {



        VAR_6 = FUNC_10(VAR_5->FDODeviceExtension->LowerDeviceObject, VAR_5->FDODeviceExtension->InterfaceInformation->Pipes[VAR_5->FDODeviceExtension->BulkInPipeIndex].PipeHandle);
        if (FUNC_5(VAR_6))
        {



            VAR_6 = FUNC_10(VAR_5->FDODeviceExtension->LowerDeviceObject, VAR_5->FDODeviceExtension->InterfaceInformation->Pipes[VAR_5->FDODeviceExtension->BulkOutPipeIndex].PipeHandle);
        }
    }




    VAR_7 = FUNC_4(VAR_5->Irp);




    VAR_8 = (PSCSI_REQUEST_BLOCK)VAR_7->Parameters.Others.Argument1;
    FUNC_0(VAR_8);




    VAR_9 = (PCDB)VAR_8->Cdb;
    FUNC_0(VAR_9);

    if (VAR_6 != VAR_2 || VAR_5->RetryCount >= 1)
    {



        VAR_5->Irp->IoStatus.Status = VAR_6;
        VAR_5->Irp->IoStatus.Information = 0;
        FUNC_8(VAR_5->PDODeviceExtension->LowerDeviceObject, VAR_5->Irp);
        FUNC_3(VAR_5->Irp, VAR_1);




        FUNC_7(VAR_5->PDODeviceExtension->LowerDeviceObject);




        VAR_5->FDODeviceExtension->SrbErrorHandlingActive = VAR_0;




        VAR_5->FDODeviceExtension->LastTimerActiveSrb = ((void*)0);
    }
    else
    {
        FUNC_1("Retrying Count %lu %p\n", VAR_5->RetryCount, VAR_5->PDODeviceExtension->Self);




        FUNC_6(VAR_5->PDODeviceExtension->Self, VAR_5->Irp, VAR_5->RetryCount + 1);




        VAR_5->FDODeviceExtension->SrbErrorHandlingActive = VAR_0;




        VAR_5->FDODeviceExtension->TimerWorkQueueEnabled = VAR_3;




        VAR_5->FDODeviceExtension->LastTimerActiveSrb = ((void*)0);
    }




    FUNC_2(VAR_5->cbw);
    FUNC_2(VAR_5);


    FUNC_1("USBSTOR_HandleTransferError returning with Status %x\n", VAR_6);
    return VAR_6;
}
