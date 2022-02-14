
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct smack_known {int dummy; } ;
struct cred {int dummy; } ;


 struct cred* FUNC_0 (struct task_struct const*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct cred const*) ;
 struct smack_known* FUNC_4 (int ) ;

__attribute__((used)) static inline struct smack_known *FUNC_5(
      const struct task_struct *VAR_0)
{
 struct smack_known *VAR_1;
 const struct cred *VAR_2;

 FUNC_1();

 VAR_2 = FUNC_0(VAR_0);
 VAR_1 = FUNC_4(FUNC_3(VAR_2));

 FUNC_2();

 return VAR_1;
}
