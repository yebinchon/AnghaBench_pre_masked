
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_dl_entity {scalar_t__ dl_throttled; scalar_t__ dl_boosted; } ;
struct task_struct {scalar_t__ on_rq; int nr_cpus_allowed; struct sched_dl_entity dl; int normal_prio; } ;
struct rq {int dl; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct sched_dl_entity*,int *) ;
 int FUNC_2 (struct sched_dl_entity*,int *) ;
 int FUNC_3 (struct sched_dl_entity*) ;
 int FUNC_4 (struct sched_dl_entity*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct sched_dl_entity*,struct sched_dl_entity*,int) ;
 int FUNC_7 (struct rq*,struct task_struct*) ;
 struct task_struct* FUNC_8 (struct task_struct*) ;
 int FUNC_9 (struct sched_dl_entity*,int) ;
 int FUNC_10 (struct rq*,struct task_struct*) ;

__attribute__((used)) static void FUNC_11(struct rq *VAR_4, struct task_struct *VAR_5, int VAR_6)
{
 struct task_struct *VAR_7 = FUNC_8(VAR_5);
 struct sched_dl_entity *VAR_8 = &VAR_5->dl;
 if (VAR_7 && FUNC_5(VAR_7->normal_prio) && VAR_5->dl.dl_boosted) {
  VAR_8 = &VAR_7->dl;
 } else if (!FUNC_5(VAR_5->normal_prio)) {







  FUNC_0(!VAR_5->dl.dl_boosted || VAR_6 != VAR_0);
  return;
 }







 if (!VAR_5->dl.dl_throttled && !FUNC_4(&VAR_5->dl))
  FUNC_3(&VAR_5->dl);

 if (VAR_5->on_rq == VAR_3 || VAR_6 & VAR_1) {
  FUNC_1(&VAR_5->dl, &VAR_4->dl);
  FUNC_2(&VAR_5->dl, &VAR_4->dl);
 }
 if (VAR_5->dl.dl_throttled && !(VAR_6 & VAR_0)) {
  if (VAR_6 & VAR_2)
   FUNC_9(&VAR_5->dl, VAR_6);

  return;
 }

 FUNC_6(&VAR_5->dl, VAR_8, VAR_6);

 if (!FUNC_10(VAR_4, VAR_5) && VAR_5->nr_cpus_allowed > 1)
  FUNC_7(VAR_4, VAR_5);
}
