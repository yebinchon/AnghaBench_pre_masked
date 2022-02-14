
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table {int L; } ;
struct state {int ref; } ;
typedef int lua_State ;


 int FUNC_0 (int *) ;
 struct table* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 struct state* FUNC_3 (int ,int) ;

__attribute__((used)) static int
FUNC_4(lua_State *VAR_0) {
 struct table *VAR_1 = FUNC_1(VAR_0,1);
 struct state * VAR_2 = FUNC_3(VAR_1->L, 1);
 int VAR_3 = FUNC_0(&VAR_2->ref);
 FUNC_2(VAR_0 , VAR_3);

 return 1;
}
