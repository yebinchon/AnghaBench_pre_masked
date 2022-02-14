
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_security_struct {int dummy; } ;
typedef struct cred const cred ;
typedef int gfp_t ;


 void* FUNC_0 (struct cred const*) ;

__attribute__((used)) static int FUNC_1(struct cred *VAR_0, const struct cred *VAR_1,
    gfp_t VAR_2)
{
 const struct task_security_struct *VAR_3 = FUNC_0(VAR_1);
 struct task_security_struct *VAR_4 = FUNC_0(VAR_0);

 *VAR_4 = *VAR_3;
 return 0;
}
