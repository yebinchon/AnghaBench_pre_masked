
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int,char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5 (lua_State *VAR_1)
{
  int VAR_2 = FUNC_1 (VAR_1, 1);
  int VAR_3 = FUNC_2 (VAR_1) - 1;
  FUNC_0 (
    VAR_1, VAR_2 + VAR_3 <= VAR_0, 1, "RTC mem would overrun");
  int VAR_4 = 2;
  while (VAR_3-- > 0)
  {
    FUNC_4 (VAR_2++, FUNC_3 (VAR_1, VAR_4++));
  }
  return 0;
}
