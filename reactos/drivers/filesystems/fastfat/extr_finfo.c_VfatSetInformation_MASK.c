
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_11__ ;
typedef struct TYPE_23__ TYPE_10__ ;


struct TYPE_33__ {int MainResource; int Flags; } ;
struct TYPE_32__ {TYPE_7__* Irp; TYPE_5__* DeviceObject; TYPE_4__* Stack; int DeviceExt; TYPE_11__* FileObject; int Flags; } ;
struct TYPE_30__ {scalar_t__ Information; } ;
struct TYPE_25__ {scalar_t__ SystemBuffer; } ;
struct TYPE_31__ {TYPE_6__ IoStatus; TYPE_1__ AssociatedIrp; } ;
struct TYPE_29__ {scalar_t__ DeviceExtension; } ;
struct TYPE_26__ {int FileInformationClass; int FileObject; } ;
struct TYPE_27__ {TYPE_2__ SetFile; } ;
struct TYPE_28__ {TYPE_3__ Parameters; } ;
struct TYPE_24__ {int SectionObjectPointer; scalar_t__ FsContext; } ;
struct TYPE_23__ {int DirResource; } ;
typedef scalar_t__ PVOID ;
typedef TYPE_8__* PVFAT_IRP_CONTEXT ;
typedef TYPE_9__* PVFATFCB ;
typedef int PLARGE_INTEGER ;
typedef TYPE_10__* PDEVICE_EXTENSION ;
typedef int NTSTATUS ;
typedef int FILE_INFORMATION_CLASS ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (TYPE_8__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;




 char** VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int FUNC_6 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_7 (TYPE_8__*) ;
 int FUNC_8 (TYPE_11__*,TYPE_9__*,int ,int ) ;
 int FUNC_9 (TYPE_11__*,TYPE_9__*,int ,scalar_t__) ;
 int FUNC_10 (TYPE_11__*,TYPE_9__*,int ,scalar_t__) ;
 int FUNC_11 (TYPE_11__*,scalar_t__) ;
 int FUNC_12 (TYPE_11__*,TYPE_9__*,int ,scalar_t__,int ) ;

NTSTATUS
FUNC_13(
    PVFAT_IRP_CONTEXT VAR_10)
{
    FILE_INFORMATION_CLASS VAR_11;
    PVFATFCB VAR_12;
    NTSTATUS VAR_13 = VAR_7;
    PVOID VAR_14;
    BOOLEAN VAR_15;


    FUNC_0(VAR_10);

    FUNC_2("VfatSetInformation(IrpContext %p)\n", VAR_10);


    VAR_11 =
        VAR_10->Stack->Parameters.SetFile.FileInformationClass;
    VAR_12 = (PVFATFCB) VAR_10->FileObject->FsContext;
    VAR_14 = VAR_10->Irp->AssociatedIrp.SystemBuffer;

    FUNC_2("VfatSetInformation is called for '%s'\n",
           VAR_11 >= VAR_3 - 1 ? "????" : VAR_2[ VAR_11]);

    FUNC_2("FileInformationClass %d\n", VAR_11);
    FUNC_2("SystemBuffer %p\n", VAR_14);

    if (VAR_12 == ((void*)0))
    {
        FUNC_3("IRP_MJ_SET_INFORMATION without FCB!\n");
        VAR_10->Irp->IoStatus.Information = 0;
        return VAR_5;
    }




    if (VAR_11 == 130)
    {
        FUNC_2("Check for the ability to set file size\n");
        if (!FUNC_6(VAR_10->FileObject->SectionObjectPointer,
                                  (PLARGE_INTEGER)VAR_14))
        {
            FUNC_2("Couldn't set file size!\n");
            VAR_10->Irp->IoStatus.Information = 0;
            return VAR_8;
        }
        FUNC_2("Can set file size\n");
    }

    VAR_15 = VAR_0;
    if (VAR_11 == 128 || VAR_11 == 133 ||
        VAR_11 == 130 || VAR_11 == 132)
    {
        VAR_15 = VAR_9;
    }

    if (VAR_15)
    {
        if (!FUNC_4(&((PDEVICE_EXTENSION)VAR_10->DeviceObject->DeviceExtension)->DirResource,
                                            FUNC_1(VAR_10->Flags, VAR_4)))
        {
            return FUNC_7(VAR_10);
        }
    }

    if (!FUNC_1(VAR_12->Flags, VAR_1))
    {
        if (!FUNC_4(&VAR_12->MainResource,
                                            FUNC_1(VAR_10->Flags, VAR_4)))
        {
            if (VAR_15)
            {
                FUNC_5(&((PDEVICE_EXTENSION)VAR_10->DeviceObject->DeviceExtension)->DirResource);
            }

            return FUNC_7(VAR_10);
        }
    }

    switch (VAR_11)
    {
        case 129:
            VAR_13 = FUNC_11(VAR_10->FileObject,
                                                VAR_14);
            break;

        case 131:
            VAR_13 = FUNC_10(VAR_10->FileObject,
                                                   VAR_12,
                                                   VAR_10->DeviceExt,
                                                   VAR_14);
            break;

        case 133:
        case 130:
            VAR_13 = FUNC_8(VAR_10->FileObject,
                                                      VAR_12,
                                                      VAR_10->DeviceExt,
                                                      (PLARGE_INTEGER)VAR_14);
            break;

        case 132:
            VAR_13 = FUNC_9(VAR_10->FileObject,
                                             VAR_12,
                                             VAR_10->DeviceExt,
                                             VAR_14);
            break;

        case 128:
            VAR_13 = FUNC_12(VAR_10->FileObject,
                                              VAR_12,
                                              VAR_10->DeviceExt,
                                              VAR_14,
                                              VAR_10->Stack->Parameters.SetFile.FileObject);
            break;

        default:
            VAR_13 = VAR_6;
    }

    if (!FUNC_1(VAR_12->Flags, VAR_1))
    {
        FUNC_5(&VAR_12->MainResource);
    }

    if (VAR_15)
    {
        FUNC_5(&((PDEVICE_EXTENSION)VAR_10->DeviceObject->DeviceExtension)->DirResource);
    }

    VAR_10->Irp->IoStatus.Information = 0;
    return VAR_13;
}
