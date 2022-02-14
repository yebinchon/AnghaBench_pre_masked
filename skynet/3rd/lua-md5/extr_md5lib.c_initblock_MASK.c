
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 size_t VAR_1 ;
 char* FUNC_0 (int *,int,size_t*) ;
 int FUNC_1 (int *,char*,size_t) ;
 int FUNC_2 (char*,char const*,size_t) ;
 int FUNC_3 (char*,int ,int) ;

__attribute__((used)) static int FUNC_4 (lua_State *VAR_2, const char *VAR_3, int VAR_4, char *VAR_5) {
  size_t VAR_6;
  const char *VAR_7 = FUNC_0(VAR_2, 2, &VAR_6);
  if (VAR_6 > VAR_1)
    FUNC_1(VAR_2, "key too long (> %d)", VAR_1);
  FUNC_3(VAR_5, 0, VAR_0);
  FUNC_2(VAR_5, VAR_3, VAR_4);
  FUNC_2(VAR_5+VAR_0, VAR_7, VAR_6);
  return (int)VAR_6+VAR_0;
}
