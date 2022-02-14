
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (char*,...) ;
 char* FUNC_1 (unsigned int) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_3, int VAR_4)
{
 if (VAR_3 == VAR_0)
  FUNC_0("(bp%+d)", VAR_4);
 else if (VAR_3 == VAR_1)
  FUNC_0("(sp%+d)", VAR_4);
 else if (VAR_3 == VAR_2)
  FUNC_0("(und)");
 else
  FUNC_0("%s%+d", FUNC_1(VAR_3), VAR_4);
}
