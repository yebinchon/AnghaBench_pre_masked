
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timelib_long ;


 int FUNC_0 (char**) ;

__attribute__((used)) static timelib_long FUNC_1(char **VAR_0)
{
 while (**VAR_0 == ' ' || **VAR_0 == '\t' || **VAR_0 == '-' || **VAR_0 == '.' || **VAR_0 == '/') {
  ++*VAR_0;
 }
 return FUNC_0(VAR_0);
}
