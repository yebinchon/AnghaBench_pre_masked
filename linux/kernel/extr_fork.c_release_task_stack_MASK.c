
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {scalar_t__ state; int * stack_vm_area; int * stack; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct task_struct*,int) ;
 int FUNC_2 (struct task_struct*) ;

__attribute__((used)) static void FUNC_3(struct task_struct *VAR_1)
{
 if (FUNC_0(VAR_1->state != VAR_0))
  return;

 FUNC_1(VAR_1, -1);
 FUNC_2(VAR_1);
 VAR_1->stack = ((void*)0);



}
