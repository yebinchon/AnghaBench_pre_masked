
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int exit_code; } ;
struct kthread {int exited; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (int ,int *) ;
 struct kthread* FUNC_4 (struct task_struct*) ;
 int FUNC_5 (struct task_struct*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct task_struct*) ;

int FUNC_9(struct task_struct *VAR_1)
{
 struct kthread *VAR_2;
 int VAR_3;

 FUNC_5(VAR_1);

 FUNC_0(VAR_1);
 VAR_2 = FUNC_4(VAR_1);
 FUNC_3(VAR_0, &VAR_2->flags);
 FUNC_1(VAR_1);
 FUNC_8(VAR_1);
 FUNC_7(&VAR_2->exited);
 VAR_3 = VAR_1->exit_code;
 FUNC_2(VAR_1);

 FUNC_6(VAR_3);
 return VAR_3;
}
