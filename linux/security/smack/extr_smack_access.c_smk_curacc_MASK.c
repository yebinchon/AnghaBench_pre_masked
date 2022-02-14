
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct task_smack {int dummy; } ;
struct smk_audit_info {int dummy; } ;
struct smack_known {int dummy; } ;


 int FUNC_0 () ;
 struct task_smack* FUNC_1 (int ) ;
 int FUNC_2 (struct task_smack*,struct smack_known*,int ,struct smk_audit_info*) ;

int FUNC_3(struct smack_known *VAR_0,
        u32 VAR_1, struct smk_audit_info *VAR_2)
{
 struct task_smack *VAR_3 = FUNC_1(FUNC_0());

 return FUNC_2(VAR_3, VAR_0, VAR_1, VAR_2);
}
