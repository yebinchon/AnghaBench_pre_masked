
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char const*) ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static bool FUNC_3(char *VAR_0,
         const char *VAR_1,
         const char *VAR_2)
{
 char *VAR_3;

 FUNC_1(VAR_0, VAR_2);
 VAR_3 = FUNC_2(VAR_0, '/');
 if (!VAR_3)
  return 0;

 VAR_3 += 1;

 if (!FUNC_0(VAR_3, "kallsyms")) {
  FUNC_1(VAR_3, VAR_1);
  return 1;
 }

 return 0;
}
