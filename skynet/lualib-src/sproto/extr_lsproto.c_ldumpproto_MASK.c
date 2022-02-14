
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sproto {int dummy; } ;
typedef int lua_State ;


 int FUNC_0 (int *,int,char*) ;
 struct sproto* FUNC_1 (int *,int) ;
 int FUNC_2 (struct sproto*) ;

__attribute__((used)) static int
FUNC_3(lua_State *VAR_0) {
 struct sproto * VAR_1 = FUNC_1(VAR_0, 1);
 if (VAR_1 == ((void*)0)) {
  return FUNC_0(VAR_0, 1, "Need a sproto_type object");
 }
 FUNC_2(VAR_1);

 return 0;
}
