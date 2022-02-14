
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_Number ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 () ;

int FUNC_7 (lua_State *VAR_1) {


  lua_Number VAR_2 = (lua_Number)(FUNC_6()%VAR_0) /
                                (lua_Number)VAR_0;
  switch (FUNC_4(VAR_1)) {
    case 0: {
      FUNC_5(VAR_1, VAR_2);
      break;
    }
    case 1: {
      int VAR_3 = FUNC_2(VAR_1, 1);
      FUNC_1(VAR_1, 1<=VAR_3, 1, "interval is empty");
      FUNC_5(VAR_1, FUNC_0(VAR_2*VAR_3)+1);
      break;
    }
    case 2: {
      int VAR_4 = FUNC_2(VAR_1, 1);
      int VAR_5 = FUNC_2(VAR_1, 2);
      FUNC_1(VAR_1, VAR_4<=VAR_5, 2, "interval is empty");
      FUNC_5(VAR_1, FUNC_0(VAR_2*(VAR_5-VAR_4+1))+VAR_4);
      break;
    }
    default: return FUNC_3(VAR_1, "wrong number of arguments");
  }
  return 1;
}
