
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_11__ ;


typedef scalar_t__ ULONG ;
struct TYPE_24__ {int DirResource; } ;
struct TYPE_23__ {TYPE_6__* Stack; TYPE_3__* Irp; TYPE_11__* DeviceObject; int Flags; } ;
struct TYPE_20__ {int FsInformationClass; scalar_t__ Length; } ;
struct TYPE_21__ {TYPE_4__ QueryVolume; } ;
struct TYPE_22__ {TYPE_5__ Parameters; } ;
struct TYPE_18__ {scalar_t__ Information; } ;
struct TYPE_17__ {int SystemBuffer; } ;
struct TYPE_19__ {TYPE_2__ IoStatus; TYPE_1__ AssociatedIrp; } ;
struct TYPE_16__ {scalar_t__ DeviceExtension; } ;
typedef int PVOID ;
typedef TYPE_7__* PVFAT_IRP_CONTEXT ;
typedef TYPE_8__* PDEVICE_EXTENSION ;
typedef int NTSTATUS ;
typedef int FS_INFORMATION_CLASS ;


 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;





 int FUNC_6 (scalar_t__,int,scalar_t__*) ;
 int FUNC_7 (TYPE_11__*,int,scalar_t__*) ;
 int FUNC_8 (TYPE_11__*,int,scalar_t__*) ;
 int FUNC_9 (TYPE_11__*,int,scalar_t__*) ;
 int FUNC_10 (TYPE_11__*,int,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_11 (TYPE_7__*) ;

NTSTATUS
FUNC_12(
    PVFAT_IRP_CONTEXT VAR_3)
{
    FS_INFORMATION_CLASS VAR_4;
    NTSTATUS VAR_5 = VAR_2;
    PVOID VAR_6;
    ULONG VAR_7;


    FUNC_0(VAR_3);

    FUNC_2("VfatQueryVolumeInformation(IrpContext %p)\n", VAR_3);

    if (!FUNC_4(&((PDEVICE_EXTENSION)VAR_3->DeviceObject->DeviceExtension)->DirResource,
                                     FUNC_1(VAR_3->Flags, VAR_0)))
    {
        FUNC_3("DirResource failed!\n");
        return FUNC_11(VAR_3);
    }


    VAR_4 = VAR_3->Stack->Parameters.QueryVolume.FsInformationClass;
    VAR_7 = VAR_3->Stack->Parameters.QueryVolume.Length;
    VAR_6 = VAR_3->Irp->AssociatedIrp.SystemBuffer;

    FUNC_2("FsInformationClass %d\n", VAR_4);
    FUNC_2("SystemBuffer %p\n", VAR_6);

    switch (VAR_4)
    {
        case 128:
            VAR_5 = FUNC_10(VAR_3->DeviceObject,
                                           VAR_6,
                                           &VAR_7);
            break;

        case 132:
            VAR_5 = FUNC_6(VAR_3->DeviceObject->DeviceExtension,
                                              VAR_6,
                                              &VAR_7);
            break;

        case 129:
            VAR_5 = FUNC_9(VAR_3->DeviceObject,
                                         VAR_6,
                                         &VAR_7);
            break;

        case 131:
            VAR_5 = FUNC_7(VAR_3->DeviceObject,
                                           VAR_6,
                                           &VAR_7);
            break;

        case 130:
            VAR_5 = FUNC_8(VAR_3->DeviceObject,
                                             VAR_6,
                                             &VAR_7);
            break;

        default:
            VAR_5 = VAR_1;
    }

    FUNC_5(&((PDEVICE_EXTENSION)VAR_3->DeviceObject->DeviceExtension)->DirResource);

    VAR_3->Irp->IoStatus.Information =
        VAR_3->Stack->Parameters.QueryVolume.Length - VAR_7;

    return VAR_5;
}
