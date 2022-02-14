
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_queue_item {struct nn_queue_item* next; } ;
struct nn_queue {int * tail; struct nn_queue_item* head; } ;


 struct nn_queue_item* VAR_0 ;

struct nn_queue_item *FUNC_0 (struct nn_queue *VAR_1)
{
    struct nn_queue_item *VAR_2;

    if (!VAR_1->head)
        return ((void*)0);
    VAR_2 = VAR_1->head;
    VAR_1->head = VAR_2->next;
    if (!VAR_1->head)
        VAR_1->tail = ((void*)0);
    VAR_2->next = VAR_0;
    return VAR_2;
}
