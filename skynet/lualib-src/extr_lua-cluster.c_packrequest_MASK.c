
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,int) ;
 void* FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int,void*,int) ;
 int FUNC_7 (int *,int,void*,int,int) ;
 int FUNC_8 (int *,int,void*,int,int) ;
 int FUNC_9 (void*) ;

__attribute__((used)) static int
FUNC_10(lua_State *VAR_2, int VAR_3) {
 void *VAR_4 = FUNC_4(VAR_2,3);
 if (VAR_4 == ((void*)0)) {
  return FUNC_1(VAR_2, "Invalid request message");
 }
 uint32_t VAR_5 = (uint32_t)FUNC_0(VAR_2,4);
 int VAR_6 = FUNC_0(VAR_2,2);
 if (VAR_6 <= 0) {
  FUNC_9(VAR_4);
  return FUNC_1(VAR_2, "Invalid request session %d", VAR_6);
 }
 int VAR_7 = FUNC_5(VAR_2,1);
 int VAR_8;
 if (VAR_7 == VAR_1) {
  VAR_8 = FUNC_7(VAR_2, VAR_6, VAR_4, VAR_5, VAR_3);
 } else {
  VAR_8 = FUNC_8(VAR_2, VAR_6, VAR_4, VAR_5, VAR_3);
 }
 uint32_t VAR_9 = (uint32_t)VAR_6 + 1;
 if (VAR_9 > VAR_0) {
  VAR_9 = 1;
 }
 FUNC_3(VAR_2, VAR_9);
 if (VAR_8) {
  FUNC_2(VAR_2, VAR_8, 0);
  FUNC_6(VAR_2, VAR_6, VAR_4, VAR_5);
  FUNC_9(VAR_4);
  return 3;
 } else {
  FUNC_9(VAR_4);
  return 2;
 }
}
