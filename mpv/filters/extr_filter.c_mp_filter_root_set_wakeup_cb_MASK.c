
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_filter {TYPE_1__* in; } ;
struct filter_runner {void (* wakeup_cb ) (void*) ;int async_lock; void* wakeup_ctx; } ;
struct TYPE_2__ {struct filter_runner* runner; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct mp_filter *VAR_0,
                                  void (*VAR_1)(void *VAR_2), void *VAR_3)
{
    struct filter_runner *VAR_4 = VAR_0->in->runner;
    FUNC_0(&VAR_4->async_lock);
    VAR_4->wakeup_cb = VAR_1;
    VAR_4->wakeup_ctx = VAR_3;
    FUNC_1(&VAR_4->async_lock);
}
