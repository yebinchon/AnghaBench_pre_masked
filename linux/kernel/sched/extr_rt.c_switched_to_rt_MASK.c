
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int nr_cpus_allowed; scalar_t__ prio; } ;
struct TYPE_2__ {scalar_t__ overloaded; } ;
struct rq {struct task_struct* curr; TYPE_1__ rt; } ;


 int FUNC_0 (struct rq*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct rq*) ;
 int FUNC_3 (struct rq*) ;
 scalar_t__ FUNC_4 (struct task_struct*) ;

__attribute__((used)) static void FUNC_5(struct rq *VAR_0, struct task_struct *VAR_1)
{







 if (FUNC_4(VAR_1) && VAR_0->curr != VAR_1) {




  if (VAR_1->prio < VAR_0->curr->prio && FUNC_1(FUNC_0(VAR_0)))
   FUNC_2(VAR_0);
 }
}
