
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_entity {int on_rq; } ;
struct task_struct {scalar_t__ policy; struct sched_entity se; } ;
struct rq {struct task_struct* idle; struct task_struct* curr; } ;
struct cfs_rq {scalar_t__ nr_running; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sched_entity*) ;
 scalar_t__ FUNC_2 (struct sched_entity*) ;
 int FUNC_3 (struct sched_entity**,struct sched_entity**) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct rq*) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (struct sched_entity*) ;
 int FUNC_8 (struct sched_entity*) ;
 struct cfs_rq* FUNC_9 (struct task_struct*) ;
 int FUNC_10 (struct task_struct*) ;
 scalar_t__ FUNC_11 (struct task_struct*) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct sched_entity*,struct sched_entity*) ;

__attribute__((used)) static void FUNC_16(struct rq *VAR_6, struct task_struct *VAR_7, int VAR_8)
{
 struct task_struct *VAR_9 = VAR_6->curr;
 struct sched_entity *VAR_10 = &VAR_9->se, *VAR_11 = &VAR_7->se;
 struct cfs_rq *VAR_12 = FUNC_9(VAR_9);
 int VAR_13 = VAR_12->nr_running >= VAR_5;
 int VAR_14 = 0;

 if (FUNC_13(VAR_10 == VAR_11))
  return;







 if (FUNC_13(FUNC_12(FUNC_1(VAR_11))))
  return;

 if (FUNC_6(VAR_1) && VAR_13 && !(VAR_8 & VAR_4)) {
  FUNC_8(VAR_11);
  VAR_14 = 1;
 }
 if (FUNC_11(VAR_9))
  return;


 if (FUNC_13(FUNC_10(VAR_9)) &&
     FUNC_4(!FUNC_10(VAR_7)))
  goto preempt;





 if (FUNC_13(VAR_7->policy != VAR_2) || !FUNC_6(VAR_3))
  return;

 FUNC_3(&VAR_10, &VAR_11);
 FUNC_14(FUNC_1(VAR_10));
 FUNC_0(!VAR_11);
 if (FUNC_15(VAR_10, VAR_11) == 1) {




  if (!VAR_14)
   FUNC_8(VAR_11);
  goto preempt;
 }

 return;

preempt:
 FUNC_5(VAR_6);
 if (FUNC_13(!VAR_10->on_rq || VAR_9 == VAR_6->idle))
  return;

 if (FUNC_6(VAR_0) && VAR_13 && FUNC_2(VAR_10))
  FUNC_7(VAR_10);
}
