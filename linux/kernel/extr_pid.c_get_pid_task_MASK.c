
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct pid {int dummy; } ;
typedef enum pid_type { ____Placeholder_pid_type } pid_type ;


 int FUNC_0 (struct task_struct*) ;
 struct task_struct* FUNC_1 (struct pid*,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

struct task_struct *FUNC_4(struct pid *VAR_0, enum pid_type VAR_1)
{
 struct task_struct *VAR_2;
 FUNC_2();
 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2)
  FUNC_0(VAR_2);
 FUNC_3();
 return VAR_2;
}
