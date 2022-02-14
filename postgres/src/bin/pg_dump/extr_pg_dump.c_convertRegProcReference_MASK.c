
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Archive ;


 char* FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static char *
FUNC_2(Archive *VAR_0, const char *VAR_1)
{
 char *VAR_2;
 char *VAR_3;
 bool VAR_4;


 if (FUNC_1(VAR_1, "-") == 0)
  return ((void*)0);

 VAR_2 = FUNC_0(VAR_1);

 VAR_4 = 0;
 for (VAR_3 = VAR_2; *VAR_3; VAR_3++)
 {
  if (*VAR_3 == '(' && !VAR_4)
  {
   *VAR_3 = '\0';
   break;
  }
  if (*VAR_3 == '"')
   VAR_4 = !VAR_4;
 }
 return VAR_2;
}
