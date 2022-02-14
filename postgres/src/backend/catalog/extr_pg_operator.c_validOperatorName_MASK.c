
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 scalar_t__ FUNC_0 (char*,char const) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 size_t FUNC_2 (char const*) ;
 size_t FUNC_3 (char const*,char*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static bool
FUNC_5(const char *VAR_1)
{
 size_t VAR_2 = FUNC_2(VAR_1);


 if (VAR_2 == 0 || VAR_2 >= VAR_0)
  return 0;



 if (FUNC_3(VAR_1, "~!@#^&|`?+-*/%<>=") != VAR_2)
  return 0;


 if (FUNC_4(VAR_1, "/*") || FUNC_4(VAR_1, "--"))
  return 0;
 if (VAR_2 > 1 &&
  (VAR_1[VAR_2 - 1] == '+' ||
   VAR_1[VAR_2 - 1] == '-'))
 {
  int VAR_3;

  for (VAR_3 = VAR_2 - 2; VAR_3 >= 0; VAR_3--)
  {
   if (FUNC_0("~!@#^&|`?%", VAR_1[VAR_3]))
    break;
  }
  if (VAR_3 < 0)
   return 0;
 }


 if (FUNC_1(VAR_1, "!=") == 0)
  return 0;

 return 1;
}
