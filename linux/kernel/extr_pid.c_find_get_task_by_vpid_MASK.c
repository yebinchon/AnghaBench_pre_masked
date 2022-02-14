
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
typedef int pid_t ;


 struct task_struct* FUNC_0 (int ) ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

struct task_struct *FUNC_4(pid_t VAR_0)
{
 struct task_struct *VAR_1;

 FUNC_2();
 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  FUNC_1(VAR_1);
 FUNC_3();

 return VAR_1;
}
