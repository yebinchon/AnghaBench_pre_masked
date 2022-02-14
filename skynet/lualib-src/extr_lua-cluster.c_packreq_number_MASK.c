
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int*,int) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int *,char const*,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int*,void*,int) ;

__attribute__((used)) static int
FUNC_5(lua_State *VAR_2, int VAR_3, void * VAR_4, uint32_t VAR_5, int VAR_6) {
 uint32_t VAR_7 = (uint32_t)FUNC_3(VAR_2,1);
 uint8_t VAR_8[VAR_1];
 if (VAR_5 < VAR_0) {
  FUNC_0(VAR_2, VAR_8, VAR_5+9);
  VAR_8[2] = 0;
  FUNC_1(VAR_8+3, VAR_7);
  FUNC_1(VAR_8+7, VAR_6 ? 0 : (uint32_t)VAR_3);
  FUNC_4(VAR_8+11,VAR_4,VAR_5);

  FUNC_2(VAR_2, (const char *)VAR_8, VAR_5+11);
  return 0;
 } else {
  int VAR_9 = (VAR_5 - 1) / VAR_0 + 1;
  FUNC_0(VAR_2, VAR_8, 13);
  VAR_8[2] = VAR_6 ? 0x41 : 1;
  FUNC_1(VAR_8+3, VAR_7);
  FUNC_1(VAR_8+7, (uint32_t)VAR_3);
  FUNC_1(VAR_8+11, VAR_5);
  FUNC_2(VAR_2, (const char *)VAR_8, 15);
  return VAR_9;
 }
}
