
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mc_package {int reference; } ;
typedef int lua_State ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,struct mc_package*) ;
 struct mc_package** FUNC_3 (int *,int) ;
 int FUNC_4 (struct mc_package**) ;

__attribute__((used)) static int
FUNC_5(lua_State *VAR_0) {
 struct mc_package ** VAR_1 = FUNC_3(VAR_0,1);
 int VAR_2 = FUNC_0(VAR_0,2);
 if ((*VAR_1)->reference != 0) {
  return FUNC_1(VAR_0, "Can't bind a multicast package more than once");
 }
 (*VAR_1)->reference = VAR_2;

 FUNC_2(VAR_0, *VAR_1);

 FUNC_4(VAR_1);

 return 1;
}
