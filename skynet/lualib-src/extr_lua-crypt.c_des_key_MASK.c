
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int lua_State ;


 int FUNC_0 (int *,void const*) ;
 void* FUNC_1 (int *,int,size_t*) ;
 int FUNC_2 (int *,char*,int) ;

__attribute__((used)) static void
FUNC_3(lua_State *VAR_0, uint32_t VAR_1[32]) {
 size_t VAR_2 = 0;
 const void * VAR_3 = FUNC_1(VAR_0, 1, &VAR_2);
 if (VAR_2 != 8) {
  FUNC_2(VAR_0, "Invalid key size %d, need 8 bytes", (int)VAR_2);
 }
 FUNC_0(VAR_1, VAR_3);
}
