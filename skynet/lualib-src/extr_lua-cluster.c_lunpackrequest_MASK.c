
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int lua_State ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int) ;
 char* FUNC_1 (int *,int,size_t*) ;
 int FUNC_2 (int *,char*,char const) ;
 scalar_t__ FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int const*,int,int) ;
 int FUNC_6 (int *,int const*,int) ;
 int FUNC_7 (int *,int const*,int,int) ;
 int FUNC_8 (int *,int const*,int) ;
 int FUNC_9 (int *,int const*,int) ;
 int FUNC_10 (int *,char const*,int) ;

__attribute__((used)) static int
FUNC_11(lua_State *VAR_1) {
 int VAR_2;
 const char *VAR_3;
 if (FUNC_4(VAR_1, 1) == VAR_0) {
  VAR_3 = (const char *)FUNC_3(VAR_1, 1);
  VAR_2 = FUNC_0(VAR_1, 2);
 } else {
  size_t VAR_4;
  VAR_3 = FUNC_1(VAR_1,1,&VAR_4);
  VAR_2 = (int)VAR_4;
 }
 switch (VAR_3[0]) {
 case 0:
  return FUNC_8(VAR_1, (const uint8_t *)VAR_3, VAR_2);
 case 1:
  return FUNC_5(VAR_1, (const uint8_t *)VAR_3, VAR_2, 0);
 case '\x41':
  return FUNC_5(VAR_1, (const uint8_t *)VAR_3, VAR_2, 1);
 case 2:
 case 3:
  return FUNC_6(VAR_1, (const uint8_t *)VAR_3, VAR_2);
 case 4:
  return FUNC_10(VAR_1, VAR_3, VAR_2);
 case '\x80':
  return FUNC_9(VAR_1, (const uint8_t *)VAR_3, VAR_2);
 case '\x81':
  return FUNC_7(VAR_1, (const uint8_t *)VAR_3, VAR_2, 0 );
 case '\xc1':
  return FUNC_7(VAR_1, (const uint8_t *)VAR_3, VAR_2, 1 );
 default:
  return FUNC_2(VAR_1, "Invalid req package type %d", VAR_3[0]);
 }
}
