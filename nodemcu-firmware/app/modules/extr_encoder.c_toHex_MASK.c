
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int lua_State ;


 scalar_t__ FUNC_0 (int *,size_t) ;
 void* FUNC_1 (int const) ;

__attribute__((used)) static uint8 *FUNC_2 ( lua_State* VAR_0, const uint8 *VAR_1, size_t *VAR_2){
  int VAR_3, VAR_4 = *VAR_2;
  *VAR_2 <<= 1;
  uint8 *VAR_5, *VAR_6 = (uint8 *)FUNC_0(VAR_0, *VAR_2);
  for (VAR_3 = 0, VAR_5 = VAR_6; VAR_3 < VAR_4; VAR_3++) {
    *VAR_5++ = FUNC_1(VAR_1[VAR_3] >> 4);
    *VAR_5++ = FUNC_1(VAR_1[VAR_3] & 0xf);
  }
  return VAR_6;
}
