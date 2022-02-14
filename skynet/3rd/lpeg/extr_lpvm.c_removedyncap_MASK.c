
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int Capture ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3 (lua_State *VAR_0, Capture *VAR_1,
                         int VAR_2, int VAR_3) {
  int VAR_4 = FUNC_0(VAR_1 + VAR_2, VAR_1 + VAR_3);
  int VAR_5 = FUNC_1(VAR_0);
  if (VAR_4 == 0) return 0;
  FUNC_2(VAR_0, VAR_4 - 1);
  return VAR_5 - VAR_4 + 1;
}
