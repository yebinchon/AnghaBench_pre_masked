
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_20__ {TYPE_6__* Irp; TYPE_4__* DeviceExt; TYPE_1__* Stack; } ;
struct TYPE_19__ {int OutputBufferLength; } ;
struct TYPE_18__ {TYPE_8__ FileSystemControl; } ;
struct TYPE_16__ {int Information; } ;
struct TYPE_13__ {scalar_t__ SystemBuffer; } ;
struct TYPE_17__ {TYPE_5__ IoStatus; TYPE_2__ AssociatedIrp; } ;
struct TYPE_15__ {TYPE_3__* VolumeFcb; } ;
struct TYPE_14__ {int Flags; } ;
struct TYPE_12__ {TYPE_7__ Parameters; } ;
typedef TYPE_9__* PVFAT_IRP_CONTEXT ;
typedef int * PULONG ;
typedef int NTSTATUS ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,TYPE_9__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static
NTSTATUS
FUNC_2(
    PVFAT_IRP_CONTEXT VAR_6)
{
    PULONG VAR_7;

    FUNC_1("VfatIsVolumeDirty(IrpContext %p)\n", VAR_6);

    if (VAR_6->Stack->Parameters.FileSystemControl.OutputBufferLength != sizeof(ULONG))
        return VAR_0;
    else if (!VAR_6->Irp->AssociatedIrp.SystemBuffer)
        return VAR_1;

    VAR_7 = (PULONG)VAR_6->Irp->AssociatedIrp.SystemBuffer;
    *VAR_7 = 0;

    if (FUNC_0(VAR_6->DeviceExt->VolumeFcb->Flags, VAR_4) &&
        !FUNC_0(VAR_6->DeviceExt->VolumeFcb->Flags, VAR_3))
    {
        *VAR_7 |= VAR_5;
    }

    VAR_6->Irp->IoStatus.Information = sizeof(ULONG);

    return VAR_2;
}
