
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_Unsigned ;
typedef int Table ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static lua_Unsigned FUNC_3 (Table *VAR_1, lua_Unsigned VAR_2) {
  lua_Unsigned VAR_3 = VAR_2;
  VAR_2++;

  while (!FUNC_2(FUNC_1(VAR_1, VAR_2))) {
    VAR_3 = VAR_2;
    if (VAR_2 > FUNC_0(VAR_0) / 2) {

      VAR_3 = 1;
      while (!FUNC_2(FUNC_1(VAR_1, VAR_3))) VAR_3++;
      return VAR_3 - 1;
    }
    VAR_2 *= 2;
  }

  while (VAR_2 - VAR_3 > 1) {
    lua_Unsigned VAR_4 = (VAR_3+VAR_2)/2;
    if (FUNC_2(FUNC_1(VAR_1, VAR_4))) VAR_2 = VAR_4;
    else VAR_3 = VAR_4;
  }
  return VAR_3;
}
