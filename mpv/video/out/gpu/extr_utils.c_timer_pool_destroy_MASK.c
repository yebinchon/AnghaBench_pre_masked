
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_pool {int timer; TYPE_2__* ra; } ;
struct TYPE_4__ {TYPE_1__* fns; } ;
struct TYPE_3__ {int (* timer_destroy ) (TYPE_2__*,int ) ;} ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (struct timer_pool*) ;

void FUNC_2(struct timer_pool *VAR_0)
{
    if (!VAR_0)
        return;

    VAR_0->ra->fns->timer_destroy(VAR_0->ra, VAR_0->timer);
    FUNC_1(VAR_0);
}
