
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_7__ {scalar_t__ KeyCount; TYPE_2__* FirstKey; } ;
struct TYPE_6__ {struct TYPE_6__* NextKey; TYPE_1__* IndexEntry; } ;
struct TYPE_5__ {scalar_t__ Length; } ;
typedef TYPE_2__* PB_TREE_KEY ;
typedef TYPE_3__* PB_TREE_FILENAME_NODE ;


 int FUNC_0 (int) ;

ULONG
FUNC_1(PB_TREE_FILENAME_NODE VAR_0)
{

    ULONG VAR_1 = 0;


    PB_TREE_KEY VAR_2 = VAR_0->FirstKey;
    ULONG VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_0->KeyCount; VAR_3++)
    {
        FUNC_0(VAR_2->IndexEntry->Length != 0);


        VAR_1 += VAR_2->IndexEntry->Length;
        VAR_2 = VAR_2->NextKey;
    }

    return VAR_1;
}
