
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*) ;

__attribute__((used)) static char *
FUNC_1(const char *VAR_0, bool VAR_1)
{
 char *VAR_2;
 char *VAR_3;

 if (!VAR_0)
  return FUNC_0(VAR_1 ? "-" : "");

 VAR_2 = FUNC_0(VAR_0);

 for (VAR_3 = VAR_2; *VAR_3 != '\0'; VAR_3++)
 {
  if (*VAR_3 == '\n' || *VAR_3 == '\r')
   *VAR_3 = ' ';
 }

 return VAR_2;
}
