
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_context ;



__attribute__((used)) static const char *
FUNC_0(fz_context *VAR_0, const char **VAR_1, const char **VAR_2, const char *VAR_3)
{
 if (!VAR_3 || *VAR_3 == 0)
  return ((void*)0);

 if (*VAR_3 == ',')
  ++VAR_3;

 *VAR_1 = VAR_3;
 while (*VAR_3 != 0 && *VAR_3 != ',' && *VAR_3 != '=')
  ++VAR_3;

 if (*VAR_3 == '=')
 {
  *VAR_2 = ++VAR_3;
  while (*VAR_3 != 0 && *VAR_3 != ',')
   ++VAR_3;
 }
 else
 {
  *VAR_2 = "yes";
 }

 return VAR_3;
}
