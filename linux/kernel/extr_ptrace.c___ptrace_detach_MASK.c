
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {scalar_t__ exit_state; int sighand; int exit_signal; int real_parent; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct task_struct*,struct task_struct*) ;
 int FUNC_2 (struct task_struct*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,struct task_struct*) ;
 scalar_t__ FUNC_5 (struct task_struct*) ;
 int FUNC_6 (struct task_struct*) ;

__attribute__((used)) static bool FUNC_7(struct task_struct *VAR_2, struct task_struct *VAR_3)
{
 bool VAR_4;

 FUNC_0(VAR_3);

 if (VAR_3->exit_state != VAR_1)
  return 0;

 VAR_4 = !FUNC_6(VAR_3);

 if (!VAR_4 && FUNC_5(VAR_3)) {
  if (!FUNC_4(VAR_3->real_parent, VAR_2))
   VAR_4 = FUNC_2(VAR_3, VAR_3->exit_signal);
  else if (FUNC_3(VAR_2->sighand)) {
   FUNC_1(VAR_3, VAR_2);
   VAR_4 = 1;
  }
 }

 if (VAR_4)
  VAR_3->exit_state = VAR_0;
 return VAR_4;
}
