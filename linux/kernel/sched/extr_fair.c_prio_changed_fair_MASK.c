
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int prio; } ;
struct rq {struct task_struct* curr; } ;


 int FUNC_0 (struct rq*,struct task_struct*,int ) ;
 int FUNC_1 (struct rq*) ;
 int FUNC_2 (struct task_struct*) ;

__attribute__((used)) static void
FUNC_3(struct rq *VAR_0, struct task_struct *VAR_1, int VAR_2)
{
 if (!FUNC_2(VAR_1))
  return;






 if (VAR_0->curr == VAR_1) {
  if (VAR_1->prio > VAR_2)
   FUNC_1(VAR_0);
 } else
  FUNC_0(VAR_0, VAR_1, 0);
}
