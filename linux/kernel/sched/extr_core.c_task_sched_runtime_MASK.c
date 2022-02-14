
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct TYPE_3__ {unsigned long long sum_exec_runtime; } ;
struct task_struct {TYPE_1__ se; TYPE_2__* sched_class; int on_cpu; } ;
struct rq_flags {int dummy; } ;
struct rq {int dummy; } ;
struct TYPE_4__ {int (* update_curr ) (struct rq*) ;} ;


 int FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct rq*) ;
 scalar_t__ FUNC_2 (struct rq*,struct task_struct*) ;
 scalar_t__ FUNC_3 (struct task_struct*) ;
 struct rq* FUNC_4 (struct task_struct*,struct rq_flags*) ;
 int FUNC_5 (struct rq*,struct task_struct*,struct rq_flags*) ;
 int FUNC_6 (struct rq*) ;

unsigned long long FUNC_7(struct task_struct *VAR_0)
{
 struct rq_flags VAR_1;
 struct rq *VAR_2;
 u64 VAR_3;
 VAR_2 = FUNC_4(VAR_0, &VAR_1);





 if (FUNC_2(VAR_2, VAR_0) && FUNC_3(VAR_0)) {
  FUNC_0(VAR_0);
  FUNC_6(VAR_2);
  VAR_0->sched_class->update_curr(VAR_2);
 }
 VAR_3 = VAR_0->se.sum_exec_runtime;
 FUNC_5(VAR_2, VAR_0, &VAR_1);

 return VAR_3;
}
