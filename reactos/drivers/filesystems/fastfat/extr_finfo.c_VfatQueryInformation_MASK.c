
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_12__ ;


typedef scalar_t__ ULONG ;
struct TYPE_33__ {int MainResource; int Flags; } ;
struct TYPE_32__ {TYPE_6__* Irp; TYPE_4__* Stack; int DeviceExt; TYPE_12__* FileObject; int Flags; } ;
struct TYPE_30__ {scalar_t__ Information; } ;
struct TYPE_26__ {int SystemBuffer; } ;
struct TYPE_31__ {TYPE_5__ IoStatus; TYPE_1__ AssociatedIrp; } ;
struct TYPE_27__ {int FileInformationClass; scalar_t__ Length; } ;
struct TYPE_28__ {TYPE_2__ QueryFile; } ;
struct TYPE_29__ {TYPE_3__ Parameters; } ;
struct TYPE_25__ {scalar_t__ FsContext; } ;
typedef int PVOID ;
typedef TYPE_7__* PVFAT_IRP_CONTEXT ;
typedef TYPE_8__* PVFATFCB ;
typedef scalar_t__ NTSTATUS ;
typedef int FILE_INFORMATION_CLASS ;


 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;




 char** VAR_1 ;

 int VAR_2 ;




 int VAR_3 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_7 (TYPE_12__*,TYPE_8__*,int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_8 (TYPE_12__*,TYPE_8__*,int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_9 (TYPE_12__*,TYPE_8__*,int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_10 (TYPE_8__*,int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_11 (TYPE_12__*,TYPE_8__*,int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_12 (TYPE_8__*,int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_13 (TYPE_12__*,TYPE_8__*,int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_14 (TYPE_8__*,int ,scalar_t__*) ;
 scalar_t__ FUNC_15 (TYPE_7__*) ;

NTSTATUS
FUNC_16(
    PVFAT_IRP_CONTEXT VAR_8)
{
    FILE_INFORMATION_CLASS VAR_9;
    PVFATFCB VAR_10;

    NTSTATUS VAR_11 = VAR_7;
    PVOID VAR_12;
    ULONG VAR_13;


    FUNC_0(VAR_8);


    VAR_9 = VAR_8->Stack->Parameters.QueryFile.FileInformationClass;
    VAR_10 = (PVFATFCB) VAR_8->FileObject->FsContext;

    FUNC_2("VfatQueryInformation is called for '%s'\n",
           VAR_9 >= VAR_2 - 1 ? "????" : VAR_1[VAR_9]);

    if (VAR_10 == ((void*)0))
    {
        FUNC_3("IRP_MJ_QUERY_INFORMATION without FCB!\n");
        VAR_8->Irp->IoStatus.Information = 0;
        return VAR_5;
    }

    VAR_12 = VAR_8->Irp->AssociatedIrp.SystemBuffer;
    VAR_13 = VAR_8->Stack->Parameters.QueryFile.Length;

    if (!FUNC_1(VAR_10->Flags, VAR_0))
    {
        if (!FUNC_4(&VAR_10->MainResource,
                                         FUNC_1(VAR_8->Flags, VAR_3)))
        {
            return FUNC_15(VAR_8);
        }
    }

    switch (VAR_9)
    {
        case 128:
            VAR_11 = FUNC_14(VAR_10,
                                                VAR_12,
                                                &VAR_13);
            break;

        case 129:
            VAR_11 = FUNC_13(VAR_8->FileObject,
                                                VAR_10,
                                                VAR_8->DeviceExt,
                                                VAR_12,
                                                &VAR_13);
            break;

        case 134:
            VAR_11 = FUNC_8(VAR_8->FileObject,
                                             VAR_10,
                                             VAR_8->DeviceExt,
                                             VAR_12,
                                             &VAR_13);
            break;

        case 131:
            VAR_11 = FUNC_11(VAR_8->FileObject,
                                            VAR_10,
                                            VAR_8->DeviceExt,
                                            VAR_12,
                                            &VAR_13);
            break;

        case 132:
            VAR_11 = FUNC_10(VAR_10,
                                                VAR_8->DeviceExt,
                                                VAR_12,
                                                &VAR_13);
            break;

        case 130:
            VAR_11 = FUNC_12(VAR_10,
                                                   VAR_8->DeviceExt,
                                                   VAR_12,
                                                   &VAR_13);
            break;

        case 136:
            VAR_11 = FUNC_7(VAR_8->FileObject,
                                           VAR_10,
                                           VAR_8->DeviceExt,
                                           VAR_12,
                                           &VAR_13);
            break;

        case 133:
            VAR_11 = FUNC_9(VAR_8->FileObject,
                                          VAR_10,
                                          VAR_8->DeviceExt,
                                          VAR_12,
                                          &VAR_13);
            break;

        case 135:
            VAR_11 = VAR_6;
            break;

        default:
            VAR_11 = VAR_5;
    }

    if (!FUNC_1(VAR_10->Flags, VAR_0))
    {
        FUNC_5(&VAR_10->MainResource);
    }

    if (FUNC_6(VAR_11) || VAR_11 == VAR_4)
        VAR_8->Irp->IoStatus.Information =
            VAR_8->Stack->Parameters.QueryFile.Length - VAR_13;
    else
        VAR_8->Irp->IoStatus.Information = 0;

    return VAR_11;
}
