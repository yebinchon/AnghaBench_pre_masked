
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,int ) ;
 char* FUNC_1 (int *,int,size_t*) ;
 int FUNC_2 (int *,char const*,size_t,char const*) ;
 char* FUNC_3 (int *,int,char const*) ;

__attribute__((used)) static int FUNC_4 (lua_State *VAR_0) {
  size_t VAR_1;
  const char *VAR_2 = FUNC_1(VAR_0, 1, &VAR_1);
  const char *VAR_3 = FUNC_3(VAR_0, 2, VAR_2);
  return FUNC_0(VAR_0, FUNC_2(VAR_0, VAR_2, VAR_1, VAR_3));
}
