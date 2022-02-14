
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ Information; } ;
struct TYPE_12__ {TYPE_1__ IoStatus; } ;
struct TYPE_11__ {scalar_t__ DeviceObject; } ;
struct TYPE_10__ {scalar_t__ DeviceObject; void* PriorityBoost; TYPE_2__* DeviceExt; TYPE_5__* Irp; } ;
struct TYPE_9__ {int DirResource; } ;
typedef TYPE_3__* PVFAT_IRP_CONTEXT ;
typedef int NTSTATUS ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (scalar_t__,TYPE_5__*) ;
 TYPE_4__* VAR_4 ;

NTSTATUS
FUNC_6(
    PVFAT_IRP_CONTEXT VAR_5)
{
    NTSTATUS VAR_6;

    FUNC_0(VAR_5);

    if (VAR_5->DeviceObject == VAR_4->DeviceObject)
    {

        FUNC_1 ("FsdCreate called with file system\n");
        VAR_5->Irp->IoStatus.Information = VAR_0;
        VAR_5->PriorityBoost = VAR_1;

        return VAR_2;
    }

    VAR_5->Irp->IoStatus.Information = 0;
    FUNC_2(&VAR_5->DeviceExt->DirResource, VAR_3);
    VAR_6 = FUNC_5(VAR_5->DeviceObject, VAR_5->Irp);
    FUNC_3(&VAR_5->DeviceExt->DirResource);

    if (FUNC_4(VAR_6))
        VAR_5->PriorityBoost = VAR_1;

    return VAR_6;
}
