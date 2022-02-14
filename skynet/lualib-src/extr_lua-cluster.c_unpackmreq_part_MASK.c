
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int lua_State ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char const*,int) ;
 int FUNC_4 (int const*) ;

__attribute__((used)) static int
FUNC_5(lua_State *VAR_0, const uint8_t * VAR_1, int VAR_2) {
 if (VAR_2 < 5) {
  return FUNC_0(VAR_0, "Invalid cluster multi part message");
 }
 int VAR_3 = (VAR_1[0] == 2);
 uint32_t VAR_4 = FUNC_4(VAR_1+1);
 FUNC_1(VAR_0, 0);
 FUNC_2(VAR_0, VAR_4);
 FUNC_3(VAR_0, (const char *)VAR_1+5, VAR_2-5);
 FUNC_1(VAR_0, VAR_3);

 return 5;
}
