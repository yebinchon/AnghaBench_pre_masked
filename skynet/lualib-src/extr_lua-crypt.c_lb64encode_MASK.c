
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t v ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int lua_State ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int,size_t*) ;
 char* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*,int) ;

__attribute__((used)) static int
FUNC_3(lua_State *VAR_1) {
 static const char* VAR_2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
 size_t VAR_3 = 0;
 const uint8_t * VAR_4 = (const uint8_t *)FUNC_0(VAR_1, 1, &VAR_3);
 int VAR_5 = (VAR_3 + 2)/3*4;
 char VAR_6[VAR_0];
 char *VAR_7 = VAR_6;
 if (VAR_5 > VAR_0) {
  VAR_7 = FUNC_1(VAR_1, VAR_5);
 }
 int VAR_8,VAR_9;
 VAR_9=0;
 for (VAR_8=0;VAR_8<(int)VAR_3-2;VAR_8+=3) {
  uint32_t VAR_10 = VAR_4[VAR_8] << 16 | VAR_4[VAR_8+1] << 8 | VAR_4[VAR_8+2];
  VAR_7[VAR_9] = VAR_2[VAR_10 >> 18];
  VAR_7[VAR_9+1] = VAR_2[(VAR_10 >> 12) & 0x3f];
  VAR_7[VAR_9+2] = VAR_2[(VAR_10 >> 6) & 0x3f];
  VAR_7[VAR_9+3] = VAR_2[(VAR_10) & 0x3f];
  VAR_9+=4;
 }
 int VAR_11 = VAR_3-VAR_8;
 uint32_t VAR_12;
 switch(VAR_11) {
 case 1 :
  VAR_12 = VAR_4[VAR_8];
  VAR_7[VAR_9] = VAR_2[VAR_12 >> 2];
  VAR_7[VAR_9+1] = VAR_2[(VAR_12 & 3) << 4];
  VAR_7[VAR_9+2] = '=';
  VAR_7[VAR_9+3] = '=';
  break;
 case 2 :
  VAR_12 = VAR_4[VAR_8] << 8 | VAR_4[VAR_8+1];
  VAR_7[VAR_9] = VAR_2[VAR_12 >> 10];
  VAR_7[VAR_9+1] = VAR_2[(VAR_12 >> 4) & 0x3f];
  VAR_7[VAR_9+2] = VAR_2[(VAR_12 & 0xf) << 2];
  VAR_7[VAR_9+3] = '=';
  break;
 }
 FUNC_2(VAR_1, VAR_7, VAR_5);
 return 1;
}
