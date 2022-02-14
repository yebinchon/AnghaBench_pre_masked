
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int ptracer_cred; struct task_struct* parent; int ptraced; int ptrace_entry; } ;
struct cred {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct cred const*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct task_struct *VAR_0, struct task_struct *VAR_1,
     const struct cred *VAR_2)
{
 FUNC_0(!FUNC_3(&VAR_0->ptrace_entry));
 FUNC_2(&VAR_0->ptrace_entry, &VAR_1->ptraced);
 VAR_0->parent = VAR_1;
 VAR_0->ptracer_cred = FUNC_1(VAR_2);
}
