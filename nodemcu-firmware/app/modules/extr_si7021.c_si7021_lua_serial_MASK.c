
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int*,int) ;
 int FUNC_3 (int,int*,int) ;

__attribute__((used)) static int FUNC_4(lua_State* VAR_2) {

 uint32_t VAR_3;
 uint8_t VAR_4 = 0;
 uint8_t VAR_5[8];
 FUNC_2(VAR_0, VAR_5, 8);
 for(uint8_t VAR_6 = 0; VAR_6 <= 6; VAR_6+=2) {
  VAR_4 = FUNC_3(VAR_4, VAR_5+VAR_6, 1);
  if (VAR_5[VAR_6+1] != VAR_4)
   return FUNC_0(VAR_2, "crc error");
  VAR_3 = (VAR_3 << 8) + VAR_5[VAR_6];
 }

 uint32_t VAR_7;
 VAR_4 = 0;
 uint8_t VAR_8[6];
 FUNC_2(VAR_1, VAR_8, 6);
 for(uint8_t VAR_9 = 0; VAR_9 <=3; VAR_9+=3) {
  VAR_4 = FUNC_3(VAR_4, VAR_8+VAR_9, 2);
  if (VAR_8[VAR_9+2] != VAR_4)
   return FUNC_0(VAR_2, "crc error");
  VAR_7 = (VAR_7 << 16) + (VAR_8[VAR_9] << 8) + VAR_8[VAR_9+1];
 }

 FUNC_1(VAR_2, VAR_3);
 FUNC_1(VAR_2, VAR_7);

 return 2;
}
