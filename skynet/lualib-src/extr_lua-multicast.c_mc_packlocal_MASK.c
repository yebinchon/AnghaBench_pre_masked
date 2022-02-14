
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef int lua_State ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*) ;
 void* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,void*,size_t) ;

__attribute__((used)) static int
FUNC_4(lua_State *VAR_0) {
 void * VAR_1 = FUNC_2(VAR_0, 1);
 size_t VAR_2 = (size_t)FUNC_0(VAR_0, 2);
 if (VAR_2 != (uint32_t)VAR_2) {
  return FUNC_1(VAR_0, "Size should be 32bit integer");
 }
 return FUNC_3(VAR_0, VAR_1, VAR_2);
}
