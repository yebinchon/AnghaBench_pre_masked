
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 char const* FUNC_7 (int *,int,size_t*) ;

__attribute__((used)) static const char *FUNC_8 (lua_State *VAR_0, void *VAR_1, size_t *VAR_2) {
  (void)VAR_1;
  FUNC_0(VAR_0, 2, "too many nested functions");
  FUNC_5(VAR_0, 1);
  FUNC_2(VAR_0, 0, 1);
  if (FUNC_3(VAR_0, -1)) {
    *VAR_2 = 0;
    return ((void*)0);
  }
  else if (FUNC_4(VAR_0, -1)) {
    FUNC_6(VAR_0, 3);
    return FUNC_7(VAR_0, 3, VAR_2);
  }
  else FUNC_1(VAR_0, "reader function must return a string");
  return ((void*)0);
}
