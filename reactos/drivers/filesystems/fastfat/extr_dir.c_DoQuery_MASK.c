
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_47__ TYPE_9__ ;
typedef struct TYPE_46__ TYPE_8__ ;
typedef struct TYPE_45__ TYPE_7__ ;
typedef struct TYPE_44__ TYPE_6__ ;
typedef struct TYPE_43__ TYPE_5__ ;
typedef struct TYPE_42__ TYPE_4__ ;
typedef struct TYPE_41__ TYPE_3__ ;
typedef struct TYPE_40__ TYPE_30__ ;
typedef struct TYPE_39__ TYPE_2__ ;
typedef struct TYPE_38__ TYPE_23__ ;
typedef struct TYPE_37__ TYPE_1__ ;
typedef struct TYPE_36__ TYPE_18__ ;
typedef struct TYPE_35__ TYPE_13__ ;
typedef struct TYPE_34__ TYPE_12__ ;
typedef struct TYPE_33__ TYPE_11__ ;
typedef struct TYPE_32__ TYPE_10__ ;


typedef int WCHAR ;
struct TYPE_40__ {int MaximumLength; int * Buffer; } ;
struct TYPE_37__ {int MaximumLength; int * Buffer; } ;
struct TYPE_44__ {scalar_t__ DirIndex; TYPE_30__ LongNameU; TYPE_1__ ShortNameU; TYPE_18__* DeviceExt; } ;
typedef TYPE_6__ VFAT_DIRENTRY_CONTEXT ;
typedef scalar_t__ ULONG ;
struct TYPE_38__ {int* Buffer; scalar_t__ MaximumLength; int Length; } ;
struct TYPE_47__ {scalar_t__ Entry; TYPE_23__ SearchPattern; } ;
struct TYPE_46__ {int MainResource; } ;
struct TYPE_45__ {TYPE_18__* DeviceExt; TYPE_13__* Irp; TYPE_11__* Stack; int Flags; TYPE_3__* FileObject; } ;
struct TYPE_42__ {scalar_t__ Length; int FileInformationClass; scalar_t__ FileIndex; scalar_t__ FileName; } ;
struct TYPE_43__ {TYPE_4__ QueryDirectory; } ;
struct TYPE_41__ {scalar_t__ FsContext; scalar_t__ FsContext2; } ;
struct TYPE_39__ {scalar_t__ Information; } ;
struct TYPE_36__ {int DirResource; } ;
struct TYPE_35__ {scalar_t__ RequestorMode; TYPE_2__ IoStatus; int * UserBuffer; int * MdlAddress; } ;
struct TYPE_34__ {scalar_t__ NextEntryOffset; scalar_t__ FileIndex; } ;
struct TYPE_33__ {TYPE_5__ Parameters; int Flags; } ;
struct TYPE_32__ {scalar_t__ Length; int * Buffer; } ;
typedef int ShortNameBuffer ;
typedef TYPE_7__* PVFAT_IRP_CONTEXT ;
typedef TYPE_8__* PVFATFCB ;
typedef TYPE_9__* PVFATCCB ;
typedef TYPE_10__* PUNICODE_STRING ;
typedef int * PUCHAR ;
typedef TYPE_11__* PIO_STACK_LOCATION ;
typedef TYPE_12__* PFILE_NAMES_INFORMATION ;
typedef int PFILE_FULL_DIR_INFORMATION ;
typedef int PFILE_DIRECTORY_INFORMATION ;
typedef int PFILE_BOTH_DIR_INFORMATION ;
typedef int NTSTATUS ;
typedef int LongNameBuffer ;
typedef scalar_t__ LONG ;
typedef int FILE_INFORMATION_CLASS ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,TYPE_30__*,TYPE_23__*,...) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,scalar_t__) ;
 void* FUNC_5 (int ,int,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_0 ;




 int FUNC_7 (TYPE_18__*,TYPE_8__*,TYPE_23__*,TYPE_6__*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_5 ;
 int FUNC_9 (int *,scalar_t__,int) ;
 int FUNC_10 (TYPE_23__*,TYPE_10__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_11 (TYPE_6__*,TYPE_18__*,int ,scalar_t__,scalar_t__*,int ) ;
 int FUNC_12 (TYPE_6__*,TYPE_18__*,int ,scalar_t__,scalar_t__*,int ) ;
 int FUNC_13 (TYPE_6__*,TYPE_18__*,int ,scalar_t__,scalar_t__*,int ) ;
 int FUNC_14 (TYPE_6__*,TYPE_12__*,scalar_t__,scalar_t__*,int ) ;
 int * FUNC_15 (TYPE_13__*,scalar_t__) ;
 int FUNC_16 (TYPE_13__*,scalar_t__,int ) ;

__attribute__((used)) static
NTSTATUS
FUNC_17(
    PVFAT_IRP_CONTEXT VAR_18)
{
    NTSTATUS VAR_19 = VAR_15;
    LONG VAR_20 = 0;
    PUNICODE_STRING VAR_21 = ((void*)0);
    FILE_INFORMATION_CLASS VAR_22;
    PUCHAR VAR_23 = ((void*)0);
    PFILE_NAMES_INFORMATION VAR_24 = ((void*)0);
    PVFATFCB VAR_25;
    PVFATCCB VAR_26;
    BOOLEAN VAR_27 = VAR_0;
    BOOLEAN VAR_28 = VAR_17;
    VFAT_DIRENTRY_CONTEXT VAR_29;
    WCHAR VAR_30[VAR_4 + 1];
    WCHAR VAR_31[13];
    ULONG VAR_32;

    PIO_STACK_LOCATION VAR_33 = VAR_18->Stack;

    VAR_26 = (PVFATCCB)VAR_18->FileObject->FsContext2;
    VAR_25 = (PVFATFCB)VAR_18->FileObject->FsContext;


    VAR_20 = VAR_33->Parameters.QueryDirectory.Length;
    VAR_23 = FUNC_15(VAR_18->Irp, VAR_0);

    if (!FUNC_3(&VAR_18->DeviceExt->DirResource,
                                        FUNC_1(VAR_18->Flags, VAR_1)))
    {
        VAR_19 = FUNC_16(VAR_18->Irp, VAR_20, VAR_2);
        if (FUNC_8(VAR_19))
            VAR_19 = VAR_14;

        return VAR_19;
    }

    if (!FUNC_4(&VAR_25->MainResource,
                                     FUNC_1(VAR_18->Flags, VAR_1)))
    {
        FUNC_6(&VAR_18->DeviceExt->DirResource);
        VAR_19 = FUNC_16(VAR_18->Irp, VAR_20, VAR_2);
        if (FUNC_8(VAR_19))
            VAR_19 = VAR_14;

        return VAR_19;
    }


    VAR_21 = (PUNICODE_STRING)VAR_33->Parameters.QueryDirectory.FileName;
    VAR_22 = VAR_33->Parameters.QueryDirectory.FileInformationClass;
    if (VAR_21 &&
        VAR_21->Length != 0 && VAR_21->Buffer != ((void*)0))
    {
        if (!VAR_26->SearchPattern.Buffer)
        {
            VAR_27 = VAR_17;
            VAR_26->SearchPattern.MaximumLength = VAR_21->Length + sizeof(WCHAR);
            VAR_26->SearchPattern.Buffer = FUNC_5(VAR_5,
                                                               VAR_26->SearchPattern.MaximumLength,
                                                               VAR_16);
            if (!VAR_26->SearchPattern.Buffer)
            {
                FUNC_6(&VAR_25->MainResource);
                FUNC_6(&VAR_18->DeviceExt->DirResource);
                return VAR_10;
            }
            FUNC_10(&VAR_26->SearchPattern, VAR_21);
            VAR_26->SearchPattern.Buffer[VAR_26->SearchPattern.Length / sizeof(WCHAR)] = 0;
        }
    }
    else if (!VAR_26->SearchPattern.Buffer)
    {
        VAR_27 = VAR_17;
        VAR_26->SearchPattern.MaximumLength = 2 * sizeof(WCHAR);
        VAR_26->SearchPattern.Buffer = FUNC_5(VAR_5,
                                                           2 * sizeof(WCHAR),
                                                           VAR_16);
        if (!VAR_26->SearchPattern.Buffer)
        {
            FUNC_6(&VAR_25->MainResource);
            FUNC_6(&VAR_18->DeviceExt->DirResource);
            return VAR_10;
        }
        VAR_26->SearchPattern.Buffer[0] = L'*';
        VAR_26->SearchPattern.Buffer[1] = 0;
        VAR_26->SearchPattern.Length = sizeof(WCHAR);
    }

    if (FUNC_1(VAR_18->Stack->Flags, VAR_6))
    {
        VAR_29.DirIndex = VAR_26->Entry = VAR_33->Parameters.QueryDirectory.FileIndex;
    }
    else if (VAR_27 || FUNC_1(VAR_18->Stack->Flags, VAR_7))
    {
        VAR_29.DirIndex = VAR_26->Entry = 0;
    }
    else
    {
        VAR_29.DirIndex = VAR_26->Entry;
    }

    FUNC_2("Buffer=%p tofind=%wZ\n", VAR_23, &VAR_26->SearchPattern);

    VAR_29.DeviceExt = VAR_18->DeviceExt;
    VAR_29.LongNameU.Buffer = VAR_30;
    VAR_29.LongNameU.MaximumLength = sizeof(VAR_30);
    VAR_29.ShortNameU.Buffer = VAR_31;
    VAR_29.ShortNameU.MaximumLength = sizeof(VAR_31);

    VAR_32 = 0;
    while ((VAR_19 == VAR_15) && (VAR_20 > 0))
    {
        VAR_19 = FUNC_7(VAR_18->DeviceExt,
                          VAR_25,
                          &VAR_26->SearchPattern,
                          &VAR_29,
                          VAR_28);
        VAR_26->Entry = VAR_29.DirIndex;

        FUNC_2("Found %wZ, Status=%x, entry %x\n", &VAR_29.LongNameU, VAR_19, VAR_26->Entry);

        VAR_28 = VAR_0;
        if (FUNC_8(VAR_19))
        {
            switch (VAR_22)
            {
                case 130:
                    VAR_19 = FUNC_12(&VAR_29,
                                                             VAR_18->DeviceExt,
                                                             (PFILE_DIRECTORY_INFORMATION)VAR_23,
                                                             VAR_20,
                                                             &VAR_32,
                                                             VAR_24 == ((void*)0));
                    break;

                case 129:
                    VAR_19 = FUNC_13(&VAR_29,
                                                                 VAR_18->DeviceExt,
                                                                 (PFILE_FULL_DIR_INFORMATION)VAR_23,
                                                                 VAR_20,
                                                                 &VAR_32,
                                                                 VAR_24 == ((void*)0));
                    break;

                case 131:
                    VAR_19 = FUNC_11(&VAR_29,
                                                        VAR_18->DeviceExt,
                                                        (PFILE_BOTH_DIR_INFORMATION)VAR_23,
                                                        VAR_20,
                                                        &VAR_32,
                                                        VAR_24 == ((void*)0));
                    break;

                case 128:
                    VAR_19 = FUNC_14(&VAR_29,
                                                         (PFILE_NAMES_INFORMATION)VAR_23,
                                                         VAR_20,
                                                         &VAR_32,
                                                         VAR_24 == ((void*)0));
                     break;

                default:
                    VAR_19 = VAR_11;
                    break;
            }

            if (VAR_19 == VAR_9 || VAR_19 == VAR_11)
                break;
        }
        else
        {
            VAR_19 = (VAR_27 ? VAR_13 : VAR_12);
            break;
        }

        VAR_24 = (PFILE_NAMES_INFORMATION) VAR_23;
        VAR_24->FileIndex = VAR_29.DirIndex;
        VAR_26->Entry = ++VAR_29.DirIndex;
        VAR_20 -= VAR_24->NextEntryOffset;

        if (FUNC_1(VAR_18->Stack->Flags, VAR_8))
            break;

        VAR_23 += VAR_24->NextEntryOffset;
    }

    if (VAR_24)
    {
        VAR_24->NextEntryOffset = 0;
        VAR_19 = VAR_15;
        VAR_18->Irp->IoStatus.Information = VAR_33->Parameters.QueryDirectory.Length - VAR_20;
    }
    else
    {
        FUNC_0(VAR_19 != VAR_15 || VAR_20 == 0);
        FUNC_0(VAR_32 <= VAR_33->Parameters.QueryDirectory.Length);
        VAR_18->Irp->IoStatus.Information = VAR_32;
    }

    FUNC_6(&VAR_25->MainResource);
    FUNC_6(&VAR_18->DeviceExt->DirResource);

    return VAR_19;
}
