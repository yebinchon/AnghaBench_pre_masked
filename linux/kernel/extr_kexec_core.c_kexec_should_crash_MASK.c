
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int pid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (struct task_struct*) ;
 scalar_t__ VAR_1 ;

int FUNC_2(struct task_struct *VAR_2)
{





 if (VAR_0)
  return 0;




 if (FUNC_0() || !VAR_2->pid || FUNC_1(VAR_2) || VAR_1)
  return 1;
 return 0;
}
