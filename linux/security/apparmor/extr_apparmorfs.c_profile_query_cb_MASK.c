
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct path_cond {int dummy; } ;
struct TYPE_4__ {int * start; struct aa_dfa* dfa; } ;
struct TYPE_3__ {int start; struct aa_dfa* dfa; } ;
struct aa_profile {TYPE_2__ policy; TYPE_1__ file; } ;
struct aa_perms {int dummy; } ;
struct aa_dfa {int dummy; } ;


 char const VAR_0 ;
 int FUNC_0 (struct aa_profile*,char const) ;
 int FUNC_1 (struct aa_profile*,struct aa_perms*) ;
 struct aa_perms FUNC_2 (struct aa_dfa*,unsigned int,struct path_cond*) ;
 int FUNC_3 (struct aa_dfa*,unsigned int,struct aa_perms*) ;
 unsigned int FUNC_4 (struct aa_dfa*,int ,char const*,size_t) ;
 int FUNC_5 (struct aa_perms*,struct aa_perms*) ;
 scalar_t__ FUNC_6 (struct aa_profile*) ;

__attribute__((used)) static void FUNC_7(struct aa_profile *VAR_1, struct aa_perms *VAR_2,
        const char *VAR_3, size_t VAR_4)
{
 struct aa_perms VAR_5 = { };
 struct aa_dfa *VAR_6;
 unsigned int VAR_7 = 0;

 if (FUNC_6(VAR_1))
  return;
 if (VAR_1->file.dfa && *VAR_3 == VAR_0) {
  VAR_6 = VAR_1->file.dfa;
  VAR_7 = FUNC_4(VAR_6, VAR_1->file.start,
      VAR_3 + 1, VAR_4 - 1);
  if (VAR_7) {
   struct path_cond VAR_8 = { };

   VAR_5 = FUNC_2(VAR_6, VAR_7, &VAR_8);
  }
 } else if (VAR_1->policy.dfa) {
  if (!FUNC_0(VAR_1, *VAR_3))
   return;
  VAR_6 = VAR_1->policy.dfa;
  VAR_7 = FUNC_4(VAR_6, VAR_1->policy.start[0],
      VAR_3, VAR_4);
  if (VAR_7)
   FUNC_3(VAR_6, VAR_7, &VAR_5);
 }
 FUNC_1(VAR_1, &VAR_5);
 FUNC_5(VAR_2, &VAR_5);
}
