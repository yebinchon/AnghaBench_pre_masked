
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct aa_profile {int dummy; } ;
struct aa_perms {int dummy; } ;
struct aa_label {int dummy; } ;


 struct aa_perms VAR_0 ;
 int FUNC_0 (struct aa_profile*,struct aa_label*,unsigned int,int,int ,struct aa_perms*) ;
 int FUNC_1 (struct aa_profile*,struct aa_label*,unsigned int,int,int ,struct aa_perms*) ;

int FUNC_2(struct aa_profile *VAR_1, struct aa_label *VAR_2,
     unsigned int VAR_3, bool VAR_4, u32 VAR_5,
     struct aa_perms *VAR_6)
{
 int VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
      VAR_6);
 if (!VAR_7)
  return VAR_7;

 *VAR_6 = VAR_0;
 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
          VAR_6);
}
