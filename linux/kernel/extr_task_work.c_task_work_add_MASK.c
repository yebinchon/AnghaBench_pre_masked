
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int task_works; } ;
struct callback_head {struct callback_head* next; } ;


 int VAR_0 ;
 struct callback_head* FUNC_0 (int ) ;
 struct callback_head* FUNC_1 (int *,struct callback_head*,struct callback_head*) ;
 int FUNC_2 (struct task_struct*) ;
 scalar_t__ FUNC_3 (int) ;
 struct callback_head VAR_1 ;

int
FUNC_4(struct task_struct *VAR_2, struct callback_head *VAR_3, bool VAR_4)
{
 struct callback_head *VAR_5;

 do {
  VAR_5 = FUNC_0(VAR_2->task_works);
  if (FUNC_3(VAR_5 == &VAR_1))
   return -VAR_0;
  VAR_3->next = VAR_5;
 } while (FUNC_1(&VAR_2->task_works, VAR_5, VAR_3) != VAR_5);

 if (VAR_4)
  FUNC_2(VAR_2);
 return 0;
}
