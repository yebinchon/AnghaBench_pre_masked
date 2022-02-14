
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int const) ;
 scalar_t__ FUNC_1 (int *,int,size_t*) ;
 int FUNC_2 (int *,char*) ;
 char* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char*,int) ;

__attribute__((used)) static int
FUNC_5(lua_State *VAR_1) {
 size_t VAR_2 = 0;
 const uint8_t * VAR_3 = (const uint8_t *)FUNC_1(VAR_1, 1, &VAR_2);
 int VAR_4 = (VAR_2+3)/4*3;
 char VAR_5[VAR_0];
 char *VAR_6 = VAR_5;
 if (VAR_4 > VAR_0) {
  VAR_6 = FUNC_3(VAR_1, VAR_4);
 }
 int VAR_7,VAR_8;
 int VAR_9 = 0;
 for (VAR_7=0;VAR_7<VAR_2;) {
  int VAR_10 = 0;
  int VAR_11[4];
  for (VAR_8=0;VAR_8<4;) {
   if (VAR_7>=VAR_2) {
    return FUNC_2(VAR_1, "Invalid base64 text");
   }
   VAR_11[VAR_8] = FUNC_0(VAR_3[VAR_7]);
   if (VAR_11[VAR_8] == -1) {
    ++VAR_7;
    continue;
   }
   if (VAR_11[VAR_8] == -2) {
    ++VAR_10;
   }
   ++VAR_7;
   ++VAR_8;
  }
  uint32_t VAR_12;
  switch (VAR_10) {
  case 0:
   VAR_12 = (unsigned)VAR_11[0] << 18 | VAR_11[1] << 12 | VAR_11[2] << 6 | VAR_11[3];
   VAR_6[VAR_9] = VAR_12 >> 16;
   VAR_6[VAR_9+1] = (VAR_12 >> 8) & 0xff;
   VAR_6[VAR_9+2] = VAR_12 & 0xff;
   VAR_9 += 3;
   break;
  case 1:
   if (VAR_11[3] != -2 || (VAR_11[2] & 3)!=0) {
    return FUNC_2(VAR_1, "Invalid base64 text");
   }
   VAR_12 = (unsigned)VAR_11[0] << 10 | VAR_11[1] << 4 | VAR_11[2] >> 2 ;
   VAR_6[VAR_9] = VAR_12 >> 8;
   VAR_6[VAR_9+1] = VAR_12 & 0xff;
   VAR_9 += 2;
   break;
  case 2:
   if (VAR_11[3] != -2 || VAR_11[2] != -2 || (VAR_11[1] & 0xf) !=0) {
    return FUNC_2(VAR_1, "Invalid base64 text");
   }
   VAR_12 = (unsigned)VAR_11[0] << 2 | VAR_11[1] >> 4;
   VAR_6[VAR_9] = VAR_12;
   ++ VAR_9;
   break;
  default:
   return FUNC_2(VAR_1, "Invalid base64 text");
  }
 }
 FUNC_4(VAR_1, VAR_6, VAR_9);
 return 1;
}
