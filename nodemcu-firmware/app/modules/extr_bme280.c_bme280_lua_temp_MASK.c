
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int,int*) ;

__attribute__((used)) static int FUNC_3(lua_State* VAR_2) {
 uint8_t VAR_3[3];
 FUNC_2(VAR_0, 3, VAR_3);
 uint32_t VAR_4 = (uint32_t)(((VAR_3[0] << 16) | (VAR_3[1] << 8) | VAR_3[2]) >> 4);
 if (VAR_4 == 0x80000 || VAR_4 == 0xfffff)
  return 0;
 FUNC_1(VAR_2, FUNC_0(VAR_4));
 FUNC_1(VAR_2, VAR_1);
 return 2;
}
