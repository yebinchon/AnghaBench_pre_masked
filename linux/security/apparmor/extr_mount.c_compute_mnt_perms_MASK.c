
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_perms {int xindex; int quiet; int audit; int allow; } ;
struct aa_dfa {int dummy; } ;


 int FUNC_0 (struct aa_dfa*,unsigned int) ;
 int FUNC_1 (struct aa_dfa*,unsigned int) ;
 int FUNC_2 (struct aa_dfa*,unsigned int) ;
 int FUNC_3 (struct aa_dfa*,unsigned int) ;

__attribute__((used)) static struct aa_perms FUNC_4(struct aa_dfa *VAR_0,
        unsigned int VAR_1)
{
 struct aa_perms VAR_2 = {
  .allow = FUNC_0(VAR_0, VAR_1),
  .audit = FUNC_1(VAR_0, VAR_1),
  .quiet = FUNC_2(VAR_0, VAR_1),
  .xindex = FUNC_3(VAR_0, VAR_1),
 };

 return VAR_2;
}
