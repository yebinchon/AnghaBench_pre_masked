
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct rq {struct task_struct* curr; } ;


 int FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct rq*,struct task_struct*,int ) ;
 int FUNC_2 (struct rq*) ;
 scalar_t__ FUNC_3 (struct task_struct*) ;

__attribute__((used)) static void FUNC_4(struct rq *VAR_0, struct task_struct *VAR_1)
{
 FUNC_0(VAR_1);

 if (FUNC_3(VAR_1)) {





  if (VAR_0->curr == VAR_1)
   FUNC_2(VAR_0);
  else
   FUNC_1(VAR_0, VAR_1, 0);
 }
}
