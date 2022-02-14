
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_Number ;


 int FUNC_0 (int *,int,int,char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7 (lua_State *VAR_0) {
  int VAR_1;
  int VAR_2;

  switch (FUNC_3(VAR_0)) {
    case 0: {



      FUNC_4(VAR_0, (lua_Number)FUNC_6() / (lua_Number)(1LL << 32));

      return 1;
    }
    case 1: {
      VAR_2 = 1;
      VAR_1 = FUNC_1(VAR_0, 1);
      break;
    }
    case 2: {
      VAR_2 = FUNC_1(VAR_0, 1);
      VAR_1 = FUNC_1(VAR_0, 2);
      break;
    }
    default:
      return FUNC_2(VAR_0, "wrong number of arguments");
  }
  FUNC_0(VAR_0, VAR_2<=VAR_1, 2, "interval is empty");
  FUNC_4(VAR_0, FUNC_5(VAR_2, VAR_1));
  return 1;
}
