
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef scalar_t__ lua_Integer ;


 scalar_t__ FUNC_0 (int *,int,int) ;

__attribute__((used)) static size_t FUNC_1 (lua_State *VAR_0, size_t VAR_1) {
  lua_Integer VAR_2 = FUNC_0(VAR_0, 3, 1);
  if (VAR_2 > 0) {
    if ((size_t)VAR_2 <= VAR_1)
      return (size_t)VAR_2 - 1;
    else return VAR_1;
  }
  else {
    if ((size_t)(-VAR_2) <= VAR_1)
      return VAR_1 - ((size_t)(-VAR_2));
    else return 0;
  }
}
