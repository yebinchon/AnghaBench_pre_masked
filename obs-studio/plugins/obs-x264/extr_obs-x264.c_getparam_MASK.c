
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,int) ;
 char* FUNC_1 (char const*,char) ;

__attribute__((used)) static bool FUNC_2(const char *VAR_0, char **VAR_1, const char **VAR_2)
{
 const char *VAR_3;

 if (!VAR_0 || !*VAR_0 || (*VAR_0 == '='))
  return 0;

 VAR_3 = FUNC_1(VAR_0, '=');
 if (!VAR_3 || !*VAR_3 || !*(VAR_3 + 1))
  return 0;

 *VAR_1 = FUNC_0(VAR_0, VAR_3 - VAR_0);
 *VAR_2 = VAR_3 + 1;
 return 1;
}
