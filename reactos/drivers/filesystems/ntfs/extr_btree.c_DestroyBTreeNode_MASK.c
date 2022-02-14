
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int VOID ;
typedef scalar_t__ ULONG ;
struct TYPE_8__ {scalar_t__ KeyCount; TYPE_1__* FirstKey; } ;
struct TYPE_7__ {struct TYPE_7__* NextKey; } ;
typedef TYPE_1__* PB_TREE_KEY ;
typedef TYPE_2__* PB_TREE_FILENAME_NODE ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;

VOID
FUNC_3(PB_TREE_FILENAME_NODE VAR_1)
{
    PB_TREE_KEY VAR_2;
    PB_TREE_KEY VAR_3 = VAR_1->FirstKey;
    ULONG VAR_4;
    for (VAR_4 = 0; VAR_4 < VAR_1->KeyCount; VAR_4++)
    {
        FUNC_2(VAR_3);
        VAR_2 = VAR_3->NextKey;
        FUNC_0(VAR_3);
        VAR_3 = VAR_2;
    }

    FUNC_2(VAR_2 == ((void*)0));

    FUNC_1(VAR_1, VAR_0);
}
