
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_entity {int dummy; } ;
struct task_struct {scalar_t__ policy; struct sched_entity se; } ;
struct rq {int nr_running; struct task_struct* curr; } ;
struct cfs_rq {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cfs_rq*,struct sched_entity*) ;
 int FUNC_1 (struct rq*) ;
 int FUNC_2 (struct sched_entity*) ;
 struct cfs_rq* FUNC_3 (struct task_struct*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct cfs_rq*) ;
 int FUNC_6 (struct rq*) ;

__attribute__((used)) static void FUNC_7(struct rq *VAR_1)
{
 struct task_struct *VAR_2 = VAR_1->curr;
 struct cfs_rq *VAR_3 = FUNC_3(VAR_2);
 struct sched_entity *VAR_4 = &VAR_2->se;




 if (FUNC_4(VAR_1->nr_running == 1))
  return;

 FUNC_0(VAR_3, VAR_4);

 if (VAR_2->policy != VAR_0) {
  FUNC_6(VAR_1);



  FUNC_5(VAR_3);





  FUNC_1(VAR_1);
 }

 FUNC_2(VAR_4);
}
