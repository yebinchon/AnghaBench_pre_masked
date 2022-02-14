
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int lua_State ;


 int FUNC_0 (int *,char const*,int) ;

__attribute__((used)) static void
FUNC_1(lua_State *VAR_0, uint64_t VAR_1) {
 uint8_t VAR_2[8];
 VAR_2[0] = VAR_1 & 0xff;
 VAR_2[1] = (VAR_1 >> 8 )& 0xff;
 VAR_2[2] = (VAR_1 >> 16 )& 0xff;
 VAR_2[3] = (VAR_1 >> 24 )& 0xff;
 VAR_2[4] = (VAR_1 >> 32 )& 0xff;
 VAR_2[5] = (VAR_1 >> 40 )& 0xff;
 VAR_2[6] = (VAR_1 >> 48 )& 0xff;
 VAR_2[7] = (VAR_1 >> 56 )& 0xff;

 FUNC_0(VAR_0, (const char *)VAR_2, 8);
}
