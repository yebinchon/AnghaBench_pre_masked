
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {TYPE_1__* sched_class; int recent_used_cpu; int state; int pi_lock; } ;
struct rq_flags {int flags; } ;
struct rq {int dummy; } ;
struct TYPE_2__ {int (* task_woken ) (struct rq*,struct task_struct*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct task_struct*,int ) ;
 struct rq* FUNC_1 (struct task_struct*,struct rq_flags*) ;
 int FUNC_2 (struct rq*,struct task_struct*,int ) ;
 int FUNC_3 (struct rq*,struct task_struct*,int ) ;
 int FUNC_4 (struct task_struct*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct rq*,struct rq_flags*) ;
 int FUNC_7 (struct rq*,struct rq_flags*) ;
 int FUNC_8 (struct task_struct*,int ,int ,int ) ;
 int FUNC_9 (struct rq*,struct task_struct*) ;
 int FUNC_10 (struct task_struct*) ;
 int FUNC_11 (struct rq*,struct task_struct*,struct rq_flags*) ;
 int FUNC_12 (struct task_struct*) ;
 int FUNC_13 (struct rq*) ;

void FUNC_14(struct task_struct *VAR_4)
{
 struct rq_flags VAR_5;
 struct rq *VAR_6;

 FUNC_5(&VAR_4->pi_lock, VAR_5.flags);
 VAR_4->state = VAR_2;
 VAR_6 = FUNC_1(VAR_4, &VAR_5);
 FUNC_13(VAR_6);
 FUNC_4(VAR_4);

 FUNC_2(VAR_6, VAR_4, VAR_0);
 FUNC_12(VAR_4);
 FUNC_3(VAR_6, VAR_4, VAR_3);
 FUNC_11(VAR_6, VAR_4, &VAR_5);
}
