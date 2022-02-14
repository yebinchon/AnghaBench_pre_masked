
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ task_work_func_t ;
struct task_struct {int pi_lock; struct callback_head* task_works; } ;
struct callback_head {scalar_t__ func; struct callback_head* next; } ;


 struct callback_head* FUNC_0 (struct callback_head*) ;
 struct callback_head* FUNC_1 (struct callback_head**,struct callback_head*,struct callback_head*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

struct callback_head *
FUNC_5(struct task_struct *VAR_0, task_work_func_t VAR_1)
{
 struct callback_head **VAR_2 = &VAR_0->task_works;
 struct callback_head *VAR_3;
 unsigned long VAR_4;

 if (FUNC_2(!VAR_0->task_works))
  return ((void*)0);






 FUNC_3(&VAR_0->pi_lock, VAR_4);
 while ((VAR_3 = FUNC_0(*VAR_2))) {
  if (VAR_3->func != VAR_1)
   VAR_2 = &VAR_3->next;
  else if (FUNC_1(VAR_2, VAR_3, VAR_3->next) == VAR_3)
   break;
 }
 FUNC_4(&VAR_0->pi_lock, VAR_4);

 return VAR_3;
}
