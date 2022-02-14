
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smk_audit_info {int dummy; } ;
struct smack_known {scalar_t__ smk_known; int smk_rules; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 struct smack_known VAR_8 ;
 struct smack_known VAR_9 ;
 struct smack_known VAR_10 ;
 struct smack_known VAR_11 ;
 int FUNC_2 (scalar_t__,scalar_t__,int,int,struct smk_audit_info*) ;
 struct smack_known* VAR_12 ;
 int FUNC_3 (scalar_t__,scalar_t__,int *) ;

int FUNC_4(struct smack_known *VAR_13, struct smack_known *VAR_14,
        int VAR_15, struct smk_audit_info *VAR_16)
{
 int VAR_17 = VAR_4;
 int VAR_18 = 0;







 if (VAR_13 == &VAR_10) {
  VAR_18 = -VAR_0;
  goto out_audit;
 }





 if (VAR_14 == &VAR_11 || VAR_13 == &VAR_11)
  goto out_audit;



 if (VAR_14 == &VAR_10)
  goto out_audit;




 if (VAR_13->smk_known == VAR_14->smk_known)
  goto out_audit;




 if ((VAR_15 & VAR_1) == VAR_15 ||
     (VAR_15 & VAR_3) == VAR_15) {
  if (VAR_14 == &VAR_8)
   goto out_audit;
  if (VAR_13 == &VAR_9)
   goto out_audit;
 }







 FUNC_0();
 VAR_17 = FUNC_3(VAR_13->smk_known, VAR_14->smk_known,
          &VAR_13->smk_rules);
 FUNC_1();

 if (VAR_17 <= 0 || (VAR_15 & VAR_17) != VAR_15) {
  VAR_18 = -VAR_0;
  goto out_audit;
 }
out_audit:
 return VAR_18;
}
