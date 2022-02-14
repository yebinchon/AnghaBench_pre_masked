
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct task_security_struct {int sid; } ;
struct cred {int dummy; } ;


 struct task_security_struct* FUNC_0 (struct cred const*) ;

__attribute__((used)) static inline u32 FUNC_1(const struct cred *VAR_0)
{
 const struct task_security_struct *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 return VAR_1->sid;
}
