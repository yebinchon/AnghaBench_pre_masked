
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table {int sizearray; } ;
typedef int lua_State ;


 struct table* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int
FUNC_2(lua_State *VAR_0) {
 struct table *VAR_1 = FUNC_0(VAR_0,1);
 FUNC_1(VAR_0, VAR_1->sizearray);
 return 1;
}
