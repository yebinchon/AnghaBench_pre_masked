
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_rq {scalar_t__ rt_time; } ;
struct rt_bandwidth {scalar_t__ rt_runtime; int rt_period_timer; } ;


 scalar_t__ FUNC_0 (int *) ;
 struct rt_bandwidth* FUNC_1 (struct rt_rq*) ;

bool FUNC_2(struct rt_rq *VAR_0)
{
 struct rt_bandwidth *VAR_1 = FUNC_1(VAR_0);

 return (FUNC_0(&VAR_1->rt_period_timer) ||
  VAR_0->rt_time < VAR_1->rt_runtime);
}
