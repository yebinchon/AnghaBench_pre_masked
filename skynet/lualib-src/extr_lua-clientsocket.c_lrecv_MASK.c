
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int,char*,int,int ) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int
FUNC_6(lua_State *VAR_4) {
 int VAR_5 = FUNC_0(VAR_4,1);

 char VAR_6[VAR_0];
 int VAR_7 = FUNC_4(VAR_5, VAR_6, VAR_0, 0);
 if (VAR_7 == 0) {
  FUNC_2(VAR_4, "");

  return 1;
 }
 if (VAR_7 < 0) {
  if (VAR_3 == VAR_1 || VAR_3 == VAR_2) {
   return 0;
  }
  FUNC_1(VAR_4, "socket error: %s", FUNC_5(VAR_3));
 }
 FUNC_3(VAR_4, VAR_6, VAR_7);
 return 1;
}
