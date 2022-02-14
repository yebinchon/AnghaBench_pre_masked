
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {TYPE_1__* sched_class; } ;
struct rq_flags {int dummy; } ;
struct rq {int idle_balance; struct task_struct* curr; } ;
struct TYPE_2__ {int (* task_tick ) (struct rq*,struct task_struct*,int ) ;} ;


 int FUNC_0 (struct rq*) ;
 struct rq* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (struct rq*) ;
 int FUNC_5 (struct rq*,struct rq_flags*) ;
 int FUNC_6 (struct rq*,struct rq_flags*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct rq*,struct task_struct*,int ) ;
 int FUNC_10 (struct rq*) ;
 int FUNC_11 (struct rq*) ;

void FUNC_12(void)
{
 int VAR_0 = FUNC_8();
 struct rq *VAR_1 = FUNC_1(VAR_0);
 struct task_struct *VAR_2 = VAR_1->curr;
 struct rq_flags VAR_3;

 FUNC_7();

 FUNC_5(VAR_1, &VAR_3);

 FUNC_11(VAR_1);
 VAR_2->sched_class->task_tick(VAR_1, VAR_2, 0);
 FUNC_0(VAR_1);
 FUNC_4(VAR_1);

 FUNC_6(VAR_1, &VAR_3);

 FUNC_3();





}
