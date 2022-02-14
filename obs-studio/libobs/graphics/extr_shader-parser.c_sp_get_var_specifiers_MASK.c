
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shader_parser {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct shader_parser*,char*,int*) ;

__attribute__((used)) static bool FUNC_1(struct shader_parser *VAR_2, bool *VAR_3,
      bool *VAR_4)
{
 while (1) {
  int VAR_5 = FUNC_0(VAR_2, "const", VAR_3);
  if (VAR_5 == VAR_1)
   return 0;
  else if (VAR_5 == VAR_0)
   continue;

  VAR_5 = FUNC_0(VAR_2, "uniform", VAR_4);
  if (VAR_5 == VAR_1)
   return 0;
  else if (VAR_5 == VAR_0)
   continue;

  break;
 }

 return 1;
}
