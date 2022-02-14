
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int,int,char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 char* FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int) ;

__attribute__((used)) static int FUNC_6 (lua_State *VAR_1) {
  int VAR_2 = FUNC_2(VAR_1);
  if (FUNC_5(VAR_1, 1) == VAR_0 && *FUNC_4(VAR_1, 1) == '#') {
    FUNC_3(VAR_1, VAR_2-1);
    return 1;
  }
  else {
    int VAR_3 = FUNC_1(VAR_1, 1);
    if (VAR_3 < 0) VAR_3 = VAR_2 + VAR_3;
    else if (VAR_3 > VAR_2) VAR_3 = VAR_2;
    FUNC_0(VAR_1, 1 <= VAR_3, 1, "index out of range");
    return VAR_2 - VAR_3;
  }
}
