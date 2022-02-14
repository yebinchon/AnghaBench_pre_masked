
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int lua_State ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(lua_State *VAR_0, uint8_t *VAR_1, int VAR_2) {
 FUNC_0(VAR_2 < 0x10000);
 VAR_1[0] = (VAR_2 >> 8) & 0xff;
 VAR_1[1] = VAR_2 & 0xff;
}
