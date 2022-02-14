
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
typedef scalar_t__ ULONGLONG ;
typedef scalar_t__ ULONG ;
struct TYPE_28__ {int Ntfs; } ;
struct TYPE_24__ {scalar_t__ AllocatedSize; scalar_t__ FirstEntryOffset; scalar_t__ TotalSizeOfEntries; } ;
struct TYPE_23__ {scalar_t__ Type; } ;
struct TYPE_27__ {TYPE_5__ Header; TYPE_4__ Ntfs; } ;
struct TYPE_22__ {scalar_t__ NameType; scalar_t__ AllocatedSize; scalar_t__ DataSize; } ;
struct TYPE_20__ {int IndexedFile; } ;
struct TYPE_21__ {TYPE_1__ Directory; } ;
struct TYPE_26__ {int Flags; int Length; TYPE_3__ FileName; TYPE_2__ Data; } ;
struct TYPE_25__ {int pRecord; } ;
typedef int PUNICODE_STRING ;
typedef scalar_t__* PULONG ;
typedef int PUCHAR ;
typedef TYPE_6__* PNTFS_ATTR_CONTEXT ;
typedef TYPE_7__* PINDEX_ENTRY_ATTRIBUTE ;
typedef TYPE_8__* PINDEX_BUFFER ;
typedef TYPE_9__* PFILE_RECORD_HEADER ;
typedef int * PDEVICE_EXTENSION ;
typedef int * PCHAR ;
typedef scalar_t__ NTSTATUS ;
typedef int INDEX_ENTRY_ATTRIBUTE ;
typedef int BOOLEAN ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ,TYPE_7__*,int ,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int *,TYPE_9__*,int ,char*,int,TYPE_6__**,int *) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (int *,TYPE_6__*,scalar_t__,int *,scalar_t__) ;
 int FUNC_11 (TYPE_6__*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_12 (int *,TYPE_6__*,scalar_t__,int const,scalar_t__,scalar_t__*,TYPE_9__*) ;

NTSTATUS
FUNC_13(PDEVICE_EXTENSION VAR_12,
                             PFILE_RECORD_HEADER VAR_13,
                             PCHAR VAR_14,
                             ULONG VAR_15,
                             PINDEX_ENTRY_ATTRIBUTE VAR_16,
                             PINDEX_ENTRY_ATTRIBUTE VAR_17,
                             PUNICODE_STRING VAR_18,
                             PULONG VAR_19,
                             PULONG VAR_20,
                             BOOLEAN VAR_21,
                             ULONGLONG VAR_22,
                             ULONGLONG VAR_23,
                             BOOLEAN VAR_24)
{
    NTSTATUS VAR_25;
    ULONG VAR_26;
    PINDEX_ENTRY_ATTRIBUTE VAR_27;
    PNTFS_ATTR_CONTEXT VAR_28;
    ULONGLONG VAR_29;
    PINDEX_BUFFER VAR_30;

    FUNC_4("UpdateIndexEntrySize(%p, %p, %p, %lu, %p, %p, %wZ, %lu, %lu, %s, %I64u, %I64u, %s)\n",
           VAR_12,
           VAR_13,
           VAR_14,
           VAR_15,
           VAR_16,
           VAR_17,
           VAR_18,
           *VAR_19,
           *VAR_20,
           VAR_21 ? "TRUE" : "FALSE",
           VAR_22,
           VAR_23,
           VAR_24 ? "TRUE" : "FALSE");


    VAR_27 = VAR_16;
    while (VAR_27 < VAR_17 &&
           !(VAR_27->Flags & VAR_6))
    {
        if ((VAR_27->Data.Directory.IndexedFile & VAR_8) > VAR_4 &&
            *VAR_20 >= *VAR_19 &&
            VAR_27->FileName.NameType != VAR_5 &&
            FUNC_3(VAR_18, VAR_27, VAR_21, VAR_24))
        {
            *VAR_19 = *VAR_20;
            VAR_27->FileName.DataSize = VAR_22;
            VAR_27->FileName.AllocatedSize = VAR_23;

            return VAR_10;
        }

        (*VAR_20) += 1;
        FUNC_0(VAR_27->Length >= sizeof(INDEX_ENTRY_ATTRIBUTE));
        VAR_27 = (PINDEX_ENTRY_ATTRIBUTE)((PCHAR)VAR_27 + VAR_27->Length);
    }


    if (VAR_14 == ((void*)0))
    {
        return VAR_9;
    }


    if (!(VAR_27->Flags & VAR_7))
    {
        return VAR_9;
    }

    VAR_25 = FUNC_7(VAR_12, VAR_13, VAR_0, L"$I30", 4, &VAR_28, ((void*)0));
    if (!FUNC_9(VAR_25))
    {
        FUNC_4("Corrupted filesystem!\n");
        return VAR_25;
    }

    VAR_29 = FUNC_2(VAR_28->pRecord);
    VAR_25 = VAR_9;
    for (VAR_26 = 0; VAR_26 < VAR_29; VAR_26 += VAR_15)
    {
        FUNC_10(VAR_12, VAR_28, VAR_26, VAR_14, VAR_15);
        VAR_25 = FUNC_8(VAR_12, &((PFILE_RECORD_HEADER)VAR_14)->Ntfs);
        if (!FUNC_9(VAR_25))
        {
            break;
        }

        VAR_30 = (PINDEX_BUFFER)VAR_14;
        FUNC_0(VAR_30->Ntfs.Type == VAR_3);
        FUNC_0(VAR_30->Header.AllocatedSize + FUNC_6(VAR_2, VAR_1) == VAR_15);
        VAR_16 = (PINDEX_ENTRY_ATTRIBUTE)((ULONG_PTR)&VAR_30->Header + VAR_30->Header.FirstEntryOffset);
        VAR_17 = (PINDEX_ENTRY_ATTRIBUTE)((ULONG_PTR)&VAR_30->Header + VAR_30->Header.TotalSizeOfEntries);
        FUNC_0(VAR_17 <= (PINDEX_ENTRY_ATTRIBUTE)((ULONG_PTR)VAR_30 + VAR_15));

        VAR_25 = FUNC_13(((void*)0),
                                              ((void*)0),
                                              ((void*)0),
                                              0,
                                              VAR_16,
                                              VAR_17,
                                              VAR_18,
                                              VAR_19,
                                              VAR_20,
                                              VAR_21,
                                              VAR_22,
                                              VAR_23,
                                              VAR_24);
        if (VAR_25 == VAR_10)
        {

            ULONG VAR_31;


            VAR_25 = FUNC_1(VAR_12, &((PFILE_RECORD_HEADER)VAR_14)->Ntfs);
            if (!FUNC_9(VAR_25))
            {
                FUNC_5("Error: Failed to update fixup sequence array!\n");
                break;
            }

            VAR_25 = FUNC_12(VAR_12, VAR_28, VAR_26, (const PUCHAR)VAR_14, VAR_15, &VAR_31, VAR_13);
            if (!FUNC_9(VAR_25))
            {
                FUNC_5("ERROR Performing write!\n");
                break;
            }

            VAR_25 = VAR_11;
            break;
        }
        if (FUNC_9(VAR_25))
        {
            break;
        }
    }

    FUNC_11(VAR_28);
    return VAR_25;
}
