
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int,char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5 (lua_State *VAR_2) {
  int VAR_3 = FUNC_4(VAR_2, 2);
  FUNC_0(VAR_2, VAR_3 == VAR_0 || VAR_3 == VAR_1, 2,
                    "nil or table expected");
  FUNC_3(VAR_2, 2);
  FUNC_1(VAR_2, FUNC_2(VAR_2, 1));
  return 1;
}
