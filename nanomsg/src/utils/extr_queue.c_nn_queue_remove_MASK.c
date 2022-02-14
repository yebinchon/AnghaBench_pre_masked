
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_queue_item {scalar_t__ next; } ;
struct nn_queue {struct nn_queue_item* tail; struct nn_queue_item* head; } ;


 scalar_t__ VAR_0 ;

void FUNC_0 (struct nn_queue *VAR_1, struct nn_queue_item *VAR_2)
{
    struct nn_queue_item *VAR_3;
    struct nn_queue_item *VAR_4;

    if (VAR_2->next == VAR_0)
        return;

    VAR_4 = ((void*)0);
    for (VAR_3 = VAR_1->head; VAR_3 != ((void*)0); VAR_3 = VAR_3->next) {
        if (VAR_3 == VAR_2) {
            if (VAR_1->head == VAR_3)
                VAR_1->head = VAR_3->next;
            if (VAR_1->tail == VAR_3)
                VAR_1->tail = VAR_4;
            if (VAR_4)
                VAR_4->next = VAR_3->next;
            VAR_2->next = VAR_0;
            return;
        }
        VAR_4 = VAR_3;
    }
}
