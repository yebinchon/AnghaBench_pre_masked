
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char** VAR_1 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static bool FUNC_3(const char *VAR_2)
{
 char VAR_3[VAR_0];

 if (!VAR_2)
  return 0;

 for (const char **VAR_4 = VAR_1; *VAR_4; VAR_4++) {
  FUNC_2(VAR_3, *VAR_4);
  FUNC_0(VAR_3, ".exe");

  if (FUNC_1(VAR_3, VAR_2) == 0)
   return 1;
 }

 return 0;
}
