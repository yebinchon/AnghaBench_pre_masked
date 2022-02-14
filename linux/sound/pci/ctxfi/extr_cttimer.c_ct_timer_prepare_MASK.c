
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ct_timer_instance {scalar_t__ running; scalar_t__ position; TYPE_2__* timer_base; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* prepare ) (struct ct_timer_instance*) ;} ;


 int FUNC_0 (struct ct_timer_instance*) ;

void FUNC_1(struct ct_timer_instance *VAR_0)
{
 if (VAR_0->timer_base->ops->prepare)
  VAR_0->timer_base->ops->prepare(VAR_0);
 VAR_0->position = 0;
 VAR_0->running = 0;
}
