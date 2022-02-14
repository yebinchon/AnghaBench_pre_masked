
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef void* uint32_t ;
typedef int lua_State ;
typedef size_t lua_Integer ;


 char* FUNC_0 (int *,int,size_t*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,size_t) ;
 int FUNC_3 (int *,char const*,size_t) ;
 void* FUNC_4 (int const*) ;

__attribute__((used)) static int
FUNC_5(lua_State *VAR_0) {
 size_t VAR_1;
 const char * VAR_2 = FUNC_0(VAR_0, 1, &VAR_1);
 if (VAR_1 < 5) {
  return 0;
 }
 uint32_t VAR_3 = FUNC_4((const uint8_t *)VAR_2);
 FUNC_2(VAR_0, (lua_Integer)VAR_3);
 switch(VAR_2[4]) {
 case 0:
  FUNC_1(VAR_0, 0);
  FUNC_3(VAR_0, VAR_2+5, VAR_1-5);
  return 3;
 case 1:
 case 4:
  FUNC_1(VAR_0, 1);
  FUNC_3(VAR_0, VAR_2+5, VAR_1-5);
  return 3;
 case 2:
  if (VAR_1 != 9) {
   return 0;
  }
  VAR_1 = FUNC_4((const uint8_t *)VAR_2+5);
  FUNC_1(VAR_0, 1);
  FUNC_2(VAR_0, VAR_1);
  FUNC_1(VAR_0, 1);
  return 4;
 case 3:
  FUNC_1(VAR_0, 1);
  FUNC_3(VAR_0, VAR_2+5, VAR_1-5);
  FUNC_1(VAR_0, 1);
  return 4;
 default:
  return 0;
 }
}
