
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int index; int * nextEntry; int * entry; scalar_t__ safe; scalar_t__ table; int * d; } ;
typedef TYPE_1__ dictIterator ;
typedef int dict ;


 TYPE_1__* FUNC_0 (int) ;

dictIterator *FUNC_1(dict *VAR_0)
{
    dictIterator *VAR_1 = FUNC_0(sizeof(*VAR_1));

    VAR_1->d = VAR_0;
    VAR_1->table = 0;
    VAR_1->index = -1;
    VAR_1->safe = 0;
    VAR_1->entry = ((void*)0);
    VAR_1->nextEntry = ((void*)0);
    return VAR_1;
}
