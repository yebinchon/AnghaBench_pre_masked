
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_rt_entity {int on_list; int on_rq; int run_list; } ;
struct rt_prio_array {int bitmap; struct list_head* queue; } ;
struct rt_rq {int rt_nr_running; struct rt_prio_array active; } ;
struct list_head {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sched_rt_entity*,struct rt_prio_array*) ;
 int FUNC_2 (int,int ) ;
 struct rt_rq* FUNC_3 (struct sched_rt_entity*) ;
 int FUNC_4 (struct sched_rt_entity*,struct rt_rq*) ;
 int FUNC_5 (int *,struct list_head*) ;
 int FUNC_6 (int *,struct list_head*) ;
 scalar_t__ FUNC_7 (unsigned int) ;
 struct rt_rq* FUNC_8 (struct sched_rt_entity*) ;
 scalar_t__ FUNC_9 (struct rt_rq*) ;
 int FUNC_10 (struct sched_rt_entity*) ;

__attribute__((used)) static void FUNC_11(struct sched_rt_entity *VAR_1, unsigned int VAR_2)
{
 struct rt_rq *VAR_3 = FUNC_8(VAR_1);
 struct rt_prio_array *VAR_4 = &VAR_3->active;
 struct rt_rq *VAR_5 = FUNC_3(VAR_1);
 struct list_head *VAR_6 = VAR_4->queue + FUNC_10(VAR_1);







 if (VAR_5 && (FUNC_9(VAR_5) || !VAR_5->rt_nr_running)) {
  if (VAR_1->on_list)
   FUNC_1(VAR_1, VAR_4);
  return;
 }

 if (FUNC_7(VAR_2)) {
  FUNC_0(VAR_1->on_list);
  if (VAR_2 & VAR_0)
   FUNC_5(&VAR_1->run_list, VAR_6);
  else
   FUNC_6(&VAR_1->run_list, VAR_6);

  FUNC_2(FUNC_10(VAR_1), VAR_4->bitmap);
  VAR_1->on_list = 1;
 }
 VAR_1->on_rq = 1;

 FUNC_4(VAR_1, VAR_3);
}
