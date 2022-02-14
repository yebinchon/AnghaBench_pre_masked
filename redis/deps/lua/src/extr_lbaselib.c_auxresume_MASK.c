
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *,int) ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_8 (lua_State *VAR_3, lua_State *VAR_4, int VAR_5) {
  int VAR_6 = FUNC_0(VAR_3, VAR_4);
  if (!FUNC_2(VAR_4, VAR_5))
    FUNC_1(VAR_3, "too many arguments to resume");
  if (VAR_6 != VAR_0) {
    FUNC_4(VAR_3, "cannot resume %s coroutine", VAR_2[VAR_6]);
    return -1;
  }
  FUNC_7(VAR_3, VAR_4, VAR_5);
  FUNC_6(VAR_3, VAR_4);
  VAR_6 = FUNC_5(VAR_4, VAR_5);
  if (VAR_6 == 0 || VAR_6 == VAR_1) {
    int VAR_7 = FUNC_3(VAR_4);
    if (!FUNC_2(VAR_3, VAR_7 + 1))
      FUNC_1(VAR_3, "too many results to resume");
    FUNC_7(VAR_4, VAR_3, VAR_7);
    return VAR_7;
  }
  else {
    FUNC_7(VAR_4, VAR_3, 1);
    return -1;
  }
}
