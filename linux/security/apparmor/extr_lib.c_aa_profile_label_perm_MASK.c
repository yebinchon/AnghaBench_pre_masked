
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct common_audit_data {int dummy; } ;
struct aa_profile {int label; } ;
struct aa_perms {int deny; } ;
struct TYPE_2__ {int request; int * peer; int * label; } ;


 int FUNC_0 (struct aa_profile*,struct aa_perms*) ;
 int VAR_0 ;
 int FUNC_1 (struct aa_profile*,struct aa_perms*,int,struct common_audit_data*,int ) ;
 int FUNC_2 (struct aa_profile*,int *,int,int,struct aa_perms*) ;
 TYPE_1__* FUNC_3 (struct common_audit_data*) ;

int FUNC_4(struct aa_profile *VAR_1, struct aa_profile *VAR_2,
     u32 VAR_3, int VAR_4, u32 *VAR_5,
     struct common_audit_data *VAR_6)
{
 struct aa_perms VAR_7;

 FUNC_3(VAR_6)->label = &VAR_1->label;
 FUNC_3(VAR_6)->peer = &VAR_2->label;
 FUNC_3(VAR_6)->request = VAR_3;

 FUNC_2(VAR_1, &VAR_2->label, VAR_4, VAR_3, &VAR_7);
 FUNC_0(VAR_1, &VAR_7);
 *VAR_5 |= VAR_3 & VAR_7.deny;
 return FUNC_1(VAR_1, &VAR_7, VAR_3, VAR_6, VAR_0);
}
