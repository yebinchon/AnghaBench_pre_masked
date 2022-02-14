
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mc_package {struct mc_package* data; int reference; } ;
typedef int lua_State ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;
 struct mc_package* FUNC_2 (int *,int) ;
 int FUNC_3 (struct mc_package*) ;

__attribute__((used)) static int
FUNC_4(lua_State *VAR_0) {
 struct mc_package *VAR_1 = FUNC_2(VAR_0,1);

 int VAR_2 = FUNC_0(&VAR_1->reference);
 if (VAR_2 <= 0) {
  FUNC_3(VAR_1->data);
  FUNC_3(VAR_1);
  if (VAR_2 < 0) {
   return FUNC_1(VAR_0, "Invalid multicast package reference %d", VAR_2);
  }
 }

 return 0;
}
