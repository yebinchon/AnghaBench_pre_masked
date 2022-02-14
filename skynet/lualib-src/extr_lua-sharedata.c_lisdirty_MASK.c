
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table {int L; } ;
struct state {int dirty; } ;
typedef int lua_State ;


 struct table* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 struct state* FUNC_2 (int ,int) ;

__attribute__((used)) static int
FUNC_3(lua_State *VAR_0) {
 struct table *VAR_1 = FUNC_0(VAR_0,1);
 struct state * VAR_2 = FUNC_2(VAR_1->L, 1);
 int VAR_3 = VAR_2->dirty;
 FUNC_1(VAR_0, VAR_3);

 return 1;
}
