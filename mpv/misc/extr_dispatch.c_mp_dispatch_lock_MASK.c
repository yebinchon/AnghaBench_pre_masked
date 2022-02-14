
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_dispatch_queue {int locked_explicit; int lock_requests; int locked; int lock; int locked_explicit_thread; int cond; scalar_t__ in_process; int wakeup_ctx; int (* wakeup_fn ) (int ) ;int in_process_thread; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;

void FUNC_7(struct mp_dispatch_queue *VAR_0)
{
    FUNC_3(&VAR_0->lock);

    if (VAR_0->in_process)
        FUNC_0(!FUNC_2(VAR_0->in_process_thread, FUNC_5()));

    if (VAR_0->locked_explicit)
        FUNC_0(!FUNC_2(VAR_0->locked_explicit_thread, FUNC_5()));
    VAR_0->lock_requests += 1;



    while (!VAR_0->in_process) {
        FUNC_4(&VAR_0->lock);
        if (VAR_0->wakeup_fn)
            VAR_0->wakeup_fn(VAR_0->wakeup_ctx);
        FUNC_3(&VAR_0->lock);
        if (VAR_0->in_process)
            break;
        FUNC_1(&VAR_0->cond, &VAR_0->lock);
    }

    while (!VAR_0->in_process || VAR_0->locked)
        FUNC_1(&VAR_0->cond, &VAR_0->lock);

    FUNC_0(VAR_0->lock_requests);
    FUNC_0(!VAR_0->locked);
    FUNC_0(!VAR_0->locked_explicit);
    VAR_0->locked = 1;
    VAR_0->locked_explicit = 1;
    VAR_0->locked_explicit_thread = FUNC_5();
    FUNC_4(&VAR_0->lock);
}
