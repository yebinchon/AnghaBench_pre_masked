
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct channel {int dummy; } ;
typedef int lua_State ;


 int FUNC_0 (int *,char*) ;
 struct channel* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,struct channel*) ;

__attribute__((used)) static int
FUNC_3(lua_State *VAR_0) {
 struct channel *VAR_1 = FUNC_1(VAR_0, 1);
 if (VAR_1 == ((void*)0))
  return FUNC_0(VAR_0, "Invalid channel pointer");
 FUNC_2(VAR_0, VAR_1);

 return 1;
}
