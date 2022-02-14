
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int StorageDevice; } ;
struct TYPE_9__ {int Irp; int Flags; TYPE_2__* Stack; } ;
struct TYPE_8__ {int MinorFunction; TYPE_1__* DeviceObject; } ;
struct TYPE_7__ {int DeviceExtension; } ;
typedef TYPE_3__* PVFAT_IRP_CONTEXT ;
typedef TYPE_4__* PVCB ;
typedef int NTSTATUS ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;




 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;

NTSTATUS
FUNC_3(
    PVFAT_IRP_CONTEXT VAR_2)
{
    PVCB VAR_3 = ((void*)0);
    NTSTATUS VAR_4;


    FUNC_0(VAR_2);

    switch (VAR_2->Stack->MinorFunction)
    {
        case 130:
        case 128:
        case 129:
        case 131:
            VAR_4 = VAR_1;
            break;

        default:
            FUNC_2(VAR_2->Irp);
            VAR_3 = (PVCB)VAR_2->Stack->DeviceObject->DeviceExtension;
            VAR_2->Flags &= ~VAR_0;
            VAR_4 = FUNC_1(VAR_3->StorageDevice, VAR_2->Irp);
    }

    return VAR_4;
}
