
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


 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(list *VAR_0) {
    listNode *VAR_1 = VAR_0->tail;

    if (FUNC_0(VAR_0) <= 1) return;


    VAR_0->tail = VAR_1->prev;
    VAR_0->tail->next = ((void*)0);

    VAR_0->head->prev = VAR_1;
    VAR_1->prev = ((void*)0);
    VAR_1->next = VAR_0->head;
    VAR_0->head = VAR_1;
}
