
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct pid {int dummy; } ;
struct kernel_siginfo {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,struct kernel_siginfo*,struct task_struct*,int ) ;
 scalar_t__ FUNC_1 (int) ;
 struct task_struct* FUNC_2 (struct pid*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

int FUNC_5(int VAR_3, struct kernel_siginfo *VAR_4, struct pid *VAR_5)
{
 int VAR_6 = -VAR_0;
 struct task_struct *VAR_7;

 for (;;) {
  FUNC_3();
  VAR_7 = FUNC_2(VAR_5, VAR_1);
  if (VAR_7)
   VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_7, VAR_2);
  FUNC_4();
  if (FUNC_1(!VAR_7 || VAR_6 != -VAR_0))
   return VAR_6;






 }
}
