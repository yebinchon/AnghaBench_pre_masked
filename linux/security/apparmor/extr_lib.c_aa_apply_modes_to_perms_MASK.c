
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_profile {int dummy; } ;
struct aa_perms {void* complain; void* kill; void* quiet; void* audit; } ;


 void* VAR_0 ;

 int FUNC_0 (struct aa_profile*) ;



 scalar_t__ FUNC_1 (struct aa_profile*) ;
 scalar_t__ FUNC_2 (struct aa_profile*) ;

void FUNC_3(struct aa_profile *VAR_1, struct aa_perms *VAR_2)
{
 switch (FUNC_0(VAR_1)) {
 case 131:
  VAR_2->audit = VAR_0;

 case 130:
  VAR_2->quiet = 0;
  break;
 case 129:
  VAR_2->audit = 0;

 case 128:
  VAR_2->quiet = VAR_0;
  break;
 }

 if (FUNC_2(VAR_1))
  VAR_2->kill = VAR_0;
 else if (FUNC_1(VAR_1))
  VAR_2->complain = VAR_0;





}
