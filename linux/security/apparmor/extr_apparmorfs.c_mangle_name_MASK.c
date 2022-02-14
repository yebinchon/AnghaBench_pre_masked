
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (char*,char const) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0, char *VAR_1)
{
 char *VAR_2 = VAR_1;

 while (*VAR_0 == '/' || *VAR_0 == '.')
  VAR_0++;

 if (VAR_1) {
  for (; *VAR_0; VAR_0++) {
   if (*VAR_0 == '/')
    *(VAR_2)++ = '.';
   else if (FUNC_1(*VAR_0))
    *(VAR_2)++ = '_';
   else if (FUNC_0(*VAR_0) || FUNC_2("._-", *VAR_0))
    *(VAR_2)++ = *VAR_0;
  }

  *VAR_2 = 0;
 } else {
  int VAR_3 = 0;
  for (; *VAR_0; VAR_0++) {
   if (FUNC_0(*VAR_0) || FUNC_1(*VAR_0) ||
       FUNC_2("/._-", *VAR_0))
    VAR_3++;
  }

  return VAR_3;
 }

 return VAR_2 - VAR_1;
}
