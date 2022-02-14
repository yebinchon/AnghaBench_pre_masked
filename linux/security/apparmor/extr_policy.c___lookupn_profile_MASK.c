
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_policy {int profiles; } ;
struct aa_profile {struct aa_policy base; } ;


 struct aa_profile* FUNC_0 (int *,char const*,size_t) ;
 char* FUNC_1 (char const*,char*,size_t) ;

__attribute__((used)) static struct aa_profile *FUNC_2(struct aa_policy *VAR_0,
         const char *VAR_1, size_t VAR_2)
{
 struct aa_profile *VAR_3 = ((void*)0);
 const char *VAR_4;

 for (VAR_4 = FUNC_1(VAR_1, "//", VAR_2); VAR_4;
      VAR_4 = FUNC_1(VAR_1, "//", VAR_2)) {
  VAR_3 = FUNC_0(&VAR_0->profiles, VAR_1,
         VAR_4 - VAR_1);
  if (!VAR_3)
   return ((void*)0);

  VAR_0 = &VAR_3->base;
  VAR_2 -= VAR_4 + 2 - VAR_1;
  VAR_1 = VAR_4 + 2;
 }

 if (VAR_2)
  return FUNC_0(&VAR_0->profiles, VAR_1, VAR_2);
 return ((void*)0);
}
