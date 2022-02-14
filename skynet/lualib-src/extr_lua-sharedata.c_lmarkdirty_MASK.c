
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table {int L; } ;
struct state {int dirty; } ;
typedef int lua_State ;


 struct table* FUNC_0 (int *,int) ;
 struct state* FUNC_1 (int ,int) ;

__attribute__((used)) static int
FUNC_2(lua_State *VAR_0) {
 struct table *VAR_1 = FUNC_0(VAR_0,1);
 struct state * VAR_2 = FUNC_1(VAR_1->L, 1);
 VAR_2->dirty = 1;
 return 0;
}
