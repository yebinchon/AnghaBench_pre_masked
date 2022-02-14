
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int lua_State ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char const*,int) ;
 scalar_t__ FUNC_5 (int const*) ;

__attribute__((used)) static int
FUNC_6(lua_State *VAR_0, const uint8_t * VAR_1, int VAR_2) {
 if (VAR_2 < 9) {
  return FUNC_0(VAR_0, "Invalid cluster message (size=%d)", VAR_2);
 }
 uint32_t VAR_3 = FUNC_5(VAR_1+1);
 uint32_t VAR_4 = FUNC_5(VAR_1+5);
 FUNC_2(VAR_0, VAR_3);
 FUNC_2(VAR_0, VAR_4);

 FUNC_4(VAR_0, (const char *)VAR_1+9, VAR_2-9);
 if (VAR_4 == 0) {
  FUNC_3(VAR_0);
  FUNC_1(VAR_0,1);
  return 6;
 }

 return 4;
}
