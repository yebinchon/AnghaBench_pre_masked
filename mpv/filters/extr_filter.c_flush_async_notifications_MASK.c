
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_filter {TYPE_1__* in; } ;
struct filter_runner {int num_async_pending; int async_wakeup_sent; int async_lock; struct mp_filter** async_pending; } ;
struct TYPE_2__ {int async_pending; } ;


 int FUNC_0 (struct mp_filter*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct filter_runner *VAR_0)
{
    FUNC_1(&VAR_0->async_lock);
    for (int VAR_1 = 0; VAR_1 < VAR_0->num_async_pending; VAR_1++) {
        struct mp_filter *VAR_2 = VAR_0->async_pending[VAR_1];
        FUNC_0(VAR_2);
        VAR_2->in->async_pending = 0;
    }
    VAR_0->num_async_pending = 0;
    VAR_0->async_wakeup_sent = 0;
    FUNC_2(&VAR_0->async_lock);
}
