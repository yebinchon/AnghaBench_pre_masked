
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int lua_State ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int,size_t*) ;
 char* FUNC_1 (int *,size_t) ;
 int FUNC_2 (int *,char*,size_t) ;

__attribute__((used)) static int
FUNC_3(lua_State *VAR_1) {
 static char VAR_2[] = "0123456789abcdef";
 size_t VAR_3 = 0;
 const uint8_t * VAR_4 = (const uint8_t *)FUNC_0(VAR_1, 1, &VAR_3);
 char VAR_5[VAR_0];
 char *VAR_6 = VAR_5;
 if (VAR_3 > VAR_0/2) {
  VAR_6 = FUNC_1(VAR_1, VAR_3 * 2);
 }
 int VAR_7;
 for (VAR_7=0;VAR_7<VAR_3;VAR_7++) {
  VAR_6[VAR_7*2] = VAR_2[VAR_4[VAR_7] >> 4];
  VAR_6[VAR_7*2+1] = VAR_2[VAR_4[VAR_7] & 0xf];
 }
 FUNC_2(VAR_1, VAR_6, VAR_3 * 2);
 return 1;
}
