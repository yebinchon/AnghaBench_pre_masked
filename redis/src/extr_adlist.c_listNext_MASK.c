
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* prev; struct TYPE_5__* next; } ;
typedef TYPE_1__ listNode ;
struct TYPE_6__ {scalar_t__ direction; TYPE_1__* next; } ;
typedef TYPE_2__ listIter ;


 scalar_t__ VAR_0 ;

listNode *FUNC_0(listIter *VAR_1)
{
    listNode *VAR_2 = VAR_1->next;

    if (VAR_2 != ((void*)0)) {
        if (VAR_1->direction == VAR_0)
            VAR_1->next = VAR_2->next;
        else
            VAR_1->next = VAR_2->prev;
    }
    return VAR_2;
}
