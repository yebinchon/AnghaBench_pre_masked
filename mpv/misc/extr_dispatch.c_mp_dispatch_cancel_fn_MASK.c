
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_dispatch_queue {int lock; struct mp_dispatch_item* tail; struct mp_dispatch_item* head; } ;
struct mp_dispatch_item {scalar_t__ fn; void* fn_data; struct mp_dispatch_item* next; } ;
typedef scalar_t__ mp_dispatch_fn ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mp_dispatch_item*) ;

void FUNC_3(struct mp_dispatch_queue *VAR_0,
                           mp_dispatch_fn VAR_1, void *VAR_2)
{
    FUNC_0(&VAR_0->lock);
    struct mp_dispatch_item **VAR_3 = &VAR_0->head;
    VAR_0->tail = ((void*)0);
    while (*VAR_3) {
        struct mp_dispatch_item *VAR_4 = *VAR_3;
        if (VAR_4->fn == VAR_1 && VAR_4->fn_data == VAR_2) {
            *VAR_3 = VAR_4->next;
            FUNC_2(VAR_4);
        } else {
            VAR_0->tail = VAR_4;
            VAR_3 = &VAR_4->next;
        }
    }
    FUNC_1(&VAR_0->lock);
}
