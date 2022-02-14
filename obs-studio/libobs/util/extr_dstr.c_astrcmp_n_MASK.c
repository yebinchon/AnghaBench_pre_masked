
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;

int FUNC_0(const char *VAR_1, const char *VAR_2, size_t VAR_3)
{
 if (!VAR_3)
  return 0;
 if (!VAR_1)
  VAR_1 = VAR_0;
 if (!VAR_2)
  VAR_2 = VAR_0;

 do {
  char VAR_4 = *VAR_1;
  char VAR_5 = *VAR_2;

  if (VAR_4 < VAR_5)
   return -1;
  else if (VAR_4 > VAR_5)
   return 1;
 } while (*VAR_1++ && *VAR_2++ && --VAR_3);

 return 0;
}
