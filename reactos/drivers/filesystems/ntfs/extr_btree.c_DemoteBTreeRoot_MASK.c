
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* RootNode; } ;
struct TYPE_10__ {int KeyCount; void* DiskNeedsUpdating; struct TYPE_10__* FirstKey; struct TYPE_10__* LesserChild; } ;
typedef TYPE_1__* PB_TREE_KEY ;
typedef TYPE_1__* PB_TREE_FILENAME_NODE ;
typedef TYPE_3__* PB_TREE ;
typedef int NTSTATUS ;
typedef int B_TREE_FILENAME_NODE ;


 TYPE_1__* FUNC_0 (void*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_1__* FUNC_4 (int ,int,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_6 (TYPE_1__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;

NTSTATUS
FUNC_7(PB_TREE VAR_5)
{
    PB_TREE_FILENAME_NODE VAR_6, VAR_7;
    PB_TREE_KEY VAR_8;

    FUNC_1("Collapsing Index Root into sub-node.\n");


    FUNC_3(VAR_5);



    VAR_6 = FUNC_4(VAR_0, sizeof(B_TREE_FILENAME_NODE), VAR_3);
    if (!VAR_6)
    {
        FUNC_2("ERROR: Couldn't allocate memory for new sub-node.\n");
        return VAR_1;
    }
    FUNC_6(VAR_6, sizeof(B_TREE_FILENAME_NODE));


    VAR_6->KeyCount = VAR_5->RootNode->KeyCount;
    VAR_6->FirstKey = VAR_5->RootNode->FirstKey;
    VAR_6->DiskNeedsUpdating = VAR_4;


    VAR_8 = FUNC_0(VAR_4);
    if (!VAR_8)
    {
        FUNC_2("ERROR: Couldn't allocate memory for new root node.\n");
        FUNC_5(VAR_6, VAR_3);
        return VAR_1;
    }


    VAR_8->LesserChild = VAR_6;


    VAR_7 = FUNC_4(VAR_0, sizeof(B_TREE_FILENAME_NODE), VAR_3);
    if (!VAR_7)
    {
        FUNC_2("ERROR: Couldn't allocate memory for new index root.\n");
        FUNC_5(VAR_6, VAR_3);
        FUNC_5(VAR_8, VAR_3);
        return VAR_1;
    }
    FUNC_6(VAR_7, sizeof(B_TREE_FILENAME_NODE));

    VAR_7->DiskNeedsUpdating = VAR_4;


    VAR_7->FirstKey = VAR_8;
    VAR_7->KeyCount = 1;
    VAR_7->DiskNeedsUpdating = VAR_4;


    VAR_5->RootNode = VAR_7;


    FUNC_3(VAR_5);


    return VAR_2;
}
