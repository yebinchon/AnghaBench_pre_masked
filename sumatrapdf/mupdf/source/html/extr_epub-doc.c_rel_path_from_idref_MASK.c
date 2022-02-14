
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_xml ;


 char const* FUNC_0 (int *,char*) ;
 int * FUNC_1 (int *,char*) ;
 int * FUNC_2 (int *,char*) ;
 int FUNC_3 (char const*,char const*) ;

__attribute__((used)) static const char *
FUNC_4(fz_xml *VAR_0, const char *VAR_1)
{
 fz_xml *VAR_2;
 if (!VAR_1)
  return ((void*)0);
 VAR_2 = FUNC_1(VAR_0, "item");
 while (VAR_2)
 {
  const char *VAR_3 = FUNC_0(VAR_2, "id");
  if (VAR_3 && !FUNC_3(VAR_3, VAR_1))
   return FUNC_0(VAR_2, "href");
  VAR_2 = FUNC_2(VAR_2, "item");
 }
 return ((void*)0);
}
