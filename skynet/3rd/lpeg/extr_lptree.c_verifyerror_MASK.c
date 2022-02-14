
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3 (lua_State *VAR_0, int *VAR_1, int VAR_2) {
  int VAR_3, VAR_4;
  for (VAR_3 = VAR_2 - 1; VAR_3 >= 0; VAR_3--) {
    for (VAR_4 = VAR_3 - 1; VAR_4 >= 0; VAR_4--) {
      if (VAR_1[VAR_3] == VAR_1[VAR_4]) {
        FUNC_1(VAR_0, -1, VAR_1[VAR_3]);
        return FUNC_0(VAR_0, "rule '%s' may be left recursive", FUNC_2(VAR_0, -1));
      }
    }
  }
  return FUNC_0(VAR_0, "too many left calls in grammar");
}
