
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int FILE ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int,int *) ;
 int ** FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3 (lua_State *VAR_0) {
  FILE **VAR_1 = FUNC_2(VAR_0);
  int VAR_2 = FUNC_0(VAR_0, *VAR_1);
  *VAR_1 = ((void*)0);
  return FUNC_1(VAR_0, VAR_2, ((void*)0));
}
