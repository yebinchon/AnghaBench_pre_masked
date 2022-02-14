
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int lua_State ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,size_t) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,char const*,size_t) ;
 int * FUNC_4 (size_t) ;
 char* FUNC_5 (int *,size_t*,int) ;
 int FUNC_6 (int *,size_t) ;

__attribute__((used)) static int
FUNC_7(lua_State *VAR_0) {
 size_t VAR_1;
 const char * VAR_2 = FUNC_5(VAR_0, &VAR_1, 1);
 if (VAR_1 >= 0x10000) {
  return FUNC_0(VAR_0, "Invalid size (too long) of data : %d", (int)VAR_1);
 }

 uint8_t * VAR_3 = FUNC_4(VAR_1 + 2);
 FUNC_6(VAR_3, VAR_1);
 FUNC_3(VAR_3+2, VAR_2, VAR_1);

 FUNC_2(VAR_0, VAR_3);
 FUNC_1(VAR_0, VAR_1 + 2);

 return 2;
}
