
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_smack {int smk_rules_lock; int smk_relabel; int smk_rules; struct smack_known* smk_forked; struct smack_known* smk_task; } ;
struct smack_known {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct task_smack *VAR_0, struct smack_known *VAR_1,
     struct smack_known *VAR_2)
{
 VAR_0->smk_task = VAR_1;
 VAR_0->smk_forked = VAR_2;
 FUNC_0(&VAR_0->smk_rules);
 FUNC_0(&VAR_0->smk_relabel);
 FUNC_1(&VAR_0->smk_rules_lock);
}
