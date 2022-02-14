
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int lua_State ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int,size_t*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int
FUNC_4(lua_State *VAR_1) {
 size_t VAR_2 = 0;
 const uint8_t *VAR_3 = (const uint8_t *)FUNC_0(VAR_1, 1, &VAR_2);
 if (VAR_2 != 8) {
  FUNC_1(VAR_1, "Invalid dh uint64 key");
 }
 uint32_t VAR_4[2];
 VAR_4[0] = VAR_3[0] | VAR_3[1]<<8 | VAR_3[2]<<16 | VAR_3[3]<<24;
 VAR_4[1] = VAR_3[4] | VAR_3[5]<<8 | VAR_3[6]<<16 | VAR_3[7]<<24;

 uint64_t VAR_5 = (uint64_t)VAR_4[0] | (uint64_t)VAR_4[1]<<32;
 if (VAR_5 == 0)
  return FUNC_1(VAR_1, "Can't be 0");

 uint64_t VAR_6 = FUNC_2(VAR_0, VAR_5);
 FUNC_3(VAR_1, VAR_6);
 return 1;
}
