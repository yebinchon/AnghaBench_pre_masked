
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int lua_State ;


 int FUNC_0 (int *,char const*,int) ;

__attribute__((used)) static int
FUNC_1(lua_State *VAR_0, uint32_t VAR_1[2]) {
 uint8_t VAR_2[8];
 VAR_2[0] = VAR_1[0] & 0xff;
 VAR_2[1] = (VAR_1[0] >> 8 )& 0xff;
 VAR_2[2] = (VAR_1[0] >> 16 )& 0xff;
 VAR_2[3] = (VAR_1[0] >> 24 )& 0xff;
 VAR_2[4] = VAR_1[1] & 0xff;
 VAR_2[5] = (VAR_1[1] >> 8 )& 0xff;
 VAR_2[6] = (VAR_1[1] >> 16 )& 0xff;
 VAR_2[7] = (VAR_1[1] >> 24 )& 0xff;

 FUNC_0(VAR_0, (const char *)VAR_2, 8);
 return 1;
}
