
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct task_smack {int smk_task; } ;
struct cred {int dummy; } ;


 struct task_smack* FUNC_0 (struct cred*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct cred *VAR_0, u32 VAR_1)
{
 struct task_smack *VAR_2 = FUNC_0(VAR_0);

 VAR_2->smk_task = FUNC_1(VAR_1);
 return 0;
}
