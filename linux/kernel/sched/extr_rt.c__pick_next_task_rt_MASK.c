
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct sched_rt_entity {int dummy; } ;
struct rt_rq {int dummy; } ;
struct rq {struct rt_rq rt; } ;


 int FUNC_0 (int) ;
 struct rt_rq* FUNC_1 (struct sched_rt_entity*) ;
 struct sched_rt_entity* FUNC_2 (struct rq*,struct rt_rq*) ;
 struct task_struct* FUNC_3 (struct sched_rt_entity*) ;

__attribute__((used)) static struct task_struct *FUNC_4(struct rq *VAR_0)
{
 struct sched_rt_entity *VAR_1;
 struct rt_rq *VAR_2 = &VAR_0->rt;

 do {
  VAR_1 = FUNC_2(VAR_0, VAR_2);
  FUNC_0(!VAR_1);
  VAR_2 = FUNC_1(VAR_1);
 } while (VAR_2);

 return FUNC_3(VAR_1);
}
