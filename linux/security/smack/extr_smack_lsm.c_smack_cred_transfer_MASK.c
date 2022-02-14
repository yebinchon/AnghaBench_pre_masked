
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_smack {int smk_rules; int smk_rules_lock; int smk_task; int smk_forked; } ;
typedef struct cred const cred ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct task_smack* FUNC_2 (struct cred const*) ;

__attribute__((used)) static void FUNC_3(struct cred *VAR_0, const struct cred *VAR_1)
{
 struct task_smack *VAR_2 = FUNC_2(VAR_1);
 struct task_smack *VAR_3 = FUNC_2(VAR_0);

 VAR_3->smk_task = VAR_2->smk_task;
 VAR_3->smk_forked = VAR_2->smk_task;
 FUNC_1(&VAR_3->smk_rules_lock);
 FUNC_0(&VAR_3->smk_rules);


}
