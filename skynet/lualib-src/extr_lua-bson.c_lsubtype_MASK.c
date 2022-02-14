
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int lua_State ;
typedef int lua_Integer ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int const) ;
 int FUNC_2 (int *,char const*,size_t) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(lua_State *VAR_0, int VAR_1, const uint8_t * VAR_2, size_t VAR_3) {
 switch(VAR_1) {
 case 139:
  FUNC_3(VAR_0, FUNC_4(6));
  FUNC_2(VAR_0, (const char *)VAR_2+1, VAR_3-1);
  FUNC_1(VAR_0, VAR_2[0]);
  return 3;
 case 131: {
  if (VAR_3 != 12) {
   return FUNC_0(VAR_0, "Invalid object id");
  }
  char VAR_4[24];
  int VAR_5;
  const uint8_t * VAR_6 = VAR_2;
  static char *VAR_7 = "0123456789abcdef";
  for (VAR_5=0;VAR_5<12;VAR_5++) {
   VAR_4[VAR_5*2] = VAR_7[VAR_6[VAR_5] >> 4];
   VAR_4[VAR_5*2+1] = VAR_7[VAR_6[VAR_5] & 0xf];
  }
  FUNC_3(VAR_0, FUNC_4(7));
  FUNC_2(VAR_0, VAR_4, 24);

  return 2;
 }
 case 137: {
  if (VAR_3 != 4) {
   return FUNC_0(VAR_0, "Invalid date");
  }
  int VAR_8 = *(const int *)VAR_2;
  FUNC_3(VAR_0, FUNC_4(9));
  FUNC_1(VAR_0, VAR_8);
  return 2;
 }
 case 128: {
  if (VAR_3 != 8) {
   return FUNC_0(VAR_0, "Invalid timestamp");
  }
  const uint32_t * VAR_9 = (const uint32_t *)VAR_2;
  FUNC_3(VAR_0, FUNC_4(8));
  FUNC_1(VAR_0, (lua_Integer)VAR_9[1]);
  FUNC_1(VAR_0, (lua_Integer)VAR_9[0]);
  return 3;
 }
 case 130: {
  --VAR_3;
  size_t VAR_10;
  const uint8_t *VAR_11 = VAR_2;
  for (VAR_10=0;VAR_10<VAR_3;VAR_10++) {
   if (VAR_11[VAR_3-VAR_10-1]==0) {
    break;
   }
  }
  FUNC_3(VAR_0, FUNC_4(10));
  if (VAR_10==VAR_3) {
   return FUNC_0(VAR_0, "Invalid regex");
  }
  FUNC_2(VAR_0, (const char *)VAR_11, VAR_3 - VAR_10 - 1);
  FUNC_2(VAR_0, (const char *)VAR_11+VAR_3-VAR_10, VAR_10);
  return 3;
 }
 case 133:
  FUNC_3(VAR_0, FUNC_4(11));
  return 1;
 case 134:
  FUNC_3(VAR_0, FUNC_4(12));
  return 1;
 case 132:
  FUNC_3(VAR_0, FUNC_4(4));
  return 1;
 case 135:
 case 136:
 case 129:
 case 138:
  FUNC_3(VAR_0, FUNC_4(13));
  FUNC_2(VAR_0, (const char *)VAR_2, VAR_3);
  return 2;
 default:
  return FUNC_0(VAR_0, "Invalid subtype %d", VAR_1);
 }
}
