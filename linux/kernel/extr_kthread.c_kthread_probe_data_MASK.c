
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct kthread {int data; } ;
typedef int data ;


 int FUNC_0 (void**,int *,int) ;
 struct kthread* FUNC_1 (struct task_struct*) ;

void *FUNC_2(struct task_struct *VAR_0)
{
 struct kthread *VAR_1 = FUNC_1(VAR_0);
 void *VAR_2 = ((void*)0);

 FUNC_0(&VAR_2, &VAR_1->data, sizeof(VAR_2));
 return VAR_2;
}
