
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int tmp ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int,void const*,char*,int) ;
 scalar_t__ FUNC_1 (int *,int,size_t*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int const*,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(lua_State *VAR_2) {
 size_t VAR_3 = 0;
 const uint8_t * VAR_4 = (const uint8_t *)FUNC_1(VAR_2, 1, &VAR_3);
 uint16_t VAR_5 = 0;
 FUNC_5(&VAR_5, VAR_4+1, sizeof(uint16_t));
 VAR_5 = FUNC_6(VAR_5);
 const void * VAR_6 = VAR_4+3;
 char VAR_7[256];
 int VAR_8;
 if (VAR_3 == 1+2+4) {
  VAR_8 = VAR_0;
 } else {
  if (VAR_3 != 1+2+16) {
   return FUNC_2(VAR_2, "Invalid udp address");
  }
  VAR_8 = VAR_1;
 }
 if (FUNC_0(VAR_8, VAR_6, VAR_7, sizeof(VAR_7)) == ((void*)0)) {
  return FUNC_2(VAR_2, "Invalid udp address");
 }
 FUNC_4(VAR_2, VAR_7);
 FUNC_3(VAR_2, VAR_5);
 return 2;
}
