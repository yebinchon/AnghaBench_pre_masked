
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct kcov* kcov; } ;
struct kcov {int lock; int mode; struct task_struct* t; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct kcov*) ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct task_struct *VAR_1)
{
 struct kcov *VAR_2;

 VAR_2 = VAR_1->kcov;
 if (VAR_2 == ((void*)0))
  return;
 FUNC_3(&VAR_2->lock);
 if (FUNC_0(VAR_2->t != VAR_1)) {
  FUNC_4(&VAR_2->lock);
  return;
 }

 FUNC_2(VAR_1);
 VAR_2->t = ((void*)0);
 VAR_2->mode = VAR_0;
 FUNC_4(&VAR_2->lock);
 FUNC_1(VAR_2);
}
