
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sugov_policy {int work_lock; int thread; int worker; TYPE_1__* policy; } ;
struct TYPE_2__ {scalar_t__ fast_switch_enabled; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct sugov_policy *VAR_0)
{

 if (VAR_0->policy->fast_switch_enabled)
  return;

 FUNC_0(&VAR_0->worker);
 FUNC_1(VAR_0->thread);
 FUNC_2(&VAR_0->work_lock);
}
