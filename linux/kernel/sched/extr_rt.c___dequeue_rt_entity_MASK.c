
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_rt_entity {scalar_t__ on_rq; int on_list; } ;
struct rt_prio_array {int dummy; } ;
struct rt_rq {struct rt_prio_array active; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct sched_rt_entity*,struct rt_prio_array*) ;
 int FUNC_2 (struct sched_rt_entity*,struct rt_rq*) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 struct rt_rq* FUNC_4 (struct sched_rt_entity*) ;

__attribute__((used)) static void FUNC_5(struct sched_rt_entity *VAR_0, unsigned int VAR_1)
{
 struct rt_rq *VAR_2 = FUNC_4(VAR_0);
 struct rt_prio_array *VAR_3 = &VAR_2->active;

 if (FUNC_3(VAR_1)) {
  FUNC_0(!VAR_0->on_list);
  FUNC_1(VAR_0, VAR_3);
 }
 VAR_0->on_rq = 0;

 FUNC_2(VAR_0, VAR_2);
}
