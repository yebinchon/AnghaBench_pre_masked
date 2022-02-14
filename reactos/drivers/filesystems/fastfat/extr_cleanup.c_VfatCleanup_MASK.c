
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ Information; } ;
struct TYPE_12__ {TYPE_2__ IoStatus; } ;
struct TYPE_11__ {scalar_t__ DeviceObject; } ;
struct TYPE_10__ {scalar_t__ DeviceObject; TYPE_7__* Irp; TYPE_1__* DeviceExt; } ;
struct TYPE_8__ {int DirResource; } ;
typedef TYPE_3__* PVFAT_IRP_CONTEXT ;
typedef int NTSTATUS ;
typedef int BOOLEAN ;


 int FUNC_0 (char*,scalar_t__,TYPE_7__*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_4__* VAR_2 ;

NTSTATUS
FUNC_4(
    PVFAT_IRP_CONTEXT VAR_3)
{
    BOOLEAN VAR_4;

    FUNC_0("VfatCleanup(DeviceObject %p, Irp %p)\n", VAR_3->DeviceObject, VAR_3->Irp);

    if (VAR_3->DeviceObject == VAR_2->DeviceObject)
    {
        VAR_3->Irp->IoStatus.Information = 0;
        return VAR_0;
    }

    FUNC_1(&VAR_3->DeviceExt->DirResource, VAR_1);
    VAR_4 = FUNC_3(VAR_3);
    if (!VAR_4) FUNC_2(&VAR_3->DeviceExt->DirResource);

    VAR_3->Irp->IoStatus.Information = 0;
    return VAR_0;
}
