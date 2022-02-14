
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_9__ ;
typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_10__ ;


typedef scalar_t__ ULONG ;
struct TYPE_36__ {TYPE_6__* FsContext; } ;
struct TYPE_29__ {int FileInformationClass; scalar_t__ Length; } ;
struct TYPE_30__ {TYPE_2__ QueryFile; } ;
struct TYPE_35__ {TYPE_3__ Parameters; } ;
struct TYPE_31__ {scalar_t__ Information; } ;
struct TYPE_28__ {int SystemBuffer; } ;
struct TYPE_34__ {TYPE_4__ IoStatus; TYPE_1__ AssociatedIrp; } ;
struct TYPE_33__ {int MainResource; } ;
struct TYPE_32__ {int Flags; TYPE_9__* FileObject; TYPE_10__* DeviceObject; TYPE_8__* Stack; TYPE_7__* Irp; } ;
struct TYPE_27__ {int DeviceExtension; } ;
typedef int PVOID ;
typedef TYPE_5__* PNTFS_IRP_CONTEXT ;
typedef TYPE_6__* PNTFS_FCB ;
typedef TYPE_7__* PIRP ;
typedef TYPE_8__* PIO_STACK_LOCATION ;
typedef TYPE_9__* PFILE_OBJECT ;
typedef TYPE_10__* PDEVICE_OBJECT ;
typedef int NTSTATUS ;
typedef int FILE_INFORMATION_CLASS ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,TYPE_5__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 TYPE_5__* FUNC_4 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_9__*,TYPE_6__*,TYPE_10__*,int ,scalar_t__*) ;
 int FUNC_7 (TYPE_6__*,int ,scalar_t__*) ;
 int FUNC_8 (TYPE_9__*,TYPE_6__*,TYPE_10__*,int ,scalar_t__*) ;
 int FUNC_9 (TYPE_6__*,int ,int ,scalar_t__*) ;
 int FUNC_10 (TYPE_9__*,int ,scalar_t__*) ;
 int FUNC_11 (TYPE_6__*,TYPE_10__*,int ,scalar_t__*) ;
 int FUNC_12 (TYPE_6__*,int ,int ,scalar_t__*) ;
 int FUNC_13 (TYPE_5__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

NTSTATUS
FUNC_14(PNTFS_IRP_CONTEXT VAR_4)
{
    FILE_INFORMATION_CLASS VAR_5;
    PIO_STACK_LOCATION VAR_6;
    PFILE_OBJECT VAR_7;
    PNTFS_FCB VAR_8;
    PVOID VAR_9;
    ULONG VAR_10;
    PIRP VAR_11;
    PDEVICE_OBJECT VAR_12;
    NTSTATUS VAR_13 = VAR_3;

    FUNC_1("NtfsQueryInformation(%p)\n", VAR_4);

    VAR_11 = VAR_4->Irp;
    VAR_6 = VAR_4->Stack;
    VAR_12 = VAR_4->DeviceObject;
    VAR_5 = VAR_6->Parameters.QueryFile.FileInformationClass;
    VAR_7 = VAR_4->FileObject;
    VAR_8 = VAR_7->FsContext;

    VAR_9 = VAR_11->AssociatedIrp.SystemBuffer;
    VAR_10 = VAR_6->Parameters.QueryFile.Length;

    if (!FUNC_2(&VAR_8->MainResource,
                                     FUNC_0(VAR_4->Flags, VAR_0)))
    {
        return FUNC_13(VAR_4);
    }

    switch (VAR_5)
    {
        case 129:
            VAR_13 = FUNC_11(VAR_8,
                                                VAR_12,
                                                VAR_9,
                                                &VAR_10);
            break;

        case 130:
            VAR_13 = FUNC_10(VAR_7,
                                                VAR_9,
                                                &VAR_10);
            break;

        case 134:
            VAR_13 = FUNC_6(VAR_7,
                                             VAR_8,
                                             VAR_12,
                                             VAR_9,
                                             &VAR_10);
            break;

        case 132:
            VAR_13 = FUNC_8(VAR_7,
                                            VAR_8,
                                            VAR_12,
                                            VAR_9,
                                            &VAR_10);
            break;

        case 133:
            VAR_13 = FUNC_7(VAR_8,
                                                VAR_9,
                                                &VAR_10);
            break;

        case 131:
            VAR_13 = FUNC_9(VAR_8,
                                                   VAR_12->DeviceExtension,
                                                   VAR_9,
                                                   &VAR_10);
            break;

        case 128:
            VAR_13 = FUNC_12(VAR_8,
                                             VAR_12->DeviceExtension,
                                             VAR_9,
                                             &VAR_10);
            break;

        case 135:
        case 136:
            FUNC_1("Unimplemented information class: %s\n", FUNC_4(VAR_5));
            VAR_13 = VAR_2;
            break;

        default:
            FUNC_1("Unimplemented information class: %s\n", FUNC_4(VAR_5));
            VAR_13 = VAR_1;
    }

    FUNC_3(&VAR_8->MainResource);

    if (FUNC_5(VAR_13))
        VAR_11->IoStatus.Information =
            VAR_6->Parameters.QueryFile.Length - VAR_10;
    else
        VAR_11->IoStatus.Information = 0;

    return VAR_13;
}
