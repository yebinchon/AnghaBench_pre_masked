
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int lua_State ;


 int FUNC_0 (int,char const) ;
 int VAR_0 ;
 char* FUNC_1 (int *,int,size_t*) ;
 int FUNC_2 (int *,char*,...) ;
 char* FUNC_3 (int *,size_t) ;
 int FUNC_4 (int *,char*,int) ;

__attribute__((used)) static int
FUNC_5(lua_State *VAR_1) {
 size_t VAR_2 = 0;
 const char * VAR_3 = FUNC_1(VAR_1, 1, &VAR_2);
 if (VAR_2 & 1) {
  return FUNC_2(VAR_1, "Invalid hex text size %d", (int)VAR_2);
 }
 char VAR_4[VAR_0];
 char *VAR_5 = VAR_4;
 if (VAR_2 > VAR_0*2) {
  VAR_5 = FUNC_3(VAR_1, VAR_2 / 2);
 }
 int VAR_6;
 for (VAR_6=0;VAR_6<VAR_2;VAR_6+=2) {
  uint8_t VAR_7,VAR_8;
  FUNC_0(VAR_7, VAR_3[VAR_6]);
  FUNC_0(VAR_8, VAR_3[VAR_6+1]);
  if (VAR_7 > 16 || VAR_8 > 16) {
   return FUNC_2(VAR_1, "Invalid hex text", VAR_3);
  }
  VAR_5[VAR_6/2] = VAR_7<<4 | VAR_8;
 }
 FUNC_4(VAR_1, VAR_5, VAR_6/2);
 return 1;
}
