
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int lua_State ;







 int FUNC_0 (int *,int ,int const*,size_t) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,int) ;
 char* FUNC_3 (int *,int,size_t*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(lua_State *VAR_0) {
 int VAR_1 = FUNC_4(VAR_0,1);
 int VAR_2 = 0;
 switch (VAR_1) {
 case 130:
  VAR_2 = 1;
  break;
 case 132:
  VAR_2 = 2;
  break;
 case 128:
  VAR_2 = 3;
  break;
 case 131:
  FUNC_2(VAR_0, FUNC_6(4));
  return 1;
 case 129: {
  size_t VAR_3 = 0;
  const char * VAR_4 = FUNC_3(VAR_0,1,&VAR_3);
  if (VAR_4[0] == 0 && VAR_3 >= 2) {
   return FUNC_0(VAR_0, (uint8_t)VAR_4[1], (const uint8_t *)VAR_4+2, VAR_3-2);
  } else {
   VAR_2 = 5;
   break;
  }
 }
 default:
  return FUNC_1(VAR_0, "Invalid type %s",FUNC_5(VAR_0,VAR_1));
 }
 FUNC_2(VAR_0, FUNC_6(VAR_2));
 FUNC_2(VAR_0,1);
 return 2;
}
