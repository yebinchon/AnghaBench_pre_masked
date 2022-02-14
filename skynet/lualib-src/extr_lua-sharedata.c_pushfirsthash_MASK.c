
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table {int * hash; int L; scalar_t__ sizehash; } ;
typedef int lua_State ;


 int FUNC_0 (int *,int ,int *) ;

__attribute__((used)) static int
FUNC_1(lua_State *VAR_0, struct table * VAR_1) {
 if (VAR_1->sizehash) {
  FUNC_0(VAR_0, VAR_1->L, &VAR_1->hash[0]);
  return 1;
 } else {
  return 0;
 }
}
