
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int lua_State ;


 int FUNC_0 (char const*,int,int*) ;
 int FUNC_1 (int*,int*,int*) ;
 char* FUNC_2 (int *,int,size_t*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int*) ;

__attribute__((used)) static int
FUNC_5(lua_State *VAR_0) {
 uint32_t VAR_1[2];
 size_t VAR_2 = 0;
 const uint8_t *VAR_3 = (const uint8_t *)FUNC_2(VAR_0, 1, &VAR_2);
 if (VAR_2 != 8) {
  FUNC_3(VAR_0, "Invalid uint64 key");
 }
 VAR_1[0] = VAR_3[0] | VAR_3[1]<<8 | VAR_3[2]<<16 | VAR_3[3]<<24;
 VAR_1[1] = VAR_3[4] | VAR_3[5]<<8 | VAR_3[6]<<16 | VAR_3[7]<<24;
 const char * VAR_4 = FUNC_2(VAR_0, 2, &VAR_2);
 uint8_t VAR_5[8];
 FUNC_0(VAR_4,(int)VAR_2,VAR_5);
 uint32_t VAR_6[2];
 VAR_6[0] = VAR_5[0] | VAR_5[1]<<8 | VAR_5[2]<<16 | VAR_5[3]<<24;
 VAR_6[1] = VAR_5[4] | VAR_5[5]<<8 | VAR_5[6]<<16 | VAR_5[7]<<24;
 uint32_t VAR_7[2];
 FUNC_1(VAR_6,VAR_1,VAR_7);
 return FUNC_4(VAR_0, VAR_7);
}
