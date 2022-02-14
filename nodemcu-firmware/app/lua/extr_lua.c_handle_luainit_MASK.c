
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *,char const*,int ) ;

__attribute__((used)) static int FUNC_2 (lua_State *VAR_2) {
  const char *VAR_3 = VAR_1;
  if (VAR_3[0] == '@')
    return FUNC_0(VAR_2, VAR_3+1);
  else
    return FUNC_1(VAR_2, VAR_3, VAR_0);
}
