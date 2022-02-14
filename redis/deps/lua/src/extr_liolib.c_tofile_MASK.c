
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int FILE ;


 int FUNC_0 (int *,char*) ;
 int ** FUNC_1 (int *) ;

__attribute__((used)) static FILE *FUNC_2 (lua_State *VAR_0) {
  FILE **VAR_1 = FUNC_1(VAR_0);
  if (*VAR_1 == ((void*)0))
    FUNC_0(VAR_0, "attempt to use a closed file");
  return *VAR_1;
}
