
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct common_audit_data {int dummy; } ;
struct TYPE_3__ {int * start; int dfa; } ;
struct aa_profile {TYPE_1__ policy; } ;
struct aa_perms {int dummy; } ;
struct aa_label {int dummy; } ;
struct TYPE_4__ {int signal; struct aa_label* peer; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct aa_profile*,size_t) ;
 int FUNC_1 (struct aa_profile*,struct aa_perms*) ;
 int FUNC_2 (struct aa_profile*,struct aa_perms*,int ,struct common_audit_data*,int ) ;
 unsigned int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct aa_profile*,struct aa_label*,unsigned int,int,int ,struct aa_perms*) ;
 TYPE_2__* FUNC_5 (struct common_audit_data*) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (struct aa_profile*) ;

__attribute__((used)) static int FUNC_7(struct aa_profile *VAR_2,
          struct aa_label *VAR_3, u32 VAR_4,
          struct common_audit_data *VAR_5)
{
 struct aa_perms VAR_6;
 unsigned int VAR_7;

 if (FUNC_6(VAR_2) ||
     !FUNC_0(VAR_2, VAR_0))
  return 0;

 FUNC_5(VAR_5)->peer = VAR_3;

 VAR_7 = FUNC_3(VAR_2->policy.dfa,
       VAR_2->policy.start[VAR_0],
       FUNC_5(VAR_5)->signal);
 FUNC_4(VAR_2, VAR_3, VAR_7, 0, VAR_4, &VAR_6);
 FUNC_1(VAR_2, &VAR_6);
 return FUNC_2(VAR_2, &VAR_6, VAR_4, VAR_5, VAR_1);
}
