
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_profile {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct aa_profile*) ;

__attribute__((used)) static bool FUNC_2(struct aa_profile **VAR_0, int VAR_1)
{
 int VAR_2;

 FUNC_0(!VAR_0);

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  if (!FUNC_1(VAR_0[VAR_2]))
   return 0;
 }

 return 1;
}
