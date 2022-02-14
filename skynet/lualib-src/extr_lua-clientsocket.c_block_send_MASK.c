
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int,char const*,int,int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void
FUNC_3(lua_State *VAR_3, int VAR_4, const char * VAR_5, int VAR_6) {
 while(VAR_6 > 0) {
  int VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_6, 0);
  if (VAR_7 < 0) {
   if (VAR_2 == VAR_0 || VAR_2 == VAR_1)
    continue;
   FUNC_0(VAR_3, "socket error: %s", FUNC_2(VAR_2));
  }
  VAR_5 += VAR_7;
  VAR_6 -= VAR_7;
 }
}
