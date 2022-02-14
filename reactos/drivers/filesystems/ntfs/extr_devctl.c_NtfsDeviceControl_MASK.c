
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int StorageDevice; } ;
struct TYPE_6__ {int Flags; TYPE_1__* DeviceObject; int Irp; } ;
struct TYPE_5__ {TYPE_3__* DeviceExtension; } ;
typedef TYPE_2__* PNTFS_IRP_CONTEXT ;
typedef int PIRP ;
typedef TYPE_3__* PDEVICE_EXTENSION ;
typedef int NTSTATUS ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

NTSTATUS
FUNC_2(PNTFS_IRP_CONTEXT VAR_1)
{
    PDEVICE_EXTENSION VAR_2;
    PIRP VAR_3 = VAR_1->Irp;

    VAR_2 = VAR_1->DeviceObject->DeviceExtension;
    FUNC_1(VAR_3);


    VAR_1->Flags &= ~VAR_0;

    return FUNC_0(VAR_2->StorageDevice, VAR_3);
}
