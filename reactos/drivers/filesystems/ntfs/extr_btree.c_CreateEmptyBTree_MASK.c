
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int KeyCount; struct TYPE_7__* RootNode; int DiskNeedsUpdating; scalar_t__ FirstKey; } ;
typedef scalar_t__ PB_TREE_KEY ;
typedef TYPE_1__* PB_TREE_FILENAME_NODE ;
typedef TYPE_1__* PB_TREE ;
typedef int NTSTATUS ;
typedef int B_TREE_FILENAME_NODE ;
typedef int B_TREE ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 TYPE_1__* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (TYPE_1__*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

NTSTATUS
FUNC_5(PB_TREE *VAR_6)
{
    PB_TREE VAR_7 = FUNC_2(VAR_1, sizeof(B_TREE), VAR_4);
    PB_TREE_FILENAME_NODE VAR_8 = FUNC_2(VAR_1, sizeof(B_TREE_FILENAME_NODE), VAR_4);
    PB_TREE_KEY VAR_9;

    FUNC_1("CreateEmptyBTree(%p) called\n", VAR_6);

    if (!VAR_7 || !VAR_8)
    {
        FUNC_1("Couldn't allocate enough memory for B-Tree!\n");
        if (VAR_7)
            FUNC_3(VAR_7, VAR_4);
        if (VAR_8)
            FUNC_3(VAR_8, VAR_4);
        return VAR_2;
    }


    VAR_9 = FUNC_0(VAR_0);
    if (!VAR_9)
    {
        FUNC_1("ERROR: Failed to create dummy key!\n");
        FUNC_3(VAR_7, VAR_4);
        FUNC_3(VAR_8, VAR_4);
        return VAR_2;
    }

    FUNC_4(VAR_7, sizeof(B_TREE));
    FUNC_4(VAR_8, sizeof(B_TREE_FILENAME_NODE));


    VAR_8->FirstKey = VAR_9;
    VAR_8->KeyCount = 1;
    VAR_8->DiskNeedsUpdating = VAR_5;
    VAR_7->RootNode = VAR_8;

    *VAR_6 = VAR_7;



    return VAR_3;
}
