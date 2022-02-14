
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int lua_State ;


 scalar_t__ FUNC_0 (int *,int,size_t*) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static void
FUNC_2(lua_State *VAR_0, uint32_t VAR_1[2], uint32_t VAR_2[2]) {
 size_t VAR_3 = 0;
 const uint8_t *VAR_4 = (const uint8_t *)FUNC_0(VAR_0, 1, &VAR_3);
 if (VAR_3 != 8) {
  FUNC_1(VAR_0, "Invalid uint64 x");
 }
 const uint8_t *VAR_5 = (const uint8_t *)FUNC_0(VAR_0, 2, &VAR_3);
 if (VAR_3 != 8) {
  FUNC_1(VAR_0, "Invalid uint64 y");
 }
 VAR_1[0] = VAR_4[0] | VAR_4[1]<<8 | VAR_4[2]<<16 | VAR_4[3]<<24;
 VAR_1[1] = VAR_4[4] | VAR_4[5]<<8 | VAR_4[6]<<16 | VAR_4[7]<<24;
 VAR_2[0] = VAR_5[0] | VAR_5[1]<<8 | VAR_5[2]<<16 | VAR_5[3]<<24;
 VAR_2[1] = VAR_5[4] | VAR_5[5]<<8 | VAR_5[6]<<16 | VAR_5[7]<<24;
}
