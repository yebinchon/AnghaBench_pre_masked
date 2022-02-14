
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int value; TYPE_1__* prev; TYPE_2__* next; } ;
typedef TYPE_3__ listNode ;
struct TYPE_11__ {int len; int (* free ) (int ) ;TYPE_1__* tail; TYPE_2__* head; } ;
typedef TYPE_4__ list ;
struct TYPE_9__ {TYPE_1__* prev; } ;
struct TYPE_8__ {TYPE_2__* next; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;

void FUNC_2(list *VAR_0, listNode *VAR_1)
{
    if (VAR_1->prev)
        VAR_1->prev->next = VAR_1->next;
    else
        VAR_0->head = VAR_1->next;
    if (VAR_1->next)
        VAR_1->next->prev = VAR_1->prev;
    else
        VAR_0->tail = VAR_1->prev;
    if (VAR_0->free) VAR_0->free(VAR_1->value);
    FUNC_1(VAR_1);
    VAR_0->len--;
}
