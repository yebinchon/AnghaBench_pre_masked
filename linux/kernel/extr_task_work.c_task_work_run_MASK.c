
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int flags; int pi_lock; int task_works; } ;
struct callback_head {int (* func ) (struct callback_head*) ;struct callback_head* next; } ;


 int VAR_0 ;
 struct callback_head* FUNC_0 (int ) ;
 struct callback_head* FUNC_1 (int *,struct callback_head*,struct callback_head*) ;
 int FUNC_2 () ;
 struct task_struct* VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct callback_head*) ;
 struct callback_head VAR_2 ;

void FUNC_6(void)
{
 struct task_struct *VAR_3 = VAR_1;
 struct callback_head *VAR_4, *VAR_5, *VAR_6;

 for (;;) {




  FUNC_3(&VAR_3->pi_lock);
  do {
   VAR_4 = FUNC_0(VAR_3->task_works);
   VAR_5 = !VAR_4 && (VAR_3->flags & VAR_0) ?
    &VAR_2 : ((void*)0);
  } while (FUNC_1(&VAR_3->task_works, VAR_4, VAR_5) != VAR_4);
  FUNC_4(&VAR_3->pi_lock);

  if (!VAR_4)
   break;

  do {
   VAR_6 = VAR_4->next;
   VAR_4->func(VAR_4);
   VAR_4 = VAR_6;
   FUNC_2();
  } while (VAR_4);
 }
}
