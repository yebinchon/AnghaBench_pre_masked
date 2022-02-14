
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int TTree ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static void FUNC_8 (lua_State *VAR_0, int VAR_1, TTree *VAR_2, int VAR_3) {
  int VAR_4, VAR_5;
  FUNC_5(VAR_0, VAR_1);
  FUNC_5(VAR_0, VAR_3);
  VAR_4 = FUNC_2(VAR_0, -2);
  VAR_5 = FUNC_2(VAR_0, -1);
  if (VAR_4 == 0 && VAR_5 == 0)
    FUNC_6(VAR_0, 2);
  else if (VAR_5 == 0 || FUNC_3(VAR_0, -2, -1)) {
    FUNC_6(VAR_0, 1);
    FUNC_7(VAR_0, -2);
  }
  else if (VAR_4 == 0) {
    FUNC_7(VAR_0, -3);
    FUNC_6(VAR_0, 1);
  }
  else {
    FUNC_4(VAR_0, VAR_4 + VAR_5, 0);

    FUNC_0(VAR_0, -3, -1);
    FUNC_0(VAR_0, -2, -1);
    FUNC_7(VAR_0, -4);
    FUNC_6(VAR_0, 2);
    FUNC_1(VAR_2, VAR_4);
  }
}
