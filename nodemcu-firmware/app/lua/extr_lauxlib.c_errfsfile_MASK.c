
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char const*,char const*) ;
 int FUNC_1 (int *,int) ;
 char* FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3 (lua_State *VAR_1, const char *VAR_2, int VAR_3) {
  const char *VAR_4 = FUNC_2(VAR_1, VAR_3) + 1;
  FUNC_0(VAR_1, "cannot %s %s", VAR_2, VAR_4);
  FUNC_1(VAR_1, VAR_3);
  return VAR_0;
}
