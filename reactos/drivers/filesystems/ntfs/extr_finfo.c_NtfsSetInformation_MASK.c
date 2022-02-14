
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef scalar_t__ ULONG ;
struct TYPE_27__ {TYPE_6__* FsContext; } ;
struct TYPE_20__ {int FileInformationClass; scalar_t__ Length; } ;
struct TYPE_21__ {TYPE_2__ QueryFile; } ;
struct TYPE_26__ {TYPE_3__ Parameters; int Flags; } ;
struct TYPE_22__ {scalar_t__ Information; } ;
struct TYPE_19__ {int SystemBuffer; } ;
struct TYPE_25__ {TYPE_4__ IoStatus; int Flags; TYPE_1__ AssociatedIrp; } ;
struct TYPE_24__ {int MainResource; } ;
struct TYPE_23__ {int Flags; TYPE_9__* FileObject; TYPE_11__* DeviceObject; TYPE_8__* Stack; TYPE_7__* Irp; } ;
struct TYPE_18__ {int DeviceExtension; } ;
struct TYPE_17__ {int EndOfFile; } ;
typedef int PVOID ;
typedef TYPE_5__* PNTFS_IRP_CONTEXT ;
typedef TYPE_6__* PNTFS_FCB ;
typedef TYPE_7__* PIRP ;
typedef TYPE_8__* PIO_STACK_LOCATION ;
typedef TYPE_9__* PFILE_OBJECT ;
typedef TYPE_10__* PFILE_END_OF_FILE_INFORMATION ;
typedef TYPE_11__* PDEVICE_OBJECT ;
typedef int PDEVICE_EXTENSION ;
typedef int NTSTATUS ;
typedef int FILE_INFORMATION_CLASS ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,TYPE_5__*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;


 int FUNC_5 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_6__*,TYPE_9__*,int ,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;

NTSTATUS
FUNC_9(PNTFS_IRP_CONTEXT VAR_3)
{
    FILE_INFORMATION_CLASS VAR_4;
    PIO_STACK_LOCATION VAR_5;
    PDEVICE_EXTENSION VAR_6;
    PFILE_OBJECT VAR_7;
    PNTFS_FCB VAR_8;
    PVOID VAR_9;
    ULONG VAR_10;
    PIRP VAR_11;
    PDEVICE_OBJECT VAR_12;
    NTSTATUS VAR_13 = VAR_2;

    FUNC_1("NtfsSetInformation(%p)\n", VAR_3);

    VAR_11 = VAR_3->Irp;
    VAR_5 = VAR_3->Stack;
    VAR_12 = VAR_3->DeviceObject;
    VAR_6 = VAR_12->DeviceExtension;
    VAR_4 = VAR_5->Parameters.QueryFile.FileInformationClass;
    VAR_7 = VAR_3->FileObject;
    VAR_8 = VAR_7->FsContext;

    VAR_9 = VAR_11->AssociatedIrp.SystemBuffer;
    VAR_10 = VAR_5->Parameters.QueryFile.Length;

    if (!FUNC_3(&VAR_8->MainResource,
                                     FUNC_0(VAR_3->Flags, VAR_0)))
    {
        return FUNC_7(VAR_3);
    }

    switch (VAR_4)
    {
        PFILE_END_OF_FILE_INFORMATION VAR_14;



        case 129:
            FUNC_2("FIXME: Using hacky method of setting FileAllocationInformation.\n");
        case 128:
            VAR_14 = (PFILE_END_OF_FILE_INFORMATION)VAR_9;
            VAR_13 = FUNC_8(VAR_8,
                                      VAR_7,
                                      VAR_6,
                                      VAR_11->Flags,
                                      FUNC_0(VAR_5->Flags, VAR_1),
                                      &VAR_14->EndOfFile);
            break;



        default:
            FUNC_2("FIXME: Unimplemented information class: %s\n", FUNC_5(VAR_4));
            VAR_13 = VAR_2;
    }

    FUNC_4(&VAR_8->MainResource);

    if (FUNC_6(VAR_13))
        VAR_11->IoStatus.Information =
        VAR_5->Parameters.QueryFile.Length - VAR_10;
    else
        VAR_11->IoStatus.Information = 0;

    return VAR_13;
}
