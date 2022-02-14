
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char const*) ;

bool
FUNC_2(const char *VAR_0, char ***VAR_1, int *VAR_2)
{
 int VAR_3;
 char **VAR_4;
 char *VAR_5;
 int VAR_6;
 *VAR_1 = ((void*)0);
 *VAR_2 = 0;
 VAR_3 = FUNC_1(VAR_0);
 if (VAR_3 < 2 || VAR_0[0] != '{' || VAR_0[VAR_3 - 1] != '}')
  return 0;
 VAR_4 = (char **) FUNC_0(VAR_3 * (sizeof(char *) + sizeof(char)));
 if (VAR_4 == ((void*)0))
  return 0;
 *VAR_1 = VAR_4;
 VAR_5 = (char *) (VAR_4 + VAR_3);

 VAR_0++;
 VAR_6 = 0;
 while (*VAR_0 != '}')
 {
  if (*VAR_0 == '\0')
   return 0;
  VAR_4[VAR_6] = VAR_5;
  while (*VAR_0 != '}' && *VAR_0 != ',')
  {
   if (*VAR_0 == '\0')
    return 0;
   if (*VAR_0 != '"')
    *VAR_5++ = *VAR_0++;
   else
   {

    VAR_0++;
    while (*VAR_0 != '"')
    {
     if (*VAR_0 == '\0')
      return 0;
     if (*VAR_0 == '\\')
     {
      VAR_0++;
      if (*VAR_0 == '\0')
       return 0;
     }
     *VAR_5++ = *VAR_0++;
    }
    VAR_0++;
   }
  }
  *VAR_5++ = '\0';
  if (*VAR_0 == ',')
   VAR_0++;
  VAR_6++;
 }
 if (VAR_0[1] != '\0')
  return 0;
 *VAR_2 = VAR_6;
 return 1;
}
