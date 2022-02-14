
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int exec_start; } ;
struct task_struct {TYPE_1__ se; } ;
struct rq {TYPE_2__* curr; } ;
struct TYPE_4__ {int * sched_class; } ;


 int FUNC_0 (struct rq*) ;
 int FUNC_1 (struct rq*,struct task_struct*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct rq*) ;
 int FUNC_3 (struct rq*) ;
 int FUNC_4 (struct rq*) ;
 int FUNC_5 (struct rq*,struct task_struct*) ;
 int FUNC_6 (int ,struct rq*,int ) ;

__attribute__((used)) static void FUNC_7(struct rq *VAR_1, struct task_struct *VAR_2)
{
 VAR_2->se.exec_start = FUNC_4(VAR_1);


 FUNC_1(VAR_1, VAR_2);

 if (FUNC_2(VAR_1))
  FUNC_5(VAR_1, VAR_2);

 if (VAR_1->curr->sched_class != &VAR_0)
  FUNC_6(FUNC_3(VAR_1), VAR_1, 0);

 FUNC_0(VAR_1);
}
