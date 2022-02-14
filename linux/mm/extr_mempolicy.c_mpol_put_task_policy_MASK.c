
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct mempolicy* mempolicy; } ;
struct mempolicy {int dummy; } ;


 int FUNC_0 (struct mempolicy*) ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct task_struct*) ;

void FUNC_3(struct task_struct *VAR_0)
{
 struct mempolicy *VAR_1;

 FUNC_1(VAR_0);
 VAR_1 = VAR_0->mempolicy;
 VAR_0->mempolicy = ((void*)0);
 FUNC_2(VAR_0);
 FUNC_0(VAR_1);
}
