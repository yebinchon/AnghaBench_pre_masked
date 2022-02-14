
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int lua_State ;


 int FUNC_0 (char const*,int,int *) ;
 char* FUNC_1 (int *,int,size_t*) ;
 int FUNC_2 (int *,char const*,int) ;

__attribute__((used)) static int
FUNC_3(lua_State *VAR_0) {
 size_t VAR_1 = 0;
 const char * VAR_2 = FUNC_1(VAR_0, 1, &VAR_1);
 uint8_t VAR_3[8];
 FUNC_0(VAR_2,(int)VAR_1,VAR_3);
 FUNC_2(VAR_0, (const char *)VAR_3, 8);
 return 1;
}
