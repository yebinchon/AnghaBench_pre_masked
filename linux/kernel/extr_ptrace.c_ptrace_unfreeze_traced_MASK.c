
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {scalar_t__ state; scalar_t__ parent; TYPE_1__* sighand; int ptrace; } ;
struct TYPE_2__ {int siglock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct task_struct*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct task_struct*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct task_struct *VAR_3)
{
 if (VAR_3->state != VAR_1)
  return;

 FUNC_0(!VAR_3->ptrace || VAR_3->parent != VAR_2);





 FUNC_2(&VAR_3->sighand->siglock);
 if (VAR_3->state == VAR_1) {
  if (FUNC_1(VAR_3))
   FUNC_4(VAR_3, VAR_1);
  else
   VAR_3->state = VAR_0;
 }
 FUNC_3(&VAR_3->sighand->siglock);
}
