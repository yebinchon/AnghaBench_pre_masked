
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;
 int VAR_1 ;
 double FUNC_1 (char const*,char**) ;
 scalar_t__ FUNC_2 (int) ;

bool
FUNC_3(const char *VAR_2, bool VAR_3, double *VAR_4)
{
 char *VAR_5;

 VAR_0 = 0;
 *VAR_4 = FUNC_1(VAR_2, &VAR_5);

 if (FUNC_2(VAR_0 != 0))
 {
  if (!VAR_3)
   FUNC_0(VAR_1,
     "value \"%s\" is out of range for type double\n", VAR_2);
  return 0;
 }

 if (FUNC_2(VAR_5 == VAR_2 || *VAR_5 != '\0'))
 {
  if (!VAR_3)
   FUNC_0(VAR_1,
     "invalid input syntax for type double: \"%s\"\n", VAR_2);
  return 0;
 }
 return 1;
}
