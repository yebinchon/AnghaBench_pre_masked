
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*) ;
 char* FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static bool FUNC_4(const char *VAR_0, const char *VAR_1)
{
 int VAR_2;
 char *VAR_3;

 if (!VAR_1)
  return 0;
 if (!FUNC_2(VAR_1, "all"))
  return 1;
 if (!VAR_0)
  return !FUNC_0(VAR_1, "No_group");
 VAR_2 = FUNC_3(VAR_1);
 VAR_3 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_3)
  return 0;
 if ((VAR_3 == VAR_0 || VAR_3[-1] == ';' || VAR_3[-1] == ' ') &&
     (VAR_3[VAR_2] == 0 || VAR_3[VAR_2] == ';'))
  return 1;
 return 0;
}
