
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct cred {int cap_permitted; int cap_inheritable; int cap_effective; } ;
typedef int kernel_cap_t ;


 struct cred* FUNC_0 (struct task_struct*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

int FUNC_3(struct task_struct *VAR_0, kernel_cap_t *VAR_1,
        kernel_cap_t *VAR_2, kernel_cap_t *VAR_3)
{
 const struct cred *VAR_4;


 FUNC_1();
 VAR_4 = FUNC_0(VAR_0);
 *VAR_1 = VAR_4->cap_effective;
 *VAR_2 = VAR_4->cap_inheritable;
 *VAR_3 = VAR_4->cap_permitted;
 FUNC_2();
 return 0;
}
