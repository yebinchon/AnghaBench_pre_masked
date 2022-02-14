
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct pid {int dummy; } ;
typedef int pid_t ;


 int VAR_0 ;
 struct task_struct* VAR_1 ;
 struct task_struct* FUNC_0 (int ) ;
 int FUNC_1 (struct pid*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct task_struct*) ;
 struct pid* FUNC_5 (struct task_struct*) ;

__attribute__((used)) static int FUNC_6(pid_t VAR_2)
{
 struct task_struct *VAR_3;
 struct pid *VAR_4;
 int VAR_5;

 FUNC_2();
 if (!VAR_2)
  VAR_4 = FUNC_5(VAR_1);
 else {
  VAR_5 = -VAR_0;
  VAR_3 = FUNC_0(VAR_2);
  if (!VAR_3)
   goto out;
  VAR_4 = FUNC_5(VAR_3);
  if (!VAR_4)
   goto out;

  VAR_5 = FUNC_4(VAR_3);
  if (VAR_5)
   goto out;
 }
 VAR_5 = FUNC_1(VAR_4);
out:
 FUNC_3();
 return VAR_5;
}
