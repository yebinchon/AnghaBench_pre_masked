
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* VolumeFcb; } ;
struct TYPE_8__ {TYPE_3__* DeviceExt; } ;
struct TYPE_7__ {int Flags; } ;
typedef TYPE_2__* PVFAT_IRP_CONTEXT ;
typedef TYPE_3__* PDEVICE_EXTENSION ;
typedef int NTSTATUS ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static
NTSTATUS
FUNC_3(
    PVFAT_IRP_CONTEXT VAR_4)
{
    PDEVICE_EXTENSION VAR_5;
    NTSTATUS VAR_6 = VAR_0;

    FUNC_1("VfatMarkVolumeDirty(IrpContext %p)\n", VAR_4);
    VAR_5 = VAR_4->DeviceExt;

    if (!FUNC_0(VAR_5->VolumeFcb->Flags, VAR_3))
    {
        VAR_6 = FUNC_2(VAR_5, VAR_1);
    }

    VAR_5->VolumeFcb->Flags &= ~VAR_2;

    return VAR_6;
}
