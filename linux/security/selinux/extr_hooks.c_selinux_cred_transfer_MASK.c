
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_security_struct {int dummy; } ;
typedef struct cred const cred ;


 void* FUNC_0 (struct cred const*) ;

__attribute__((used)) static void FUNC_1(struct cred *VAR_0, const struct cred *VAR_1)
{
 const struct task_security_struct *VAR_2 = FUNC_0(VAR_1);
 struct task_security_struct *VAR_3 = FUNC_0(VAR_0);

 *VAR_3 = *VAR_2;
}
