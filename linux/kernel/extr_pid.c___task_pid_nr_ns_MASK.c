
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct pid_namespace {int dummy; } ;
typedef int pid_t ;
typedef enum pid_type { ____Placeholder_pid_type } pid_type ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (int ,struct pid_namespace*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 struct pid_namespace* FUNC_6 (int ) ;
 int * FUNC_7 (struct task_struct*,int) ;

pid_t FUNC_8(struct task_struct *VAR_1, enum pid_type VAR_2,
   struct pid_namespace *VAR_3)
{
 pid_t VAR_4 = 0;

 FUNC_4();
 if (!VAR_3)
  VAR_3 = FUNC_6(VAR_0);
 if (FUNC_0(FUNC_1(VAR_1)))
  VAR_4 = FUNC_2(FUNC_3(*FUNC_7(VAR_1, VAR_2)), VAR_3);
 FUNC_5();

 return VAR_4;
}
