
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct task_smack {int dummy; } ;
struct smk_audit_info {int dummy; } ;
struct smack_known {int smk_known; } ;
struct cred {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct cred* FUNC_0 (struct task_struct*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct task_smack* FUNC_3 (struct cred const*) ;
 int FUNC_4 (int ,int ,int ,int,struct smk_audit_info*) ;
 scalar_t__ FUNC_5 (int ,struct cred const*) ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (struct smk_audit_info*,char const*,int ) ;
 int FUNC_7 (struct smk_audit_info*,struct task_struct*) ;
 struct smack_known* FUNC_8 (struct task_smack*) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (struct task_smack*,struct smack_known*,int ,struct smk_audit_info*) ;

__attribute__((used)) static int FUNC_11(struct task_struct *VAR_8,
     struct smack_known *VAR_9,
     unsigned int VAR_10, const char *VAR_11)
{
 int VAR_12;
 struct smk_audit_info VAR_13, *VAR_14 = ((void*)0);
 struct task_smack *VAR_15;
 struct smack_known *VAR_16;
 const struct cred *VAR_17;

 if ((VAR_10 & VAR_4) == 0) {
  FUNC_6(&VAR_13, VAR_11, VAR_2);
  FUNC_7(&VAR_13, VAR_8);
  VAR_14 = &VAR_13;
 }

 FUNC_1();
 VAR_17 = FUNC_0(VAR_8);
 VAR_15 = FUNC_3(VAR_17);
 VAR_16 = FUNC_8(VAR_15);

 if ((VAR_10 & VAR_3) &&
     (VAR_7 == VAR_6 ||
      VAR_7 == VAR_5)) {
  if (VAR_16->smk_known == VAR_9->smk_known)
   VAR_12 = 0;
  else if (VAR_7 == VAR_5)
   VAR_12 = -VAR_1;
  else if (FUNC_5(VAR_0, VAR_17))
   VAR_12 = 0;
  else
   VAR_12 = -VAR_1;

  if (VAR_14)
   FUNC_4(VAR_16->smk_known,
      VAR_9->smk_known,
      0, VAR_12, VAR_14);

  FUNC_2();
  return VAR_12;
 }


 VAR_12 = FUNC_10(VAR_15, VAR_9, FUNC_9(VAR_10), VAR_14);

 FUNC_2();
 return VAR_12;
}
