
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct common_audit_data {int dummy; } ;
struct TYPE_2__ {int dfa; } ;
struct aa_profile {TYPE_1__ policy; } ;
struct aa_perms {int dummy; } ;
typedef int __be16 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_1 (struct aa_profile*,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct aa_profile*,struct aa_perms*) ;
 int FUNC_3 (struct aa_profile*,struct aa_perms*,int ,struct common_audit_data*,int ) ;
 int FUNC_4 (int ,unsigned int,struct aa_perms*) ;
 unsigned int FUNC_5 (int ,unsigned int,char*,int) ;
 int VAR_3 ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (struct aa_profile*) ;

int FUNC_8(struct aa_profile *VAR_4, struct common_audit_data *VAR_5,
         u32 VAR_6, u16 VAR_7, int VAR_8)
{
 struct aa_perms VAR_9 = { };
 unsigned int VAR_10;
 __be16 VAR_11[2];

 FUNC_0(VAR_7 >= VAR_1);
 FUNC_0(VAR_8 < 0 || VAR_8 >= VAR_2);

 if (FUNC_7(VAR_4))
  return 0;
 VAR_10 = FUNC_1(VAR_4, VAR_0);
 if (!VAR_10)
  return 0;

 VAR_11[0] = FUNC_6(VAR_7);
 VAR_11[1] = FUNC_6((u16) VAR_8);
 VAR_10 = FUNC_5(VAR_4->policy.dfa, VAR_10, (char *) &VAR_11,
     4);
 FUNC_4(VAR_4->policy.dfa, VAR_10, &VAR_9);
 FUNC_2(VAR_4, &VAR_9);

 return FUNC_3(VAR_4, &VAR_9, VAR_6, VAR_5, VAR_3);
}
