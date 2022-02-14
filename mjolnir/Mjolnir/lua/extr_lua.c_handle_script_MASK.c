
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static int FUNC_5 (lua_State *VAR_2, char **VAR_3) {
  int VAR_4;
  const char *VAR_5 = VAR_3[0];
  if (FUNC_4(VAR_5, "-") == 0 && FUNC_4(VAR_3[-1], "--") != 0)
    VAR_5 = ((void*)0);
  VAR_4 = FUNC_1(VAR_2, VAR_5);
  if (VAR_4 == VAR_1) {
    int VAR_6 = FUNC_2(VAR_2);
    VAR_4 = FUNC_0(VAR_2, VAR_6, VAR_0);
  }
  return FUNC_3(VAR_2, VAR_4);
}
