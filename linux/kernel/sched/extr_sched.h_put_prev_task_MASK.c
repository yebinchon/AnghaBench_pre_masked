
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {TYPE_1__* sched_class; } ;
struct rq {struct task_struct* curr; } ;
struct TYPE_2__ {int (* put_prev_task ) (struct rq*,struct task_struct*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct rq*,struct task_struct*) ;

__attribute__((used)) static inline void FUNC_2(struct rq *VAR_0, struct task_struct *VAR_1)
{
 FUNC_0(VAR_0->curr != VAR_1);
 VAR_1->sched_class->put_prev_task(VAR_0, VAR_1);
}
