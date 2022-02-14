
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table {int * L; } ;
struct state {int ref; } ;
struct ctrl {int * update; struct table* root; } ;
typedef int lua_State ;


 int FUNC_0 (int *) ;
 void* FUNC_1 (int *,int) ;

__attribute__((used)) static int
FUNC_2(lua_State *VAR_0) {
 struct ctrl *VAR_1 = FUNC_1(VAR_0, 1);
 struct table *VAR_2 = VAR_1->root;
 struct state *VAR_3 = FUNC_1(VAR_2->L, 1);
 FUNC_0(&VAR_3->ref);
 VAR_1->root = ((void*)0);
 VAR_1->update = ((void*)0);

 return 0;
}
