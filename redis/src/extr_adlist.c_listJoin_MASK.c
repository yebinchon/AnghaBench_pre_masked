
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ len; TYPE_2__* tail; TYPE_1__* head; } ;
typedef TYPE_3__ list ;
struct TYPE_7__ {TYPE_1__* next; } ;
struct TYPE_6__ {TYPE_2__* prev; } ;



void FUNC_0(list *VAR_0, list *VAR_1) {
    if (VAR_1->head)
        VAR_1->head->prev = VAR_0->tail;

    if (VAR_0->tail)
        VAR_0->tail->next = VAR_1->head;
    else
        VAR_0->head = VAR_1->head;

    if (VAR_1->tail) VAR_0->tail = VAR_1->tail;
    VAR_0->len += VAR_1->len;


    VAR_1->head = VAR_1->tail = ((void*)0);
    VAR_1->len = 0;
}
