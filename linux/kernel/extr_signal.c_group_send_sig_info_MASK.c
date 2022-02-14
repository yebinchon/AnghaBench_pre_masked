
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct kernel_siginfo {int dummy; } ;
typedef enum pid_type { ____Placeholder_pid_type } pid_type ;


 int FUNC_0 (int,struct kernel_siginfo*,struct task_struct*) ;
 int FUNC_1 (int,struct kernel_siginfo*,struct task_struct*,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

int FUNC_4(int VAR_0, struct kernel_siginfo *VAR_1,
   struct task_struct *VAR_2, enum pid_type VAR_3)
{
 int VAR_4;

 FUNC_2();
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_3();

 if (!VAR_4 && VAR_0)
  VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);

 return VAR_4;
}
