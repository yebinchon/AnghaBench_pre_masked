
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_pool {int running; int timer; TYPE_2__* ra; } ;
struct TYPE_4__ {TYPE_1__* fns; } ;
struct TYPE_3__ {int (* timer_start ) (TYPE_2__*,int ) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ) ;

void FUNC_2(struct timer_pool *VAR_0)
{
    if (!VAR_0)
        return;

    FUNC_0(!VAR_0->running);
    VAR_0->ra->fns->timer_start(VAR_0->ra, VAR_0->timer);
    VAR_0->running = 1;
}
