
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* param_cb ) (int *,int) ;
typedef int lua_State ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static inline bool FUNC_2(lua_State *VAR_0, param_cb VAR_1,
     const char *VAR_2)
{
 if (FUNC_0(VAR_0) != 1) {
  FUNC_1("Wrong number of parameters for %s", VAR_2);
  return 0;
 }
 if (!VAR_1(VAR_0, 1)) {
  FUNC_1("Wrong parameter type for parameter %d of %s", 1, VAR_2);
  return 0;
 }

 return 1;
}
