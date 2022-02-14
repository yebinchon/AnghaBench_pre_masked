
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


 int FUNC_0 (struct rq*,struct task_struct*) ;
 int FUNC_1 (struct rq*) ;
 int FUNC_2 (struct rq*) ;
 int FUNC_3 (struct rq*) ;
 int VAR_0 ;
 int FUNC_4 (int ,struct rq*,int ) ;

__attribute__((used)) static inline void FUNC_5(struct rq *VAR_1, struct task_struct *VAR_2)
{
 VAR_2->se.exec_start = FUNC_2(VAR_1);


 FUNC_0(VAR_1, VAR_2);






 if (VAR_1->curr->sched_class != &VAR_0)
  FUNC_4(FUNC_1(VAR_1), VAR_1, 0);

 FUNC_3(VAR_1);
}
