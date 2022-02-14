
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 scalar_t__ FUNC_0 (char const) ;

int FUNC_1(const char *VAR_1, const char *VAR_2)
{
 if (!VAR_1)
  VAR_1 = VAR_0;
 if (!VAR_2)
  VAR_2 = VAR_0;

 do {
  char VAR_3 = (char)FUNC_0(*VAR_1);
  char VAR_4 = (char)FUNC_0(*VAR_2);

  if (VAR_3 < VAR_4)
   return -1;
  else if (VAR_3 > VAR_4)
   return 1;
 } while (*VAR_1++ && *VAR_2++);

 return 0;
}
