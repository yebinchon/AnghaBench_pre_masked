
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table {int L; } ;
typedef int lua_State ;


 int FUNC_0 (struct table*) ;
 struct table* FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(lua_State *VAR_0) {
 struct table *VAR_1 = FUNC_1(VAR_0,1);
 FUNC_2(VAR_1->L);
 FUNC_0(VAR_1);
 return 0;
}
