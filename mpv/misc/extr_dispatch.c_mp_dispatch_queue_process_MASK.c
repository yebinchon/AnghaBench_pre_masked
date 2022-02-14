
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct mp_dispatch_queue {int in_process; int locked; int interrupted; int lock; int wait; int cond; int * tail; struct mp_dispatch_item* head; scalar_t__ lock_requests; int in_process_thread; } ;
struct mp_dispatch_item {int completed; scalar_t__ asynchronous; int fn_data; int (* fn ) (int ) ;struct mp_dispatch_item* next; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,double) ;
 int FUNC_2 () ;
 struct timespec FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *,struct timespec*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct mp_dispatch_item*) ;

void FUNC_12(struct mp_dispatch_queue *VAR_0, double VAR_1)
{
    FUNC_7(&VAR_0->lock);
    VAR_0->wait = VAR_1 > 0 ? FUNC_1(FUNC_2(), VAR_1) : 0;
    FUNC_0(!VAR_0->in_process);
    VAR_0->in_process = 1;
    VAR_0->in_process_thread = FUNC_9();

    if (VAR_0->lock_requests)
        FUNC_4(&VAR_0->cond);
    while (1) {
        if (VAR_0->lock_requests) {

            FUNC_6(&VAR_0->cond, &VAR_0->lock);
        } else if (VAR_0->head) {
            struct mp_dispatch_item *VAR_2 = VAR_0->head;
            VAR_0->head = VAR_2->next;
            if (!VAR_0->head)
                VAR_0->tail = ((void*)0);
            VAR_2->next = ((void*)0);




            FUNC_0(!VAR_0->locked);
            VAR_0->locked = 1;
            FUNC_8(&VAR_0->lock);

            VAR_2->fn(VAR_2->fn_data);

            FUNC_7(&VAR_0->lock);
            FUNC_0(VAR_0->locked);
            VAR_0->locked = 0;

            FUNC_4(&VAR_0->cond);
            if (VAR_2->asynchronous) {
                FUNC_11(VAR_2);
            } else {
                VAR_2->completed = 1;
            }
        } else if (VAR_0->wait > 0 && !VAR_0->interrupted) {
            struct timespec VAR_3 = FUNC_3(VAR_0->wait);
            if (FUNC_5(&VAR_0->cond, &VAR_0->lock, &VAR_3))
                VAR_0->wait = 0;
        } else {
            break;
        }
    }
    FUNC_0(!VAR_0->locked);
    VAR_0->in_process = 0;
    VAR_0->interrupted = 0;
    FUNC_8(&VAR_0->lock);
}
