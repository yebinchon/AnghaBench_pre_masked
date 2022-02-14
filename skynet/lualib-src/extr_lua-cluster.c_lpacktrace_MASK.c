
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,int*,size_t) ;
 char* FUNC_1 (int *,int,size_t*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char const*,size_t) ;
 int FUNC_4 (int*,char const*,size_t) ;

__attribute__((used)) static int
FUNC_5(lua_State *VAR_1) {
 size_t VAR_2;
 const char * VAR_3 = FUNC_1(VAR_1, 1, &VAR_2);
 if (VAR_2 > 0x8000) {
  return FUNC_2(VAR_1, "trace tag is too long : %d", (int) VAR_2);
 }
 uint8_t VAR_4[VAR_0];
 VAR_4[2] = 4;
 FUNC_0(VAR_1, VAR_4, VAR_2+1);
 FUNC_4(VAR_4+3, VAR_3, VAR_2);
 FUNC_3(VAR_1, (const char *)VAR_4, VAR_2+3);
 return 1;
}
