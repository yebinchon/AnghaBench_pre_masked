
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef int WCHAR ;
struct TYPE_22__ {int MaximumLength; scalar_t__ Length; int * Buffer; } ;
typedef TYPE_5__ UNICODE_STRING ;
typedef int ULONG ;
struct TYPE_26__ {int StorageDevice; int FatInfo; } ;
struct TYPE_25__ {TYPE_9__* DeviceExtension; } ;
struct TYPE_24__ {TYPE_3__* Stack; } ;
struct TYPE_23__ {TYPE_4__* RealDevice; scalar_t__ VolumeLabelLength; int * VolumeLabel; } ;
struct TYPE_21__ {int Flags; } ;
struct TYPE_18__ {TYPE_6__* Vpb; TYPE_8__* DeviceObject; } ;
struct TYPE_19__ {TYPE_1__ VerifyVolume; } ;
struct TYPE_20__ {int Flags; TYPE_2__ Parameters; } ;
struct TYPE_17__ {int rootStart; int BytesPerSector; scalar_t__ FatType; } ;
typedef TYPE_6__* PVPB ;
typedef TYPE_7__* PVFAT_IRP_CONTEXT ;
typedef TYPE_8__* PDEVICE_OBJECT ;
typedef TYPE_9__* PDEVICE_EXTENSION ;
typedef scalar_t__ NTSTATUS ;
typedef TYPE_10__ FATINFO ;
typedef int ChangeCount ;
typedef int BufferU ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int,int,TYPE_5__*) ;
 int FUNC_5 (TYPE_10__*,int *,int) ;
 scalar_t__ FUNC_6 (TYPE_5__*,TYPE_5__*,scalar_t__) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_7 (int ,int ,int *,int ,int*,int*,int ) ;
 scalar_t__ FUNC_8 (int ,scalar_t__*,TYPE_10__*,int ) ;

__attribute__((used)) static
NTSTATUS
FUNC_9(
    PVFAT_IRP_CONTEXT VAR_10)
{
    PDEVICE_OBJECT VAR_11;
    NTSTATUS VAR_12;
    FATINFO VAR_13;
    BOOLEAN VAR_14;
    PDEVICE_EXTENSION VAR_15;
    BOOLEAN VAR_16;
    PVPB VAR_17;
    ULONG VAR_18, VAR_19 = sizeof(VAR_18);

    FUNC_1("VfatVerify(IrpContext %p)\n", VAR_10);

    VAR_11 = VAR_10->Stack->Parameters.VerifyVolume.DeviceObject;
    VAR_15 = VAR_11->DeviceExtension;
    VAR_17 = VAR_10->Stack->Parameters.VerifyVolume.Vpb;
    VAR_16 = FUNC_0(VAR_10->Stack->Flags, VAR_5);

    if (!FUNC_0(VAR_17->RealDevice->Flags, VAR_0))
    {
        FUNC_1("Already verified\n");
        return VAR_6;
    }

    VAR_12 = FUNC_7(VAR_15->StorageDevice,
                                      VAR_3,
                                      ((void*)0),
                                      0,
                                      &VAR_18,
                                      &VAR_19,
                                      VAR_9);
    if (!FUNC_3(VAR_12) && VAR_12 != VAR_7)
    {
        FUNC_1("VfatBlockDeviceIoControl() failed (Status %lx)\n", VAR_12);
        VAR_12 = (VAR_16 ? VAR_8 : VAR_12);
    }
    else
    {
        VAR_12 = FUNC_8(VAR_15->StorageDevice, &VAR_14, &VAR_13, VAR_9);
        if (!FUNC_3(VAR_12) || VAR_14 == VAR_1)
        {
            if (FUNC_3(VAR_12) || VAR_16)
            {
                VAR_12 = VAR_8;
            }
        }
        else if (sizeof(FATINFO) == FUNC_5(&VAR_13, &VAR_15->FatInfo, sizeof(FATINFO)))
        {
            WCHAR VAR_20[VAR_4 / sizeof(WCHAR)];
            UNICODE_STRING VAR_21;
            UNICODE_STRING VAR_22;

            VAR_21.Buffer = VAR_20;
            VAR_21.Length = 0;
            VAR_21.MaximumLength = sizeof(VAR_20);
            VAR_12 = FUNC_4(VAR_15->StorageDevice, VAR_13.rootStart * VAR_13.BytesPerSector, (VAR_13.FatType >= VAR_2), &VAR_21);
            if (!FUNC_3(VAR_12))
            {
                if (VAR_16)
                {
                    VAR_12 = VAR_8;
                }
            }
            else
            {
                VAR_22.Buffer = VAR_17->VolumeLabel;
                VAR_22.Length = VAR_17->VolumeLabelLength;
                VAR_22.MaximumLength = sizeof(VAR_17->VolumeLabel);

                if (FUNC_6(&VAR_22, &VAR_21, VAR_1) != 0)
                {
                    VAR_12 = VAR_8;
                }
                else
                {
                    FUNC_2("Same volume\n");
                }
            }
        }
        else
        {
            VAR_12 = VAR_8;
        }
    }

    VAR_17->RealDevice->Flags &= ~VAR_0;

    return VAR_12;
}
