
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char const*) ;

char *FUNC_1(char *VAR_0, const char *VAR_1)
{
 char *VAR_2;

 do {
  VAR_2 = FUNC_0(VAR_0, VAR_1);
  if (VAR_2 == VAR_0 ||
      (VAR_2 == VAR_0 + 1 && *(VAR_2 - 1) != '\\'))
   break;
  VAR_0 = VAR_2 + 1;
 } while (VAR_2 && *(VAR_2 - 1) == '\\' && *(VAR_2 - 2) != '\\');

 return VAR_2;
}
