
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;

uint8_t FUNC_3(lua_State* VAR_5)
{
 uint16_t VAR_6;
 uint16_t VAR_7;
 uint16_t VAR_8;
 uint16_t VAR_9;

 if (!VAR_4)
 {
  return FUNC_0(VAR_5, "TCS34725 not initialised.");
 }

 VAR_9 = FUNC_2(VAR_1);
 VAR_6 = FUNC_2(VAR_3);
 VAR_7 = FUNC_2(VAR_2);
 VAR_8 = FUNC_2(VAR_0);
 FUNC_1(VAR_5, VAR_9);
 FUNC_1(VAR_5, VAR_6);
 FUNC_1(VAR_5, VAR_7);
 FUNC_1(VAR_5, VAR_8);
 return 4;
}
