
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_ns {int sub_ns; } ;


 struct aa_ns* FUNC_0 (int *,char const*,size_t) ;
 char* FUNC_1 (char const*,char*,size_t) ;

struct aa_ns *FUNC_2(struct aa_ns *VAR_0, const char *VAR_1, size_t VAR_2)
{
 struct aa_ns *VAR_3 = VAR_0;
 const char *VAR_4;

 for (VAR_4 = FUNC_1(VAR_1, "//", VAR_2); VAR_4;
      VAR_4 = FUNC_1(VAR_1, "//", VAR_2)) {
  VAR_3 = FUNC_0(&VAR_3->sub_ns, VAR_1, VAR_4 - VAR_1);
  if (!VAR_3)
   return ((void*)0);

  VAR_2 -= VAR_4 + 2 - VAR_1;
  VAR_1 = VAR_4 + 2;
 }

 if (VAR_2)
  return FUNC_0(&VAR_3->sub_ns, VAR_1, VAR_2);
 return ((void*)0);
}
