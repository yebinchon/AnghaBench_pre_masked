
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_19__ {int DirResource; } ;
struct TYPE_18__ {scalar_t__ DeviceObject; } ;
struct TYPE_17__ {int MainResource; int Flags; } ;
struct TYPE_16__ {scalar_t__ DeviceObject; TYPE_3__* Irp; TYPE_7__* DeviceExt; TYPE_1__* FileObject; } ;
struct TYPE_14__ {scalar_t__ Information; } ;
struct TYPE_15__ {TYPE_2__ IoStatus; } ;
struct TYPE_13__ {scalar_t__ FsContext; } ;
typedef TYPE_4__* PVFAT_IRP_CONTEXT ;
typedef TYPE_5__* PVFATFCB ;
typedef int NTSTATUS ;


 int FUNC_0 (TYPE_5__*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_7__*,TYPE_5__*) ;
 int FUNC_5 (TYPE_7__*,TYPE_5__*) ;
 TYPE_6__* VAR_3 ;

NTSTATUS
FUNC_6(
    PVFAT_IRP_CONTEXT VAR_4)
{
    NTSTATUS VAR_5;
    PVFATFCB VAR_6;


    if (VAR_4->DeviceObject == VAR_3->DeviceObject)
    {
        VAR_4->Irp->IoStatus.Information = 0;
        return VAR_1;
    }

    VAR_6 = (PVFATFCB)VAR_4->FileObject->FsContext;
    FUNC_0(VAR_6);

    if (FUNC_1(VAR_6->Flags, VAR_0))
    {
        FUNC_2(&VAR_4->DeviceExt->DirResource, VAR_2);
        VAR_5 = FUNC_5(VAR_4->DeviceExt, VAR_6);
        FUNC_3(&VAR_4->DeviceExt->DirResource);
    }
    else
    {
        FUNC_2(&VAR_6->MainResource, VAR_2);
        VAR_5 = FUNC_4(VAR_4->DeviceExt, VAR_6);
        FUNC_3 (&VAR_6->MainResource);
    }

    VAR_4->Irp->IoStatus.Information = 0;
    return VAR_5;
}
