
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_rt_entity {int run_list; } ;
struct rt_prio_array {struct list_head* queue; } ;
struct rt_rq {struct rt_prio_array active; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (int *,struct list_head*) ;
 int FUNC_1 (int *,struct list_head*) ;
 scalar_t__ FUNC_2 (struct sched_rt_entity*) ;
 int FUNC_3 (struct sched_rt_entity*) ;

__attribute__((used)) static void
FUNC_4(struct rt_rq *VAR_0, struct sched_rt_entity *VAR_1, int VAR_2)
{
 if (FUNC_2(VAR_1)) {
  struct rt_prio_array *VAR_3 = &VAR_0->active;
  struct list_head *VAR_4 = VAR_3->queue + FUNC_3(VAR_1);

  if (VAR_2)
   FUNC_0(&VAR_1->run_list, VAR_4);
  else
   FUNC_1(&VAR_1->run_list, VAR_4);
 }
}
