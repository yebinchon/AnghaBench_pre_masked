
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strfilter {int root; } ;


 int FUNC_0 (struct strfilter*) ;
 int FUNC_1 (char const*,char const**) ;
 struct strfilter* FUNC_2 (int) ;

struct strfilter *FUNC_3(const char *VAR_0, const char **VAR_1)
{
 struct strfilter *VAR_2 = FUNC_2(sizeof(*VAR_2));
 const char *VAR_3 = ((void*)0);

 if (VAR_2)
  VAR_2->root = FUNC_1(VAR_0, &VAR_3);

 if (!VAR_2 || !VAR_2->root || *VAR_3 != '\0') {
  if (VAR_1)
   *VAR_1 = VAR_3;
  FUNC_0(VAR_2);
  VAR_2 = ((void*)0);
 }

 return VAR_2;
}
