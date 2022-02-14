
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path_cond {int dummy; } ;
struct aa_perms {int dummy; } ;
struct aa_dfa {int dummy; } ;


 struct aa_perms FUNC_0 (struct aa_dfa*,unsigned int,struct path_cond*) ;
 unsigned int FUNC_1 (struct aa_dfa*,unsigned int,char const*) ;

unsigned int FUNC_2(struct aa_dfa *VAR_0, unsigned int VAR_1,
     const char *VAR_2, struct path_cond *VAR_3,
     struct aa_perms *VAR_4)
{
 unsigned int VAR_5;
 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2);
 *VAR_4 = FUNC_0(VAR_0, VAR_5, VAR_3);

 return VAR_5;
}
