
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct common_audit_data {int dummy; } ;
struct aa_profile {int dummy; } ;
struct aa_label {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct aa_profile*,int ) ;
 int FUNC_1 (struct aa_profile*,struct aa_label*,int ,struct common_audit_data*) ;
 scalar_t__ FUNC_2 (struct aa_profile*) ;
 scalar_t__ FUNC_3 (struct aa_label*) ;

__attribute__((used)) static int FUNC_4(struct aa_profile *VAR_1,
          struct aa_label *VAR_2, u32 VAR_3,
          struct common_audit_data *VAR_4)
{
 if (FUNC_2(VAR_1) || FUNC_3(VAR_2) ||
     !FUNC_0(VAR_1, VAR_0))
  return 0;

 return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
}
