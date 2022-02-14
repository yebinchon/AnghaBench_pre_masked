
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct boxstm {int obj; } ;
typedef int lua_State ;


 int FUNC_0 (int *,int ) ;
 struct boxstm* FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(lua_State *VAR_0) {
 struct boxstm * VAR_1 = FUNC_1(VAR_0, 1);
 FUNC_2(VAR_1->obj);
 FUNC_0(VAR_0, VAR_1->obj);
 return 1;
}
