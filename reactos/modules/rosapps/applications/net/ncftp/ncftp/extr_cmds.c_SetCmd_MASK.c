
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CommandPtr ;
typedef int ArgvInfoPtr ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,char const*) ;
 int VAR_0 ;

void
FUNC_2(const int VAR_1, const char **const VAR_2, const CommandPtr VAR_3, const ArgvInfoPtr VAR_4)
{
 FUNC_0(VAR_0);
 if (VAR_1 < 2)
  FUNC_1(((void*)0), ((void*)0));
 else if (VAR_1 == 2)
  FUNC_1(VAR_2[1], ((void*)0));
 else
  FUNC_1(VAR_2[1], VAR_2[2]);
}
