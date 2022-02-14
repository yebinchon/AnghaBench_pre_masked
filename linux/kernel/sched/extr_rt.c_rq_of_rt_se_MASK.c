
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct sched_rt_entity {int dummy; } ;
struct rq {int dummy; } ;


 struct task_struct* FUNC_0 (struct sched_rt_entity*) ;
 struct rq* FUNC_1 (struct task_struct*) ;

__attribute__((used)) static inline struct rq *FUNC_2(struct sched_rt_entity *VAR_0)
{
 struct task_struct *VAR_1 = FUNC_0(VAR_0);

 return FUNC_1(VAR_1);
}
