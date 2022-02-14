
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tomoyo_path_info {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 struct tomoyo_path_info const* FUNC_2 (char*) ;

__attribute__((used)) static const struct tomoyo_path_info *FUNC_3(char *VAR_0)
{
 char *VAR_1 = VAR_0 + FUNC_0(VAR_0) - 1;

 if (VAR_1 == VAR_0 || *VAR_0++ != '"' || *VAR_1 != '"')
  return ((void*)0);
 *VAR_1 = '\0';
 if (*VAR_0 && !FUNC_1(VAR_0))
  return ((void*)0);
 return FUNC_2(VAR_0);
}
