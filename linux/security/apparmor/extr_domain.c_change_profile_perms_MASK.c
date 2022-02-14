
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct aa_profile {int dummy; } ;
struct aa_perms {int allow; scalar_t__ kill; scalar_t__ quiet; scalar_t__ audit; } ;
struct aa_label {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct aa_profile*,struct aa_label*,int,unsigned int,int,int ,struct aa_perms*) ;
 scalar_t__ FUNC_1 (struct aa_profile*) ;

__attribute__((used)) static int FUNC_2(struct aa_profile *VAR_2,
    struct aa_label *VAR_3, bool VAR_4,
    u32 VAR_5, unsigned int VAR_6,
    struct aa_perms *VAR_7)
{
 if (FUNC_1(VAR_2)) {
  VAR_7->allow = VAR_0 | VAR_1;
  VAR_7->audit = VAR_7->quiet = VAR_7->kill = 0;
  return 0;
 }


 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_6, 1, VAR_5, VAR_7);
}
