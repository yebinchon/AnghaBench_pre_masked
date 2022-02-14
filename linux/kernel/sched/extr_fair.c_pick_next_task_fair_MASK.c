
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_entity {int depth; int group_node; scalar_t__ on_rq; } ;
struct task_struct {struct sched_entity se; int * sched_class; } ;
struct rq_flags {int dummy; } ;
struct cfs_rq {int nr_running; struct sched_entity* curr; } ;
struct rq {int cfs_tasks; struct cfs_rq cfs; } ;


 struct task_struct* VAR_0 ;
 int VAR_1 ;
 struct cfs_rq* FUNC_0 (struct sched_entity*) ;
 int FUNC_1 (struct cfs_rq*) ;
 int VAR_2 ;
 struct cfs_rq* FUNC_2 (struct sched_entity*) ;
 scalar_t__ FUNC_3 (struct rq*) ;
 int FUNC_4 (struct rq*,struct task_struct*) ;
 struct cfs_rq* FUNC_5 (struct sched_entity*,struct sched_entity*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct rq*,struct rq_flags*) ;
 struct sched_entity* FUNC_8 (struct sched_entity*) ;
 struct sched_entity* FUNC_9 (struct cfs_rq*,struct sched_entity*) ;
 int FUNC_10 (struct cfs_rq*,struct sched_entity*) ;
 int FUNC_11 (struct rq*,struct task_struct*) ;
 int FUNC_12 (struct rq*) ;
 int FUNC_13 (struct cfs_rq*,struct sched_entity*) ;
 struct task_struct* FUNC_14 (struct sched_entity*) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (struct cfs_rq*) ;
 int FUNC_17 (struct rq*) ;
 int FUNC_18 (struct task_struct*,struct rq*) ;

__attribute__((used)) static struct task_struct *
FUNC_19(struct rq *VAR_3, struct task_struct *VAR_4, struct rq_flags *VAR_5)
{
 struct cfs_rq *VAR_6 = &VAR_3->cfs;
 struct sched_entity *VAR_7;
 struct task_struct *VAR_8;
 int VAR_9;

again:
 if (!FUNC_12(VAR_3))
  goto idle;
 if (VAR_4)
  FUNC_11(VAR_3, VAR_4);

 do {
  VAR_7 = FUNC_9(VAR_6, ((void*)0));
  FUNC_13(VAR_6, VAR_7);
  VAR_6 = FUNC_2(VAR_7);
 } while (VAR_6);

 VAR_8 = FUNC_14(VAR_7);

done: VAR_1;
 if (FUNC_3(VAR_3))
  FUNC_4(VAR_3, VAR_8);

 FUNC_18(VAR_8, VAR_3);

 return VAR_8;

idle:
 if (!VAR_5)
  return ((void*)0);

 VAR_9 = FUNC_7(VAR_3, VAR_5);






 if (VAR_9 < 0)
  return VAR_0;

 if (VAR_9 > 0)
  goto again;





 FUNC_17(VAR_3);

 return ((void*)0);
}
