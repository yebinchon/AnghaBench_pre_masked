
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 scalar_t__ FUNC_1 (char*) ;

__attribute__((used)) static bool
FUNC_2(const char *VAR_1)
{
 char *VAR_2;

 if (!VAR_0 || VAR_1 == ((void*)0) || VAR_1[0] == '\0')
  return 0;

 VAR_2 = VAR_0;
 for (;;)
 {
  if (*VAR_2 == '\0')
   break;

  if (FUNC_0(VAR_1, VAR_2) == 0)
   return 1;
  VAR_2 += FUNC_1(VAR_2) + 1;
 }

 return 0;
}
