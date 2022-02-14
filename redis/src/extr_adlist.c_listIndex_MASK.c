
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; struct TYPE_5__* prev; } ;
typedef TYPE_1__ listNode ;
struct TYPE_6__ {TYPE_1__* head; TYPE_1__* tail; } ;
typedef TYPE_2__ list ;



listNode *FUNC_0(list *VAR_0, long VAR_1) {
    listNode *VAR_2;

    if (VAR_1 < 0) {
        VAR_1 = (-VAR_1)-1;
        VAR_2 = VAR_0->tail;
        while(VAR_1-- && VAR_2) VAR_2 = VAR_2->prev;
    } else {
        VAR_2 = VAR_0->head;
        while(VAR_1-- && VAR_2) VAR_2 = VAR_2->next;
    }
    return VAR_2;
}
