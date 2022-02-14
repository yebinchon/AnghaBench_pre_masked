
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int lua_State ;


 int FUNC_0 (int const,int const,int const) ;
 int FUNC_1 (int *,int,int,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(lua_State *VAR_0) {

  const int VAR_1 = FUNC_2(VAR_0, 1);
  const int VAR_2 = FUNC_2(VAR_0, 2);
  const int VAR_3 = FUNC_2(VAR_0, 3);

  FUNC_1(VAR_0, VAR_1 == VAR_2 && VAR_1 == VAR_3, 1, "greyscale value cannot be converted to hsv");

  uint32_t VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);

  uint16_t VAR_5 = (VAR_4 & 0xFFFF0000) >> 16;
  uint8_t VAR_6 = (VAR_4 & 0x0000FF00) >> 8;
  uint8_t VAR_7 = (VAR_4 & 0x000000FF) >> 0;


  FUNC_3(VAR_0, VAR_5);
  FUNC_3(VAR_0, VAR_6);
  FUNC_3(VAR_0, VAR_7);

  return 3;
}
