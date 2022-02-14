
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc_action {int tcfa_rate_est; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* cleanup ) (struct tc_action*) ;} ;


 int FUNC_0 (struct tc_action*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tc_action*) ;

__attribute__((used)) static void FUNC_3(struct tc_action *VAR_0)
{
 if (VAR_0->ops->cleanup)
  VAR_0->ops->cleanup(VAR_0);

 FUNC_1(&VAR_0->tcfa_rate_est);
 FUNC_0(VAR_0);
}
