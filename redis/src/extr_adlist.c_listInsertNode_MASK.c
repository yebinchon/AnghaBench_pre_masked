
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* prev; struct TYPE_7__* next; void* value; } ;
typedef TYPE_1__ listNode ;
struct TYPE_8__ {int len; TYPE_1__* head; TYPE_1__* tail; } ;
typedef TYPE_2__ list ;


 TYPE_1__* FUNC_0 (int) ;

list *FUNC_1(list *VAR_0, listNode *VAR_1, void *VAR_2, int VAR_3) {
    listNode *VAR_4;

    if ((VAR_4 = FUNC_0(sizeof(*VAR_4))) == ((void*)0))
        return ((void*)0);
    VAR_4->value = VAR_2;
    if (VAR_3) {
        VAR_4->prev = VAR_1;
        VAR_4->next = VAR_1->next;
        if (VAR_0->tail == VAR_1) {
            VAR_0->tail = VAR_4;
        }
    } else {
        VAR_4->next = VAR_1;
        VAR_4->prev = VAR_1->prev;
        if (VAR_0->head == VAR_1) {
            VAR_0->head = VAR_4;
        }
    }
    if (VAR_4->prev != ((void*)0)) {
        VAR_4->prev->next = VAR_4;
    }
    if (VAR_4->next != ((void*)0)) {
        VAR_4->next->prev = VAR_4;
    }
    VAR_0->len++;
    return VAR_0;
}
