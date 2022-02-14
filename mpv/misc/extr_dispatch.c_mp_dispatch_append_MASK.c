
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_dispatch_queue {int interrupted; int wakeup_ctx; int (* wakeup_fn ) (int ) ;int lock; int cond; struct mp_dispatch_item* tail; struct mp_dispatch_item* head; } ;
struct mp_dispatch_item {scalar_t__ fn; scalar_t__ fn_data; struct mp_dispatch_item* next; scalar_t__ mergeable; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mp_dispatch_item*) ;

__attribute__((used)) static void FUNC_5(struct mp_dispatch_queue *VAR_0,
                               struct mp_dispatch_item *VAR_1)
{
    FUNC_1(&VAR_0->lock);
    if (VAR_1->mergeable) {
        for (struct mp_dispatch_item *VAR_2 = VAR_0->head; VAR_2; VAR_2 = VAR_2->next) {
            if (VAR_2->mergeable && VAR_2->fn == VAR_1->fn &&
                VAR_2->fn_data == VAR_1->fn_data)
            {
                FUNC_4(VAR_1);
                FUNC_2(&VAR_0->lock);
                return;
            }
        }
    }

    if (VAR_0->tail) {
        VAR_0->tail->next = VAR_1;
    } else {
        VAR_0->head = VAR_1;
    }
    VAR_0->tail = VAR_1;



    FUNC_0(&VAR_0->cond);


    if (!VAR_0->wakeup_fn)
        VAR_0->interrupted = 1;
    FUNC_2(&VAR_0->lock);

    if (VAR_0->wakeup_fn)
        VAR_0->wakeup_fn(VAR_0->wakeup_ctx);
}
