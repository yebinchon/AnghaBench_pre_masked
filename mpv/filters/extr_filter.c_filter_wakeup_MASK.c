
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_filter {TYPE_1__* in; } ;
struct filter_runner {int async_wakeup_sent; int async_lock; int wakeup_ctx; int (* wakeup_cb ) (int ) ;int num_async_pending; int async_pending; } ;
struct TYPE_2__ {int async_pending; struct filter_runner* runner; } ;


 int FUNC_0 (int *,int ,int ,struct mp_filter*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct mp_filter *VAR_0, bool VAR_1)
{
    struct filter_runner *VAR_2 = VAR_0->in->runner;
    FUNC_1(&VAR_2->async_lock);
    if (!VAR_0->in->async_pending) {
        VAR_0->in->async_pending = 1;

        FUNC_0(((void*)0), VAR_2->async_pending, VAR_2->num_async_pending, VAR_0);
        if (!VAR_1 && !VAR_2->async_wakeup_sent) {
            if (VAR_2->wakeup_cb)
                VAR_2->wakeup_cb(VAR_2->wakeup_ctx);
            VAR_2->async_wakeup_sent = 1;
        }
    }
    FUNC_2(&VAR_2->async_lock);
}
