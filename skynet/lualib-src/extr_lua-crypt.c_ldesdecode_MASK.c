
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*,int*) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int,size_t*) ;
 int FUNC_3 (int *,char*,...) ;
 int* FUNC_4 (int *,size_t) ;
 int FUNC_5 (int *,char const*,size_t) ;

__attribute__((used)) static int
FUNC_6(lua_State *VAR_1) {
 uint32_t VAR_2[32];
 FUNC_1(VAR_1, VAR_2);
 uint32_t VAR_3[32];
 int VAR_4;
 for( VAR_4 = 0; VAR_4 < 32; VAR_4 += 2 ) {
  VAR_3[VAR_4] = VAR_2[30 - VAR_4];
  VAR_3[VAR_4 + 1] = VAR_2[31 - VAR_4];
 }
 size_t VAR_5 = 0;
 const uint8_t *VAR_6 = (const uint8_t *)FUNC_2(VAR_1, 2, &VAR_5);
 if ((VAR_5 & 7) || VAR_5 == 0) {
  return FUNC_3(VAR_1, "Invalid des crypt text length %d", (int)VAR_5);
 }
 uint8_t VAR_7[VAR_0];
 uint8_t *VAR_8 = VAR_7;
 if (VAR_5 > VAR_0) {
  VAR_8 = FUNC_4(VAR_1, VAR_5);
 }
 for (VAR_4=0;VAR_4<VAR_5;VAR_4+=8) {
  FUNC_0(VAR_3, VAR_6+VAR_4, VAR_8+VAR_4);
 }
 int VAR_9 = 1;
 for (VAR_4=VAR_5-1;VAR_4>=VAR_5-8;VAR_4--) {
  if (VAR_8[VAR_4] == 0) {
   VAR_9++;
  } else if (VAR_8[VAR_4] == 0x80) {
   break;
  } else {
   return FUNC_3(VAR_1, "Invalid des crypt text");
  }
 }
 if (VAR_9 > 8) {
  return FUNC_3(VAR_1, "Invalid des crypt text");
 }
 FUNC_5(VAR_1, (const char *)VAR_8, VAR_5 - VAR_9);
 return 1;
}
