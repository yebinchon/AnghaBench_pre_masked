
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int ULONGLONG ;
typedef scalar_t__ ULONG ;
struct TYPE_16__ {scalar_t__ KeyCount; void* DiskNeedsUpdating; int VCN; void* HasValidVCN; TYPE_3__* FirstKey; } ;
struct TYPE_15__ {struct TYPE_15__* NextKey; TYPE_1__* IndexEntry; TYPE_4__* LesserChild; } ;
struct TYPE_14__ {int Length; int Flags; } ;
typedef int PUCHAR ;
typedef int PNTFS_ATTR_CONTEXT ;
typedef TYPE_1__* PINDEX_ENTRY_ATTRIBUTE ;
typedef TYPE_1__* PINDEX_BUFFER ;
typedef int PFILE_RECORD_HEADER ;
typedef int PDEVICE_EXTENSION ;
typedef TYPE_3__* PB_TREE_KEY ;
typedef TYPE_4__* PB_TREE_FILENAME_NODE ;
typedef int NTSTATUS ;
typedef void* BOOLEAN ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,int ,scalar_t__,int ,scalar_t__,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,TYPE_4__*,scalar_t__,void*,TYPE_1__*) ;
 int FUNC_4 (char*,int ,int ,TYPE_4__*,scalar_t__,int ,scalar_t__,int ) ;
 int FUNC_5 (char*,...) ;
 void* FUNC_6 (int ,scalar_t__,int ) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 void* VAR_0 ;
 int FUNC_8 (int ,scalar_t__,int ) ;
 int VAR_1 ;
 int FUNC_9 (int ) ;
 int VAR_2 ;
 int FUNC_10 (TYPE_1__*,TYPE_1__*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (TYPE_1__*,int ) ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_12 (int ,int ,int ,int const,scalar_t__,scalar_t__*,int ) ;

NTSTATUS
FUNC_13(PDEVICE_EXTENSION VAR_8,
                PFILE_RECORD_HEADER VAR_9,
                PB_TREE_FILENAME_NODE VAR_10,
                ULONG VAR_11,
                PNTFS_ATTR_CONTEXT VAR_12,
                ULONG VAR_13)
{
    ULONG VAR_14;
    PB_TREE_KEY VAR_15 = VAR_10->FirstKey;
    BOOLEAN VAR_16 = VAR_0;
    NTSTATUS VAR_17;


    FUNC_4("UpdateIndexNode(%p, %p, %p, %lu, %p, %lu) called for index node with VCN %I64u\n",
           VAR_8,
           VAR_9,
           VAR_10,
           VAR_11,
           VAR_12,
           VAR_13,
           VAR_10->VCN);


    for (VAR_14 = 0; VAR_14 < VAR_10->KeyCount; VAR_14++)
    {
        FUNC_0(VAR_15);


        if (VAR_15->LesserChild)
        {
            VAR_16 = VAR_7;


            VAR_17 = FUNC_13(VAR_8, VAR_9, VAR_15->LesserChild, VAR_11, VAR_12, VAR_13);
            if (!FUNC_9(VAR_17))
            {
                FUNC_5("ERROR: Failed to update child node!\n");
                return VAR_17;
            }


            if (!FUNC_2(VAR_15->IndexEntry->Flags, VAR_1))
            {

                PINDEX_ENTRY_ATTRIBUTE VAR_18 = FUNC_6(VAR_2,
                                                                        VAR_15->IndexEntry->Length + sizeof(ULONGLONG),
                                                                        VAR_6);
                if (!VAR_18)
                {
                    FUNC_5("ERROR: Unable to allocate memory for new index entry!\n");
                    return VAR_4;
                }


                FUNC_10(VAR_18, VAR_15->IndexEntry, VAR_15->IndexEntry->Length);

                VAR_18->Length += sizeof(ULONGLONG);


                FUNC_7(VAR_15->IndexEntry, VAR_6);

                VAR_15->IndexEntry = VAR_18;
            }


            FUNC_11(VAR_15->IndexEntry, VAR_15->LesserChild->VCN);

            VAR_15->IndexEntry->Flags |= VAR_1;
        }

        VAR_15 = VAR_15->NextKey;
    }



    if (VAR_10->DiskNeedsUpdating)
    {
        ULONGLONG VAR_19;
        ULONG VAR_20;
        PINDEX_BUFFER VAR_21;


        if (!VAR_10->HasValidVCN)
        {

            VAR_17 = FUNC_1(VAR_8,
                                       VAR_9,
                                       VAR_11,
                                       VAR_12,
                                       VAR_13,
                                       &VAR_10->VCN);
            if (!FUNC_9(VAR_17))
            {
                FUNC_5("ERROR: Failed to allocate index record in index allocation!\n");
                return VAR_17;
            }

            VAR_10->HasValidVCN = VAR_7;
        }


        VAR_21 = FUNC_6(VAR_2, VAR_11, VAR_6);
        if (!VAR_21)
        {
            FUNC_5("ERROR: Failed to allocate %lu bytes for index buffer!\n", VAR_11);
            return VAR_4;
        }


        VAR_17 = FUNC_3(VAR_8, VAR_10, VAR_11, VAR_16, VAR_21);
        if (!FUNC_9(VAR_17))
        {
            FUNC_5("ERROR: Failed to create index buffer from node!\n");
            FUNC_7(VAR_21, VAR_6);
            return VAR_17;
        }


        VAR_19 = FUNC_8(VAR_8, VAR_11, VAR_10->VCN);


        VAR_17 = FUNC_12(VAR_8, VAR_12, VAR_19, (const PUCHAR)VAR_21, VAR_11, &VAR_20, VAR_9);
        if (!FUNC_9(VAR_17) || VAR_20 != VAR_11)
        {
            FUNC_5("ERROR: Failed to update index allocation!\n");
            FUNC_7(VAR_21, VAR_6);
            if (!FUNC_9(VAR_17))
                return VAR_17;
            else
                return VAR_3;
        }

        VAR_10->DiskNeedsUpdating = VAR_0;


        FUNC_7(VAR_21, VAR_6);
    }

    return VAR_5;
}
