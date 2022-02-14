
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,int,int*) ;

__attribute__((used)) static int FUNC_4(lua_State* VAR_1) {
 uint8_t VAR_2[6];
 FUNC_3(VAR_0, 6, VAR_2);
 uint32_t VAR_3 = (uint32_t)(((VAR_2[3] << 16) | (VAR_2[4] << 8) | VAR_2[5]) >> 4);
 uint32_t VAR_4 = FUNC_1(VAR_3);
 uint32_t VAR_5 = (uint32_t)(((VAR_2[0] << 16) | (VAR_2[1] << 8) | VAR_2[2]) >> 4);
 if (VAR_3 == 0x80000 || VAR_3 == 0xfffff || VAR_5 ==0x80000 || VAR_5 == 0xfffff)
  return 0;
 FUNC_2(VAR_1, FUNC_0(VAR_5));
 FUNC_2(VAR_1, VAR_4);
 return 2;
}
