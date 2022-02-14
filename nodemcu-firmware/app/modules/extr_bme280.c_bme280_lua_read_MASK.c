
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int lua_State ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 double FUNC_3 (int,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int,int*) ;

__attribute__((used)) static int FUNC_9(lua_State* VAR_2) {
 uint8_t VAR_3[8];
 uint32_t VAR_4;
 uint8_t VAR_5 = FUNC_5(VAR_2, 1);

 FUNC_8(VAR_0, 8, VAR_3);


 uint32_t VAR_6 = (uint32_t)(((VAR_3[3] << 16) | (VAR_3[4] << 8) | VAR_3[5]) >> 4);
 if (VAR_6 == 0x80000 || VAR_6 == 0xfffff)
  return 0;
 FUNC_6(VAR_2, FUNC_2(VAR_6));

 uint32_t VAR_7 = (uint32_t)(((VAR_3[0] << 16) | (VAR_3[1] << 8) | VAR_3[2]) >> 4);
 if (VAR_7 ==0x80000 || VAR_7 == 0xfffff) {
  FUNC_7(VAR_2);
  VAR_5 = 0;
 } else {
  VAR_4 = FUNC_1(VAR_7);
  FUNC_6(VAR_2, VAR_4);
 }

 uint32_t VAR_8 = (uint32_t)((VAR_3[6] << 8) | VAR_3[7]);
 if (!VAR_1 || VAR_8 == 0x8000 || VAR_8 == 0xffff)
  FUNC_7(VAR_2);
 else
  FUNC_6(VAR_2, FUNC_0(VAR_8));

 if (VAR_5) {
  int32_t VAR_9 = FUNC_4(VAR_2, 1);
  double VAR_10 = FUNC_3(VAR_4, VAR_9);
  FUNC_6(VAR_2, (int32_t)(VAR_10 + 0.5));
  return 4;
 }
 return 3;
}
