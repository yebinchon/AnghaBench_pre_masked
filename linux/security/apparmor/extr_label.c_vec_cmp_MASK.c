
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_profile {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct aa_profile*,struct aa_profile*) ;

__attribute__((used)) static int FUNC_2(struct aa_profile **VAR_0, int VAR_1, struct aa_profile **VAR_2, int VAR_3)
{
 int VAR_4;

 FUNC_0(!VAR_0);
 FUNC_0(!*VAR_0);
 FUNC_0(!VAR_2);
 FUNC_0(!*VAR_2);
 FUNC_0(VAR_1 <= 0);
 FUNC_0(VAR_3 <= 0);

 for (VAR_4 = 0; VAR_4 < VAR_1 && VAR_4 < VAR_3; VAR_4++) {
  int VAR_5 = FUNC_1(VAR_0[VAR_4], VAR_2[VAR_4]);

  if (VAR_5 != 0)
   return VAR_5;
 }

 return VAR_1 - VAR_3;
}
