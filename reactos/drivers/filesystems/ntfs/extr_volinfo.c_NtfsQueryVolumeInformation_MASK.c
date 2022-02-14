
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_25__ {int DirResource; } ;
struct TYPE_24__ {TYPE_9__* DeviceExtension; } ;
struct TYPE_18__ {int FsInformationClass; scalar_t__ Length; } ;
struct TYPE_19__ {TYPE_2__ QueryVolume; } ;
struct TYPE_23__ {TYPE_3__ Parameters; } ;
struct TYPE_20__ {scalar_t__ Information; } ;
struct TYPE_17__ {int SystemBuffer; } ;
struct TYPE_22__ {TYPE_4__ IoStatus; TYPE_1__ AssociatedIrp; } ;
struct TYPE_21__ {int Flags; TYPE_7__* Stack; TYPE_8__* DeviceObject; TYPE_6__* Irp; } ;
typedef int PVOID ;
typedef TYPE_5__* PNTFS_IRP_CONTEXT ;
typedef TYPE_6__* PIRP ;
typedef TYPE_7__* PIO_STACK_LOCATION ;
typedef TYPE_8__* PDEVICE_OBJECT ;
typedef TYPE_9__* PDEVICE_EXTENSION ;
typedef int NTSTATUS ;
typedef int FS_INFORMATION_CLASS ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;




 int VAR_0 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_9__*,int,scalar_t__*) ;
 int FUNC_7 (TYPE_8__*,int,scalar_t__*) ;
 int FUNC_8 (TYPE_8__*,int,scalar_t__*) ;
 int FUNC_9 (TYPE_8__*,int,scalar_t__*) ;
 int FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (int,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;

NTSTATUS
FUNC_12(PNTFS_IRP_CONTEXT VAR_3)
{
    PIRP VAR_4;
    PDEVICE_OBJECT VAR_5;
    FS_INFORMATION_CLASS VAR_6;
    PIO_STACK_LOCATION VAR_7;
    NTSTATUS VAR_8 = VAR_2;
    PVOID VAR_9;
    ULONG VAR_10;
    PDEVICE_EXTENSION VAR_11;

    FUNC_2("NtfsQueryVolumeInformation() called\n");

    FUNC_0(VAR_3);

    VAR_4 = VAR_3->Irp;
    VAR_5 = VAR_3->DeviceObject;
    VAR_11 = VAR_5->DeviceExtension;
    VAR_7 = VAR_3->Stack;

    if (!FUNC_3(&VAR_11->DirResource,
                                     FUNC_1(VAR_3->Flags, VAR_0)))
    {
        return FUNC_10(VAR_3);
    }

    VAR_6 = VAR_7->Parameters.QueryVolume.FsInformationClass;
    VAR_10 = VAR_7->Parameters.QueryVolume.Length;
    VAR_9 = VAR_4->AssociatedIrp.SystemBuffer;
    FUNC_11(VAR_9, VAR_10);

    FUNC_2("FsInformationClass %d\n", VAR_6);
    FUNC_2("SystemBuffer %p\n", VAR_9);

    switch (VAR_6)
    {
        case 128:
            VAR_8 = FUNC_9(VAR_5,
                                                VAR_9,
                                                &VAR_10);
            break;

        case 131:
            VAR_8 = FUNC_6(VAR_5->DeviceExtension,
                                                   VAR_9,
                                                   &VAR_10);
            break;

        case 129:
            VAR_8 = FUNC_8(VAR_5,
                                              VAR_9,
                                              &VAR_10);
            break;

        case 130:
            VAR_8 = FUNC_7(VAR_5,
                                                VAR_9,
                                                &VAR_10);
            break;

        default:
            VAR_8 = VAR_1;
    }

    FUNC_4(&VAR_11->DirResource);

    if (FUNC_5(VAR_8))
        VAR_4->IoStatus.Information =
            VAR_7->Parameters.QueryVolume.Length - VAR_10;
    else
        VAR_4->IoStatus.Information = 0;

    return VAR_8;
}
