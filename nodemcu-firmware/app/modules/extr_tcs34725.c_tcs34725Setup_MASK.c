
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ) ;

uint8_t FUNC_4(lua_State* VAR_1)
{
 uint8_t VAR_2 = 0;


 VAR_2 = FUNC_3(VAR_0);
 FUNC_0("id: %x\n",VAR_2);
 if (VAR_2 != 0x44) {
  return FUNC_1(VAR_1, "No TCS34725 found.");
 }

 FUNC_2(VAR_1, 1);
 return 1;
}
