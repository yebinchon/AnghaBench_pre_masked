
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct common_audit_data {int dummy; } ;
struct TYPE_3__ {int denied; int allow; } ;
struct aa_profile {TYPE_1__ caps; } ;
struct TYPE_4__ {char* info; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct aa_profile*) ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (struct common_audit_data*) ;
 int FUNC_2 (struct common_audit_data*,struct aa_profile*,int,int) ;
 scalar_t__ FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct aa_profile *VAR_2, int VAR_3,
      unsigned int VAR_4, struct common_audit_data *VAR_5)
{
 int VAR_6;

 if (FUNC_3(VAR_2->caps.allow, VAR_3) &&
     !FUNC_3(VAR_2->caps.denied, VAR_3))
  VAR_6 = 0;
 else
  VAR_6 = -VAR_1;

 if (VAR_4 & VAR_0) {
  if (!FUNC_0(VAR_2))
   return VAR_6;



  FUNC_1(VAR_5)->info = "optional: no audit";
 }

 return FUNC_2(VAR_5, VAR_2, VAR_3, VAR_6);
}
