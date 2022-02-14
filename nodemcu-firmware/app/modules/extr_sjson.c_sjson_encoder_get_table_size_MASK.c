
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int) ;

__attribute__((used)) static int FUNC_6(lua_State *VAR_1, int VAR_2) {

  FUNC_3(VAR_1, VAR_2);

  FUNC_2(VAR_1);


  int VAR_3 = 0;

  while (FUNC_0(VAR_1, -2)) {
    FUNC_1(VAR_1, 1);

    if (FUNC_5(VAR_1, -1) == VAR_0) {
      int VAR_4 = FUNC_4(VAR_1, -1);
      if (VAR_4 > VAR_3) {
        VAR_3 = VAR_4;
      } else if (VAR_4 <= 0) {
        VAR_3 = -1;
        FUNC_1(VAR_1, 1);
        break;
      }
    } else {
      VAR_3 = -1;
      FUNC_1(VAR_1, 1);
      break;
    }
  }

  FUNC_1(VAR_1, 1);

  return VAR_3;
}
