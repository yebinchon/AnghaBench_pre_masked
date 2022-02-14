
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct common_audit_data {int dummy; } ;
struct aa_profile {int dummy; } ;
struct aa_perms {int dummy; } ;
struct aa_label {int dummy; } ;
struct TYPE_2__ {struct aa_label* peer; } ;


 int VAR_0 ;
 int FUNC_0 (struct aa_profile*,struct aa_perms*) ;
 int FUNC_1 (struct aa_profile*,struct aa_perms*,int ,struct common_audit_data*,int ) ;
 int FUNC_2 (struct aa_profile*,struct aa_label*,int ,int ,struct aa_perms*) ;
 TYPE_1__* FUNC_3 (struct common_audit_data*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct aa_profile *VAR_2,
        struct aa_label *VAR_3, u32 VAR_4,
        struct common_audit_data *VAR_5)
{
 struct aa_perms VAR_6 = { };

 FUNC_3(VAR_5)->peer = VAR_3;
 FUNC_2(VAR_2, VAR_3, VAR_0, VAR_4,
          &VAR_6);
 FUNC_0(VAR_2, &VAR_6);
 return FUNC_1(VAR_2, &VAR_6, VAR_4, VAR_5, VAR_1);
}
