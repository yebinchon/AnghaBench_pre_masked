
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_queue_item {struct nn_queue_item* next; } ;
struct nn_queue {struct nn_queue_item* tail; struct nn_queue_item* head; } ;


 struct nn_queue_item* VAR_0 ;
 int FUNC_0 (int) ;

void FUNC_1 (struct nn_queue *VAR_1, struct nn_queue_item *VAR_2)
{
    FUNC_0 (VAR_2->next == VAR_0);

    VAR_2->next = ((void*)0);
    if (!VAR_1->head)
        VAR_1->head = VAR_2;
    if (VAR_1->tail)
        VAR_1->tail->next = VAR_2;
    VAR_1->tail = VAR_2;
}
