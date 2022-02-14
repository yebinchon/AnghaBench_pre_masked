
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_rt_entity {scalar_t__ timeout; } ;
struct task_struct {int nr_cpus_allowed; struct sched_rt_entity rt; } ;
struct rq {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rq*,struct task_struct*) ;
 int FUNC_1 (struct sched_rt_entity*,int) ;
 int FUNC_2 (struct rq*,struct task_struct*) ;

__attribute__((used)) static void
FUNC_3(struct rq *VAR_1, struct task_struct *VAR_2, int VAR_3)
{
 struct sched_rt_entity *VAR_4 = &VAR_2->rt;

 if (VAR_3 & VAR_0)
  VAR_4->timeout = 0;

 FUNC_1(VAR_4, VAR_3);

 if (!FUNC_2(VAR_1, VAR_2) && VAR_2->nr_cpus_allowed > 1)
  FUNC_0(VAR_1, VAR_2);
}
