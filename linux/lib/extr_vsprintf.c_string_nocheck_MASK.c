
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printf_spec {int precision; } ;


 char* FUNC_0 (char*,int,char*,struct printf_spec) ;

__attribute__((used)) static char *FUNC_1(char *VAR_0, char *VAR_1, const char *VAR_2,
       struct printf_spec VAR_3)
{
 int VAR_4 = 0;
 int VAR_5 = VAR_3.precision;

 while (VAR_5--) {
  char VAR_6 = *VAR_2++;
  if (!VAR_6)
   break;
  if (VAR_0 < VAR_1)
   *VAR_0 = VAR_6;
  ++VAR_0;
  ++VAR_4;
 }
 return FUNC_0(VAR_0, VAR_4, VAR_1, VAR_3);
}
