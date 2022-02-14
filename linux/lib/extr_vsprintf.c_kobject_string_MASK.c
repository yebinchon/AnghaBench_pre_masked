
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printf_spec {int dummy; } ;


 char* FUNC_0 (char*,char*,void*,struct printf_spec,char const*) ;
 char* FUNC_1 (char*,char*,char*,struct printf_spec) ;

__attribute__((used)) static char *FUNC_2(char *VAR_0, char *VAR_1, void *VAR_2,
       struct printf_spec VAR_3, const char *VAR_4)
{
 switch (VAR_4[1]) {
 case 'F':
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4 + 1);
 }

 return FUNC_1(VAR_0, VAR_1, "(%pO?)", VAR_3);
}
