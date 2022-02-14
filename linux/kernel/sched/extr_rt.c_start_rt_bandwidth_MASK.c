
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_bandwidth {scalar_t__ rt_runtime; int rt_period_active; int rt_runtime_lock; int rt_period_timer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct rt_bandwidth *VAR_2)
{
 if (!FUNC_5() || VAR_2->rt_runtime == VAR_1)
  return;

 FUNC_3(&VAR_2->rt_runtime_lock);
 if (!VAR_2->rt_period_active) {
  VAR_2->rt_period_active = 1;
  FUNC_0(&VAR_2->rt_period_timer, FUNC_2(0));
  FUNC_1(&VAR_2->rt_period_timer,
          VAR_0);
 }
 FUNC_4(&VAR_2->rt_runtime_lock);
}
