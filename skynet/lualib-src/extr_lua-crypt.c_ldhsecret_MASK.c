
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int lua_State ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_4(lua_State *VAR_0) {
 uint32_t VAR_1[2], VAR_2[2];
 FUNC_3(VAR_0, VAR_1, VAR_2);
 uint64_t VAR_3 = (uint64_t)VAR_1[0] | (uint64_t)VAR_1[1]<<32;
 uint64_t VAR_4 = (uint64_t)VAR_2[0] | (uint64_t)VAR_2[1]<<32;
 if (VAR_3 == 0 || VAR_4 == 0)
  return FUNC_0(VAR_0, "Can't be 0");
 uint64_t VAR_5 = FUNC_1(VAR_3, VAR_4);

 FUNC_2(VAR_0, VAR_5);

 return 1;
}
