
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_entity {int vruntime; } ;
struct task_struct {struct sched_entity se; } ;
struct rq_flags {int dummy; } ;
struct rq {int dummy; } ;
struct cfs_rq {scalar_t__ min_vruntime; struct sched_entity* curr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sched_entity*,struct sched_entity*) ;
 int FUNC_1 (struct cfs_rq*,struct sched_entity*,int) ;
 int FUNC_2 (struct rq*) ;
 int FUNC_3 (struct rq*,struct rq_flags*) ;
 int FUNC_4 (struct rq*,struct rq_flags*) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ VAR_1 ;
 struct cfs_rq* FUNC_6 (int ) ;
 struct rq* FUNC_7 () ;
 int FUNC_8 (struct cfs_rq*) ;
 int FUNC_9 (struct rq*) ;

__attribute__((used)) static void FUNC_10(struct task_struct *VAR_2)
{
 struct cfs_rq *VAR_3;
 struct sched_entity *VAR_4 = &VAR_2->se, *VAR_5;
 struct rq *VAR_6 = FUNC_7();
 struct rq_flags VAR_7;

 FUNC_3(VAR_6, &VAR_7);
 FUNC_9(VAR_6);

 VAR_3 = FUNC_6(VAR_0);
 VAR_5 = VAR_3->curr;
 if (VAR_5) {
  FUNC_8(VAR_3);
  VAR_4->vruntime = VAR_5->vruntime;
 }
 FUNC_1(VAR_3, VAR_4, 1);

 if (VAR_1 && VAR_5 && FUNC_0(VAR_5, VAR_4)) {




  FUNC_5(VAR_5->vruntime, VAR_4->vruntime);
  FUNC_2(VAR_6);
 }

 VAR_4->vruntime -= VAR_3->min_vruntime;
 FUNC_4(VAR_6, &VAR_7);
}
