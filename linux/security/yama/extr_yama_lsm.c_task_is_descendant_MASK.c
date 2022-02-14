
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {scalar_t__ pid; int real_parent; int group_leader; } ;


 struct task_struct* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct task_struct*) ;

__attribute__((used)) static int FUNC_4(struct task_struct *VAR_0,
         struct task_struct *VAR_1)
{
 int VAR_2 = 0;
 struct task_struct *VAR_3 = VAR_1;

 if (!VAR_0 || !VAR_1)
  return 0;

 FUNC_1();
 if (!FUNC_3(VAR_0))
  VAR_0 = FUNC_0(VAR_0->group_leader);
 while (VAR_3->pid > 0) {
  if (!FUNC_3(VAR_3))
   VAR_3 = FUNC_0(VAR_3->group_leader);
  if (VAR_3 == VAR_0) {
   VAR_2 = 1;
   break;
  }
  VAR_3 = FUNC_0(VAR_3->real_parent);
 }
 FUNC_2();

 return VAR_2;
}
