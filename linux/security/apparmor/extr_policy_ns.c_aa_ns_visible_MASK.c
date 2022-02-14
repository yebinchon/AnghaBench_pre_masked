
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_ns {struct aa_ns* parent; } ;



bool FUNC_0(struct aa_ns *VAR_0, struct aa_ns *VAR_1, bool VAR_2)
{
 if (VAR_0 == VAR_1)
  return 1;

 if (!VAR_2)
  return 0;

 for ( ; VAR_1; VAR_1 = VAR_1->parent) {
  if (VAR_1->parent == VAR_0)
   return 1;
 }

 return 0;
}
