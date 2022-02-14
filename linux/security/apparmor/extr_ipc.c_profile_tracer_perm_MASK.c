
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct common_audit_data {int dummy; } ;
struct aa_label {int dummy; } ;
struct aa_profile {struct aa_label label; } ;
struct TYPE_2__ {int error; scalar_t__ request; struct aa_label* peer; struct aa_label* label; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct aa_profile*,int ) ;
 int FUNC_1 (int ,struct aa_profile*,struct common_audit_data*,int ) ;
 int FUNC_2 (struct aa_label*,int ,int ) ;
 TYPE_1__* FUNC_3 (struct common_audit_data*) ;
 int VAR_4 ;
 int FUNC_4 (struct aa_profile*,struct aa_label*,int ,struct common_audit_data*) ;
 scalar_t__ FUNC_5 (struct aa_profile*) ;

__attribute__((used)) static int FUNC_6(struct aa_profile *VAR_5,
          struct aa_label *VAR_6, u32 VAR_7,
          struct common_audit_data *VAR_8)
{
 if (FUNC_5(VAR_5))
  return 0;

 if (FUNC_0(VAR_5, VAR_0))
  return FUNC_4(VAR_5, VAR_6, VAR_7, VAR_8);


 if (&VAR_5->label == VAR_6)
  return 0;

 FUNC_3(VAR_8)->label = &VAR_5->label;
 FUNC_3(VAR_8)->peer = VAR_6;
 FUNC_3(VAR_8)->request = 0;
 FUNC_3(VAR_8)->error = FUNC_2(&VAR_5->label, VAR_3,
        VAR_2);

 return FUNC_1(VAR_1, VAR_5, VAR_8, VAR_4);
}
