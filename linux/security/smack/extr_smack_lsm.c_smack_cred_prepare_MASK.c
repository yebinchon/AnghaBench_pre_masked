
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_smack {int smk_relabel; int smk_rules; int smk_task; } ;
typedef struct cred const cred ;
typedef int gfp_t ;


 int FUNC_0 (struct task_smack*,int ,int ) ;
 struct task_smack* FUNC_1 (struct cred const*) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_4(struct cred *VAR_0, const struct cred *VAR_1,
         gfp_t VAR_2)
{
 struct task_smack *VAR_3 = FUNC_1(VAR_1);
 struct task_smack *VAR_4 = FUNC_1(VAR_0);
 int VAR_5;

 FUNC_0(VAR_4, VAR_3->smk_task, VAR_3->smk_task);

 VAR_5 = FUNC_3(&VAR_4->smk_rules, &VAR_3->smk_rules, VAR_2);
 if (VAR_5 != 0)
  return VAR_5;

 VAR_5 = FUNC_2(&VAR_4->smk_relabel, &VAR_3->smk_relabel,
    VAR_2);
 return VAR_5;
}
