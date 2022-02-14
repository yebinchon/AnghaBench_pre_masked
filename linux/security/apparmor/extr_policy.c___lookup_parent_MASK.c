
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_policy {int profiles; } ;
struct aa_profile {struct aa_policy base; } ;
struct aa_ns {struct aa_policy base; } ;


 struct aa_profile* FUNC_0 (int *,char const*,int) ;
 char* FUNC_1 (char const*,char*) ;

__attribute__((used)) static struct aa_policy *FUNC_2(struct aa_ns *VAR_0,
      const char *VAR_1)
{
 struct aa_policy *VAR_2;
 struct aa_profile *VAR_3 = ((void*)0);
 char *VAR_4;

 VAR_2 = &VAR_0->base;

 for (VAR_4 = FUNC_1(VAR_1, "//"); VAR_4;) {
  VAR_3 = FUNC_0(&VAR_2->profiles, VAR_1,
         VAR_4 - VAR_1);
  if (!VAR_3)
   return ((void*)0);
  VAR_2 = &VAR_3->base;
  VAR_1 = VAR_4 + 2;
  VAR_4 = FUNC_1(VAR_1, "//");
 }
 if (!VAR_3)
  return &VAR_0->base;
 return &VAR_3->base;
}
