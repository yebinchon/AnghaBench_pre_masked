
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {scalar_t__ prio; } ;
struct rq {TYPE_1__* curr; } ;
struct TYPE_2__ {scalar_t__ prio; } ;


 int FUNC_0 (struct rq*,struct task_struct*) ;
 int FUNC_1 (struct rq*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct rq *VAR_0, struct task_struct *VAR_1, int VAR_2)
{
 if (VAR_1->prio < VAR_0->curr->prio) {
  FUNC_1(VAR_0);
  return;
 }
}
