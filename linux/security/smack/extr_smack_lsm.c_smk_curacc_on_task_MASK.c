
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct smk_audit_info {int dummy; } ;
struct smack_known {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct smk_audit_info*,char const*,int ) ;
 int FUNC_1 (struct smk_audit_info*,struct task_struct*) ;
 int FUNC_2 (struct task_struct*,int,int) ;
 int FUNC_3 (struct smack_known*,int,struct smk_audit_info*) ;
 struct smack_known* FUNC_4 (struct task_struct*) ;

__attribute__((used)) static int FUNC_5(struct task_struct *VAR_1, int VAR_2,
    const char *VAR_3)
{
 struct smk_audit_info VAR_4;
 struct smack_known *VAR_5 = FUNC_4(VAR_1);
 int VAR_6;

 FUNC_0(&VAR_4, VAR_3, VAR_0);
 FUNC_1(&VAR_4, VAR_1);
 VAR_6 = FUNC_3(VAR_5, VAR_2, &VAR_4);
 VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_6);
 return VAR_6;
}
