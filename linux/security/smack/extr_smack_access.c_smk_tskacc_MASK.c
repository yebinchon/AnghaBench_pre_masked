
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct task_smack {int smk_rules; } ;
struct smk_audit_info {int dummy; } ;
struct smack_known {int smk_known; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int,struct smk_audit_info*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct smack_known*,struct smack_known*,int,int *) ;
 int FUNC_3 (int ,int ,int *) ;
 struct smack_known* FUNC_4 (struct task_smack*) ;

int FUNC_5(struct task_smack *VAR_2, struct smack_known *VAR_3,
        u32 VAR_4, struct smk_audit_info *VAR_5)
{
 struct smack_known *VAR_6 = FUNC_4(VAR_2);
 int VAR_7;
 int VAR_8;




 VAR_8 = FUNC_2(VAR_6, VAR_3, VAR_4, ((void*)0));
 if (VAR_8 >= 0) {




  VAR_7 = FUNC_3(VAR_6->smk_known,
           VAR_3->smk_known,
           &VAR_2->smk_rules);
  if (VAR_7 < 0)
   goto out_audit;
  if ((VAR_4 & VAR_7) == VAR_4)
   goto out_audit;
  VAR_8 = -VAR_1;
 }




 if (VAR_8 != 0 && FUNC_1(VAR_0))
  VAR_8 = 0;

out_audit:





 return VAR_8;
}
