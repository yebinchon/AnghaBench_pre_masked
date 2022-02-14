
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_14__ ;


typedef scalar_t__ ULONG_PTR ;
typedef int ULONGLONG ;
typedef scalar_t__ ULONG ;
struct TYPE_21__ {scalar_t__ BytesPerIndexRecord; } ;
struct TYPE_25__ {TYPE_1__ NtfsInfo; } ;
struct TYPE_22__ {scalar_t__ TotalSizeOfEntries; scalar_t__ FirstEntryOffset; } ;
struct TYPE_20__ {scalar_t__ Type; } ;
struct TYPE_24__ {scalar_t__ VCN; int HasValidVCN; TYPE_3__* IndexEntry; struct TYPE_24__* LesserChild; struct TYPE_24__* NextKey; int KeyCount; TYPE_2__ Header; TYPE_14__ Ntfs; struct TYPE_24__* FirstKey; } ;
struct TYPE_23__ {int Length; int Flags; } ;
typedef scalar_t__* PULONGLONG ;
typedef int * PNTFS_ATTR_CONTEXT ;
typedef int PINDEX_ROOT_ATTRIBUTE ;
typedef TYPE_3__* PINDEX_ENTRY_ATTRIBUTE ;
typedef TYPE_4__* PINDEX_BUFFER ;
typedef TYPE_5__* PDEVICE_EXTENSION ;
typedef int PCHAR ;
typedef TYPE_4__* PB_TREE_KEY ;
typedef TYPE_4__* PB_TREE_FILENAME_NODE ;
typedef int NTSTATUS ;
typedef int B_TREE_KEY ;
typedef int B_TREE_FILENAME_NODE ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_4__*) ;
 void* FUNC_3 (int ,int,int ) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_5__*,TYPE_14__*) ;
 int FUNC_6 (TYPE_5__*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_9 (TYPE_5__*,int *,int ,int ,scalar_t__) ;
 int FUNC_10 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_11 (TYPE_4__*,int) ;
 int VAR_4 ;
 int VAR_5 ;

PB_TREE_FILENAME_NODE
FUNC_12(PDEVICE_EXTENSION VAR_6,
                             PINDEX_ROOT_ATTRIBUTE VAR_7,
                             PNTFS_ATTR_CONTEXT VAR_8,
                             PINDEX_ENTRY_ATTRIBUTE VAR_9)
{
    PB_TREE_FILENAME_NODE VAR_10;
    PINDEX_ENTRY_ATTRIBUTE VAR_11;
    PINDEX_ENTRY_ATTRIBUTE VAR_12;
    ULONG VAR_13 = 0;
    PINDEX_BUFFER VAR_14;
    ULONG VAR_15 = VAR_6->NtfsInfo.BytesPerIndexRecord;
    PULONGLONG VAR_16;
    PB_TREE_KEY VAR_17;
    NTSTATUS VAR_18;
    ULONGLONG VAR_19;
    ULONG VAR_20;

    if (VAR_8 == ((void*)0))
    {
        FUNC_1("ERROR: Couldn't find index allocation attribute even though there should be one!\n");
        return ((void*)0);
    }


    VAR_16 = (PULONGLONG)((ULONG_PTR)VAR_9 + VAR_9->Length - sizeof(ULONGLONG));


    VAR_10 = FUNC_3(VAR_3, sizeof(B_TREE_FILENAME_NODE), VAR_4);
    if (!VAR_10)
    {
        FUNC_1("ERROR: Couldn't allocate memory for new filename node.\n");
        return ((void*)0);
    }
    FUNC_11(VAR_10, sizeof(B_TREE_FILENAME_NODE));


    VAR_17 = FUNC_3(VAR_3, sizeof(B_TREE_KEY), VAR_4);
    if (!VAR_17)
    {
        FUNC_1("ERROR: Failed to allocate memory for key!\n");
        FUNC_4(VAR_10, VAR_4);
        return ((void*)0);
    }
    FUNC_11(VAR_17, sizeof(B_TREE_KEY));
    VAR_10->FirstKey = VAR_17;


    VAR_14 = FUNC_3(VAR_3, VAR_15, VAR_4);
    if (!VAR_14)
    {
        FUNC_1("ERROR: Couldn't allocate memory for node buffer!\n");
        FUNC_4(VAR_17, VAR_4);
        FUNC_4(VAR_10, VAR_4);
        return ((void*)0);
    }


    VAR_19 = FUNC_6(VAR_6, VAR_15, *VAR_16);




    VAR_20 = FUNC_9(VAR_6,
                              VAR_8,
                              VAR_19,
                              (PCHAR)VAR_14,
                              VAR_15);

    FUNC_0(VAR_20 == VAR_15);
    FUNC_7(VAR_14->Ntfs.Type == VAR_0);
    FUNC_7(VAR_14->VCN == *VAR_16);


    VAR_18 = FUNC_5(VAR_6, &VAR_14->Ntfs);
    if (!FUNC_8(VAR_18))
    {
        FUNC_1("ERROR: Couldn't apply fixup array to index node buffer!\n");
        FUNC_4(VAR_14, VAR_4);
        FUNC_4(VAR_17, VAR_4);
        FUNC_4(VAR_10, VAR_4);
        return ((void*)0);
    }


    VAR_12 = (PINDEX_ENTRY_ATTRIBUTE)((ULONG_PTR)(&VAR_14->Header)
                                               + VAR_14->Header.FirstEntryOffset);
    VAR_11 = VAR_12;
    while (VAR_13 < VAR_14->Header.TotalSizeOfEntries)
    {

        VAR_17->IndexEntry = FUNC_3(VAR_3, VAR_11->Length, VAR_4);
        if (!VAR_17->IndexEntry)
        {
            FUNC_1("ERROR: Couldn't allocate memory for next key!\n");
            FUNC_2(VAR_10);
            FUNC_4(VAR_14, VAR_4);
            return ((void*)0);
        }

        VAR_10->KeyCount++;


        if (!(VAR_11->Flags & VAR_1))
        {

            PB_TREE_KEY VAR_21 = FUNC_3(VAR_3, sizeof(B_TREE_KEY), VAR_4);
            if (!VAR_21)
            {
                FUNC_1("ERROR: Couldn't allocate memory for next key!\n");
                FUNC_2(VAR_10);
                FUNC_4(VAR_14, VAR_4);
                return ((void*)0);
            }
            FUNC_11(VAR_21, sizeof(B_TREE_KEY));


            VAR_17->NextKey = VAR_21;


            FUNC_10(VAR_17->IndexEntry, VAR_11, VAR_11->Length);


            if (VAR_17->IndexEntry->Flags & VAR_2)
            {
                VAR_17->LesserChild = FUNC_12(VAR_6,
                                                                       VAR_7,
                                                                       VAR_8,
                                                                       VAR_17->IndexEntry);
            }

            VAR_17 = VAR_21;
        }
        else
        {

            FUNC_10(VAR_17->IndexEntry, VAR_11, VAR_11->Length);
            VAR_17->NextKey = ((void*)0);


            if (VAR_17->IndexEntry->Flags & VAR_2)
            {
                VAR_17->LesserChild = FUNC_12(VAR_6,
                                                                       VAR_7,
                                                                       VAR_8,
                                                                       VAR_17->IndexEntry);
            }

            break;
        }


        VAR_13 += VAR_11->Length;
        VAR_11 = (PINDEX_ENTRY_ATTRIBUTE)((ULONG_PTR)VAR_11 + VAR_11->Length);
    }

    VAR_10->VCN = *VAR_16;
    VAR_10->HasValidVCN = VAR_5;

    FUNC_4(VAR_14, VAR_4);

    return VAR_10;
}
