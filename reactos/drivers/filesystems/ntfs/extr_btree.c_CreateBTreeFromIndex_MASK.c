
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_11__ ;


typedef scalar_t__ ULONG_PTR ;
typedef scalar_t__ ULONG ;
struct TYPE_32__ {void* LesserChild; TYPE_11__* IndexEntry; struct TYPE_32__* NextKey; int KeyCount; struct TYPE_32__* RootNode; struct TYPE_32__* FirstKey; } ;
struct TYPE_31__ {int Length; int Flags; } ;
struct TYPE_28__ {scalar_t__ FirstEntryOffset; scalar_t__ TotalSizeOfEntries; } ;
struct TYPE_30__ {TYPE_3__ Header; } ;
struct TYPE_29__ {TYPE_2__* pRecord; } ;
struct TYPE_26__ {scalar_t__ ValueLength; } ;
struct TYPE_27__ {TYPE_1__ Resident; } ;
struct TYPE_25__ {int Flags; } ;
typedef TYPE_4__* PNTFS_ATTR_CONTEXT ;
typedef TYPE_5__* PINDEX_ROOT_ATTRIBUTE ;
typedef TYPE_6__* PINDEX_ENTRY_ATTRIBUTE ;
typedef int PFILE_RECORD_HEADER ;
typedef int PDEVICE_EXTENSION ;
typedef TYPE_7__* PB_TREE_KEY ;
typedef TYPE_7__* PB_TREE_FILENAME_NODE ;
typedef TYPE_7__* PB_TREE ;
typedef int NTSTATUS ;
typedef int B_TREE_KEY ;
typedef int B_TREE_FILENAME_NODE ;
typedef int B_TREE ;


 int VAR_0 ;
 void* FUNC_0 (int ,TYPE_5__*,TYPE_4__*,TYPE_11__*) ;
 int FUNC_1 (char*,TYPE_5__*,TYPE_7__**) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_7__*) ;
 void* FUNC_4 (int ,int,int ) ;
 int FUNC_5 (TYPE_7__*,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int ,char*,int,TYPE_4__**,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (int ) ;
 int VAR_5 ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_11__*,TYPE_6__*,int) ;
 int FUNC_11 (TYPE_7__*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

NTSTATUS
FUNC_12(PDEVICE_EXTENSION VAR_11,
                     PFILE_RECORD_HEADER VAR_12,

                     PNTFS_ATTR_CONTEXT VAR_13,
                     PINDEX_ROOT_ATTRIBUTE VAR_14,
                     PB_TREE *VAR_15)
{
    PINDEX_ENTRY_ATTRIBUTE VAR_16;
    PB_TREE VAR_17 = FUNC_4(VAR_5, sizeof(B_TREE), VAR_10);
    PB_TREE_FILENAME_NODE VAR_18 = FUNC_4(VAR_5, sizeof(B_TREE_FILENAME_NODE), VAR_10);
    PB_TREE_KEY VAR_19 = FUNC_4(VAR_5, sizeof(B_TREE_KEY), VAR_10);
    ULONG VAR_20 = VAR_14->Header.FirstEntryOffset;
    PNTFS_ATTR_CONTEXT VAR_21 = ((void*)0);
    NTSTATUS VAR_22;

    FUNC_1("CreateBTreeFromIndex(%p, %p)\n", VAR_14, VAR_15);

    if (!VAR_17 || !VAR_18 || !VAR_19)
    {
        FUNC_2("Couldn't allocate enough memory for B-Tree!\n");
        if (VAR_17)
            FUNC_5(VAR_17, VAR_10);
        if (VAR_19)
            FUNC_5(VAR_19, VAR_10);
        if (VAR_18)
            FUNC_5(VAR_18, VAR_10);
        return VAR_7;
    }

    FUNC_11(VAR_17, sizeof(B_TREE));
    FUNC_11(VAR_18, sizeof(B_TREE_FILENAME_NODE));
    FUNC_11(VAR_19, sizeof(B_TREE_KEY));


    VAR_22 = FUNC_7(VAR_11,
                           VAR_12,
                           VAR_0,
                           L"$I30",
                           4,
                           &VAR_21,
                           ((void*)0));
    if (!FUNC_8(VAR_22))
        VAR_21 = ((void*)0);


    VAR_18->FirstKey = VAR_19;
    VAR_17->RootNode = VAR_18;


    if (FUNC_6(VAR_2, VAR_1) + VAR_14->Header.TotalSizeOfEntries > VAR_13->pRecord->Resident.ValueLength)
    {
        FUNC_2("Filesystem corruption detected!\n");
        FUNC_3(VAR_17);
        VAR_22 = VAR_6;
        goto Cleanup;
    }


    VAR_16 = (PINDEX_ENTRY_ATTRIBUTE)((ULONG_PTR)VAR_14
                                                + FUNC_6(VAR_2, VAR_1)
                                                + VAR_14->Header.FirstEntryOffset);


    while (VAR_20 < VAR_14->Header.TotalSizeOfEntries)
    {

        VAR_19->IndexEntry = FUNC_4(VAR_5, VAR_16->Length, VAR_10);
        if (!VAR_19->IndexEntry)
        {
            FUNC_2("ERROR: Couldn't allocate memory for next key!\n");
            FUNC_3(VAR_17);
            VAR_22 = VAR_7;
            goto Cleanup;
        }

        VAR_18->KeyCount++;


        if (!(VAR_16->Flags & VAR_3))
        {

            PB_TREE_KEY VAR_23 = FUNC_4(VAR_5, sizeof(B_TREE_KEY), VAR_10);
            if (!VAR_23)
            {
                FUNC_2("ERROR: Couldn't allocate memory for next key!\n");
                FUNC_3(VAR_17);
                VAR_22 = VAR_7;
                goto Cleanup;
            }

            FUNC_11(VAR_23, sizeof(B_TREE_KEY));


            VAR_19->NextKey = VAR_23;


            FUNC_10(VAR_19->IndexEntry, VAR_16, VAR_16->Length);


            if (VAR_19->IndexEntry->Flags & VAR_4)
            {

                VAR_19->LesserChild = FUNC_0(VAR_11,
                                                                       VAR_14,
                                                                       VAR_21,
                                                                       VAR_19->IndexEntry);
                if (!VAR_19->LesserChild)
                {
                    FUNC_2("ERROR: Couldn't create child node!\n");
                    FUNC_3(VAR_17);
                    VAR_22 = VAR_8;
                    goto Cleanup;
                }
            }


            VAR_20 += VAR_16->Length;
            VAR_16 = (PINDEX_ENTRY_ATTRIBUTE)((ULONG_PTR)VAR_16 + VAR_16->Length);
            VAR_19 = VAR_23;
        }
        else
        {

            FUNC_10(VAR_19->IndexEntry, VAR_16, VAR_16->Length);
            VAR_19->NextKey = ((void*)0);


            if (VAR_19->IndexEntry->Flags & VAR_4)
            {

                VAR_19->LesserChild = FUNC_0(VAR_11,
                                                                       VAR_14,
                                                                       VAR_21,
                                                                       VAR_19->IndexEntry);
                if (!VAR_19->LesserChild)
                {
                    FUNC_2("ERROR: Couldn't create child node!\n");
                    FUNC_3(VAR_17);
                    VAR_22 = VAR_8;
                    goto Cleanup;
                }
            }

            break;
        }
    }

    *VAR_15 = VAR_17;
    VAR_22 = VAR_9;

Cleanup:
    if (VAR_21)
        FUNC_9(VAR_21);

    return VAR_22;
}
