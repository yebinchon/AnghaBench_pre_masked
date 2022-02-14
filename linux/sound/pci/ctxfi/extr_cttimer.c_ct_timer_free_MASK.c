
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hw {int * irq_callback; } ;
struct ct_timer {TYPE_2__* ops; TYPE_1__* atc; } ;
struct TYPE_4__ {int (* free_global ) (struct ct_timer*) ;} ;
struct TYPE_3__ {struct hw* hw; } ;


 int FUNC_0 (struct ct_timer*) ;
 int FUNC_1 (struct ct_timer*) ;

void FUNC_2(struct ct_timer *VAR_0)
{
 struct hw *VAR_1 = VAR_0->atc->hw;
 VAR_1->irq_callback = ((void*)0);
 if (VAR_0->ops->free_global)
  VAR_0->ops->free_global(VAR_0);
 FUNC_0(VAR_0);
}
