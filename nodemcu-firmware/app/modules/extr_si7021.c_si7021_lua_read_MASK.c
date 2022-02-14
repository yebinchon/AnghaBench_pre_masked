
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef double uint16_t ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,double) ;
 int FUNC_3 (int ,int*,int) ;
 int FUNC_4 (int ,int*,int) ;

__attribute__((used)) static int FUNC_5(lua_State* VAR_2) {

 uint8_t VAR_3[3];
 FUNC_3(VAR_0, VAR_3, 3);
 if (VAR_3[2] != FUNC_4(0, VAR_3, 2))
  return FUNC_0(VAR_2, "crc error");
 double VAR_4 = (uint16_t)((VAR_3[0] << 8) | VAR_3[1]);
 VAR_4 = ((VAR_4 * 125) / 65536 - 6);
 int VAR_5 = (int)((VAR_4 - (int)VAR_4) * 1000);

 uint8_t VAR_6[2];
 FUNC_3(VAR_1, VAR_6, 2);
 double VAR_7 = (uint16_t)((VAR_6[0] << 8) | VAR_6[1]);
 VAR_7 = ((VAR_7 * 175.72) / 65536 - 46.85);
 int VAR_8 = (int)((VAR_7 - (int)VAR_7) * 1000);

 FUNC_2(VAR_2, VAR_4);
 FUNC_2(VAR_2, VAR_7);
 FUNC_1(VAR_2, VAR_5);
 FUNC_1(VAR_2, VAR_8);

 return 4;
}
