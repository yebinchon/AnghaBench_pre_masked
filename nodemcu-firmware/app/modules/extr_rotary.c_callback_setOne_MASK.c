
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(lua_State* VAR_3, int *VAR_4, int VAR_5)
{
  if (FUNC_3(VAR_3, VAR_5) == VAR_1 || FUNC_3(VAR_3, VAR_5) == VAR_2) {
    FUNC_2(VAR_3, VAR_5);
    FUNC_0(VAR_3, VAR_4);
    *VAR_4 = FUNC_1(VAR_3, VAR_0);
    return 0;
  }

  return -1;
}
