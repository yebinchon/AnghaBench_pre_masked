
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int VOID ;
typedef scalar_t__ ULONG ;
struct TYPE_10__ {TYPE_2__* RootNode; } ;
struct TYPE_9__ {int KeyCount; TYPE_1__* FirstKey; int VCN; scalar_t__ HasValidVCN; } ;
struct TYPE_8__ {struct TYPE_8__* NextKey; } ;
typedef TYPE_1__* PB_TREE_KEY ;
typedef TYPE_2__* PB_TREE_FILENAME_NODE ;
typedef TYPE_3__* PB_TREE ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_3__*,TYPE_1__*,scalar_t__,scalar_t__) ;

VOID
FUNC_2(PB_TREE VAR_0,
              PB_TREE_FILENAME_NODE VAR_1,
              ULONG VAR_2,
              ULONG VAR_3)
{
    PB_TREE_KEY VAR_4;
    ULONG VAR_5;
    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
        FUNC_0(" ");
    FUNC_0("Node #%d, Depth %d, has %d key%s", VAR_2, VAR_3, VAR_1->KeyCount, VAR_1->KeyCount == 1 ? "" : "s");

    if (VAR_1->HasValidVCN)
        FUNC_0(" VCN: %I64u\n", VAR_1->VCN);
    else if (VAR_0->RootNode == VAR_1)
        FUNC_0(" Index Root");
    else
        FUNC_0(" NOT ASSIGNED VCN YET\n");

    VAR_4 = VAR_1->FirstKey;
    for (VAR_5 = 0; VAR_5 < VAR_1->KeyCount; VAR_5++)
    {
        FUNC_1(VAR_0, VAR_4, VAR_5, VAR_3);
        VAR_4 = VAR_4->NextKey;
    }
}
