
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int WCHAR ;
typedef int ULONGLONG ;
typedef int ULONG ;
struct TYPE_21__ {int FileRecLookasideList; } ;
struct TYPE_20__ {int NameLength; int* Name; int DirectoryFileReferenceNumber; } ;
struct TYPE_17__ {scalar_t__ Type; } ;
struct TYPE_19__ {int Flags; TYPE_1__ Ntfs; } ;
struct TYPE_18__ {int Length; int MaximumLength; int* Buffer; } ;
typedef TYPE_2__* PUNICODE_STRING ;
typedef TYPE_3__* PFILE_RECORD_HEADER ;
typedef TYPE_4__* PFILENAME_ATTRIBUTE ;
typedef TYPE_5__* PDEVICE_EXTENSION ;
typedef int NTSTATUS ;
typedef int FullPath ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,TYPE_5__*,int,TYPE_2__*) ;
 int FUNC_2 (char*,int) ;
 TYPE_3__* FUNC_3 (int *) ;
 int* FUNC_4 (int ,int,int ) ;
 int FUNC_5 (int *,TYPE_3__*) ;
 int VAR_0 ;
 TYPE_4__* FUNC_6 (TYPE_5__*,TYPE_3__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int ) ;
 int VAR_5 ;
 int FUNC_8 (TYPE_5__*,int,TYPE_3__*) ;
 int FUNC_9 (int*,int*,int) ;
 int FUNC_10 (int*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static
NTSTATUS
FUNC_11(PDEVICE_EXTENSION VAR_10,
               ULONGLONG VAR_11,
               PUNICODE_STRING VAR_12)
{
    NTSTATUS VAR_13;
    PFILE_RECORD_HEADER VAR_14;
    PFILENAME_ATTRIBUTE VAR_15;
    WCHAR VAR_16[VAR_1];
    ULONG VAR_17 = VAR_1 - 1;

    FUNC_1("NtfsMoonWalkID(%p, %I64x, %p)\n", VAR_10, VAR_11, VAR_12);

    FUNC_10(VAR_16, sizeof(VAR_16));
    VAR_14 = FUNC_3(&VAR_10->FileRecLookasideList);
    if (VAR_14 == ((void*)0))
    {
        return VAR_6;
    }

    while (VAR_9)
    {
        VAR_13 = FUNC_8(VAR_10, VAR_11, VAR_14);
        if (!FUNC_7(VAR_13))
            break;

        FUNC_0(VAR_14->Ntfs.Type == VAR_2);
        if (!(VAR_14->Flags & VAR_0))
        {
            VAR_13 = VAR_7;
            break;
        }

        VAR_15 = FUNC_6(VAR_10, VAR_14);
        if (VAR_15 == ((void*)0))
        {
            FUNC_2("$FILE_NAME attribute not found for %I64x\n", VAR_11);
            VAR_13 = VAR_7;
            break;
        }

        VAR_17 -= VAR_15->NameLength;
        FUNC_0(VAR_17 < VAR_1);
        FUNC_9(VAR_16 + VAR_17, VAR_15->Name, VAR_15->NameLength * sizeof(WCHAR));
        VAR_17 -= 1;
        FUNC_0(VAR_17 < VAR_1);
        VAR_16[VAR_17] = L'\\';

        VAR_11 = VAR_15->DirectoryFileReferenceNumber & VAR_4;
        if (VAR_11 == VAR_3)
            break;
    }

    FUNC_5(&VAR_10->FileRecLookasideList, VAR_14);

    if (!FUNC_7(VAR_13))
        return VAR_13;

    VAR_12->Length = (VAR_1 - VAR_17 - 1) * sizeof(WCHAR);
    VAR_12->MaximumLength = (VAR_1 - VAR_17) * sizeof(WCHAR);
    VAR_12->Buffer = FUNC_4(VAR_5, VAR_12->MaximumLength, VAR_8);
    if (VAR_12->Buffer == ((void*)0))
    {
        return VAR_6;
    }
    FUNC_9(VAR_12->Buffer, VAR_16 + VAR_17, VAR_12->MaximumLength);

    return VAR_13;
}
