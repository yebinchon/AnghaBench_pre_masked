
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int ULONGLONG ;
typedef scalar_t__ ULONG ;
struct TYPE_22__ {TYPE_2__* IndexEntry; TYPE_2__* LesserChild; struct TYPE_22__* NextKey; } ;
struct TYPE_20__ {int Name; int NameLength; } ;
struct TYPE_21__ {scalar_t__ KeyCount; int Length; int Flags; TYPE_3__* FirstKey; int VCN; TYPE_1__ FileName; int DiskNeedsUpdating; } ;
typedef TYPE_2__* PINDEX_ENTRY_ATTRIBUTE ;
typedef TYPE_3__* PB_TREE_KEY ;
typedef TYPE_2__* PB_TREE_FILENAME_NODE ;
typedef int PB_TREE ;
typedef int NTSTATUS ;
typedef int B_TREE_FILENAME_NODE ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 void* FUNC_2 (TYPE_3__*) ;
 TYPE_3__* FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,TYPE_2__*,TYPE_3__**,TYPE_2__**,char*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (TYPE_2__*,int ,int ) ;
 void* FUNC_7 (int ,int,int ) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_10 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_11 (TYPE_2__*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_12 (TYPE_2__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;

NTSTATUS
FUNC_13(PB_TREE VAR_6,
               PB_TREE_FILENAME_NODE VAR_7,
               PB_TREE_KEY *VAR_8,
               PB_TREE_FILENAME_NODE *VAR_9,
               BOOLEAN VAR_10)
{
    ULONG VAR_11;
    PB_TREE_KEY VAR_12, VAR_13;
    ULONG VAR_14;
    ULONG VAR_15;
    ULONG VAR_16;
    ULONG VAR_17;

    FUNC_4("SplitBTreeNode(%p, %p, %p, %p, %s) called\n",
            VAR_6,
            VAR_7,
            VAR_8,
            VAR_9,
            VAR_10 ? "TRUE" : "FALSE");


    FUNC_6(VAR_7, 0, 0);



    *VAR_9 = FUNC_7(VAR_1, sizeof(B_TREE_FILENAME_NODE), VAR_4);
    if (*VAR_9 == ((void*)0))
    {
        FUNC_5("Error: Failed to allocate memory for right hand sibling!\n");
        return VAR_2;
    }
    FUNC_11(*VAR_9, sizeof(B_TREE_FILENAME_NODE));
    (*VAR_9)->DiskNeedsUpdating = VAR_5;
    VAR_12 = VAR_7->FirstKey;
    VAR_11 = 0;
    VAR_15 = 2016;
    VAR_16 = 0;
    for (VAR_17 = 0; VAR_17 < VAR_7->KeyCount; VAR_17++)
    {
        VAR_16 += VAR_12->IndexEntry->Length;

        if (VAR_16 > VAR_15)
            break;

        VAR_11++;
        VAR_12 = VAR_12->NextKey;
    }


    *VAR_8 = VAR_12->NextKey;
    VAR_13 = (*VAR_8)->NextKey;

    FUNC_5("%lu keys, %lu median\n", VAR_7->KeyCount, VAR_11);
    FUNC_5("\t\tMedian: %.*S\n", (*VAR_8)->IndexEntry->FileName.NameLength, (*VAR_8)->IndexEntry->FileName.Name);




    VAR_12->NextKey = FUNC_3(FUNC_1((*VAR_8)->IndexEntry->Flags, VAR_0));
    if (VAR_12->NextKey == ((void*)0))
    {
        FUNC_5("Error: Couldn't allocate dummy key!\n");
        VAR_12->NextKey = *VAR_8;
        FUNC_8(*VAR_9, VAR_4);
        return VAR_2;
    }


    if ((*VAR_8)->IndexEntry->Flags & VAR_0)
    {

        VAR_12->NextKey->LesserChild = (*VAR_8)->LesserChild;


        FUNC_12(VAR_12->NextKey->IndexEntry, FUNC_9((*VAR_8)->IndexEntry));
    }
    else
    {

        PINDEX_ENTRY_ATTRIBUTE VAR_18 = FUNC_7(VAR_1,
                                                                     (*VAR_8)->IndexEntry->Length + sizeof(ULONGLONG),
                                                                     VAR_4);
        if (!VAR_18)
        {
            FUNC_5("Unable to allocate memory for new index entry!\n");
            VAR_12->NextKey = *VAR_8;
            FUNC_8(*VAR_9, VAR_4);
            return VAR_2;
        }


        FUNC_10(VAR_18, (*VAR_8)->IndexEntry, (*VAR_8)->IndexEntry->Length);


        FUNC_8((*VAR_8)->IndexEntry, VAR_4);
        (*VAR_8)->IndexEntry = VAR_18;


        (*VAR_8)->IndexEntry->Length += sizeof(ULONGLONG);


        (*VAR_8)->IndexEntry->Flags |= VAR_0;
    }


    (*VAR_8)->LesserChild = VAR_7;
    FUNC_12((*VAR_8)->IndexEntry, VAR_7->VCN);


    VAR_7->KeyCount = VAR_11 + 2;

    VAR_14 = FUNC_2(VAR_7->FirstKey);
    FUNC_0(VAR_7->KeyCount == VAR_14);


    (*VAR_9)->FirstKey = VAR_13;
    (*VAR_9)->KeyCount = FUNC_2(VAR_13);


    FUNC_5("Left-hand node after split:\n");
    FUNC_6(VAR_7, 0, 0);

    FUNC_5("Right-hand sibling node after split:\n");
    FUNC_6(*VAR_9, 0, 0);


    return VAR_3;
}
