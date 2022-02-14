
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct kernel_siginfo {int dummy; } ;
typedef enum pid_type { ____Placeholder_pid_type } pid_type ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct task_struct*,unsigned long*) ;
 int FUNC_1 (int,struct kernel_siginfo*,struct task_struct*,int) ;
 int FUNC_2 (struct task_struct*,unsigned long*) ;

int FUNC_3(int VAR_1, struct kernel_siginfo *VAR_2, struct task_struct *VAR_3,
   enum pid_type VAR_4)
{
 unsigned long VAR_5;
 int VAR_6 = -VAR_0;

 if (FUNC_0(VAR_3, &VAR_5)) {
  VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
  FUNC_2(VAR_3, &VAR_5);
 }

 return VAR_6;
}
