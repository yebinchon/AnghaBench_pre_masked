
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strref {int dummy; } ;
typedef enum call_param_type { ____Placeholder_call_param_type } call_param_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct strref*,char*) ;

__attribute__((used)) static bool FUNC_1(struct strref *VAR_6, enum call_param_type *VAR_7,
       bool VAR_8)
{
 if (FUNC_0(VAR_6, "int") == 0)
  *VAR_7 = VAR_2;
 else if (FUNC_0(VAR_6, "float") == 0)
  *VAR_7 = VAR_1;
 else if (FUNC_0(VAR_6, "bool") == 0)
  *VAR_7 = VAR_0;
 else if (FUNC_0(VAR_6, "ptr") == 0)
  *VAR_7 = VAR_3;
 else if (FUNC_0(VAR_6, "string") == 0)
  *VAR_7 = VAR_4;
 else if (VAR_8 && FUNC_0(VAR_6, "void") == 0)
  *VAR_7 = VAR_5;
 else
  return 0;

 return 1;
}
