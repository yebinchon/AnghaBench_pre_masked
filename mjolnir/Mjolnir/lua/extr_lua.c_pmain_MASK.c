
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,int*) ;
 int FUNC_1 (int *,char**,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,char**) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int ,char*) ;
 scalar_t__ FUNC_10 () ;
 scalar_t__ FUNC_11 (int *,int) ;
 scalar_t__ FUNC_12 (int *,int) ;
 int FUNC_13 (char*) ;
 int FUNC_14 () ;
 char* VAR_7 ;
 int FUNC_15 (int *,char**,int) ;

__attribute__((used)) static int FUNC_16 (lua_State *VAR_8) {
  int VAR_9 = (int)FUNC_11(VAR_8, 1);
  char **VAR_10 = (char **)FUNC_12(VAR_8, 2);
  int VAR_11;
  int VAR_12 = FUNC_0(VAR_10, &VAR_11);
  FUNC_6(VAR_8);
  if (VAR_10[0] && VAR_10[0][0]) VAR_7 = VAR_10[0];
  if (VAR_12 == VAR_4) {
    FUNC_13(VAR_10[VAR_11]);
    return 0;
  }
  if (VAR_12 & VAR_6)
    FUNC_14();
  if (VAR_12 & VAR_2) {
    FUNC_8(VAR_8, 1);
    FUNC_9(VAR_8, VAR_1, "LUA_NOENV");
  }
  FUNC_7(VAR_8);
  FUNC_1(VAR_8, VAR_10, VAR_9, VAR_11);
  if (!(VAR_12 & VAR_2)) {
    if (FUNC_4(VAR_8) != VAR_0)
      return 0;
  }
  if (!FUNC_15(VAR_8, VAR_10, VAR_11))
    return 0;
  if (VAR_11 < VAR_9 &&
      FUNC_5(VAR_8, VAR_10 + VAR_11) != VAR_0)
    return 0;
  if (VAR_12 & VAR_5)
    FUNC_2(VAR_8);
  else if (VAR_11 == VAR_9 && !(VAR_12 & (VAR_3 | VAR_6))) {
    if (FUNC_10()) {
      FUNC_14();
      FUNC_2(VAR_8);
    }
    else FUNC_3(VAR_8, ((void*)0));
  }
  FUNC_8(VAR_8, 1);
  return 1;
}
