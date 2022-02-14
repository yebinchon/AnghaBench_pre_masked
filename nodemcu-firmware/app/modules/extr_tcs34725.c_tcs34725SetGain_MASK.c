
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int tcs34725Gain_t ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int ) ;

uint8_t FUNC_2(tcs34725Gain_t VAR_3, lua_State* VAR_4)
{
 if (!VAR_2)
 {
  return FUNC_0(VAR_4, "TCS34725 not initialised.");
 }

 FUNC_1(VAR_0, VAR_3);
 VAR_1 = VAR_3;

 return 0;
}
