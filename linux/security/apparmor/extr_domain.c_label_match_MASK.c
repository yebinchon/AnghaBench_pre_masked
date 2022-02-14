
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct aa_profile {int dummy; } ;
struct aa_perms {int dummy; } ;
struct aa_label {int dummy; } ;


 struct aa_perms VAR_0 ;
 int FUNC_0 (struct aa_profile*,struct aa_label*,int,unsigned int,int,int ,struct aa_perms*) ;
 int FUNC_1 (struct aa_profile*,struct aa_label*,int,unsigned int,int,int ,struct aa_perms*) ;
 struct aa_perms VAR_1 ;

__attribute__((used)) static int FUNC_2(struct aa_profile *VAR_2, struct aa_label *VAR_3,
         bool VAR_4, unsigned int VAR_5, bool VAR_6, u32 VAR_7,
         struct aa_perms *VAR_8)
{
 int VAR_9;

 *VAR_8 = VAR_1;
 VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
         VAR_7, VAR_8);
 if (!VAR_9)
  return VAR_9;

 *VAR_8 = VAR_0;
 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
          VAR_7, VAR_8);
}
