
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {scalar_t__ policy; } ;
struct sched_rt_entity {int dummy; } ;
struct rt_rq {unsigned int rr_nr_running; } ;


 scalar_t__ VAR_0 ;
 struct rt_rq* FUNC_0 (struct sched_rt_entity*) ;
 struct task_struct* FUNC_1 (struct sched_rt_entity*) ;

__attribute__((used)) static inline
unsigned int FUNC_2(struct sched_rt_entity *VAR_1)
{
 struct rt_rq *VAR_2 = FUNC_0(VAR_1);
 struct task_struct *VAR_3;

 if (VAR_2)
  return VAR_2->rr_nr_running;

 VAR_3 = FUNC_1(VAR_1);

 return (VAR_3->policy == VAR_0) ? 1 : 0;
}
