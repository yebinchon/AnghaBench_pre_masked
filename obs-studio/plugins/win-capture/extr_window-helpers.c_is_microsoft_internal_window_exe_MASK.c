
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char const*,int ) ;
 char** VAR_0 ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static bool FUNC_2(const char *VAR_1)
{
 if (!VAR_1)
  return 0;

 for (const char **VAR_2 = VAR_0; *VAR_2; VAR_2++) {
  if (FUNC_0(VAR_1, *VAR_2, FUNC_1(*VAR_2)) == 0)
   return 1;
 }

 return 0;
}
