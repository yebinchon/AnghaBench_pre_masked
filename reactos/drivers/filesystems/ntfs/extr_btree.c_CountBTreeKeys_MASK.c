
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_3__ {struct TYPE_3__* NextKey; } ;
typedef TYPE_1__* PB_TREE_KEY ;



ULONG
FUNC_0(PB_TREE_KEY VAR_0)
{
    ULONG VAR_1 = 0;
    PB_TREE_KEY VAR_2 = VAR_0;

    while (VAR_2 != ((void*)0))
    {
        VAR_1++;
        VAR_2 = VAR_2->NextKey;
    }

    return VAR_1;
}
