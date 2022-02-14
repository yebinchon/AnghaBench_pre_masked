
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mc_package {scalar_t__ size; struct mc_package* data; } ;
typedef int pack ;
typedef int lua_State ;
typedef int lua_Integer ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,struct mc_package*) ;
 struct mc_package** FUNC_4 (int *,int) ;

__attribute__((used)) static int
FUNC_5(lua_State *VAR_0) {
 struct mc_package ** VAR_1 = FUNC_4(VAR_0,1);
 int VAR_2 = FUNC_0(VAR_0,2);
 if (VAR_2 != sizeof(VAR_1)) {
  return FUNC_1(VAR_0, "Invalid multicast package size %d", VAR_2);
 }
 FUNC_3(VAR_0, *VAR_1);
 FUNC_3(VAR_0, (*VAR_1)->data);
 FUNC_2(VAR_0, (lua_Integer)((*VAR_1)->size));
 return 3;
}
