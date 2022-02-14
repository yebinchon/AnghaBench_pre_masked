
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int luaL_Buffer ;


 int FUNC_0 (int *,size_t) ;
 char* FUNC_1 (int *,int *,size_t) ;
 char* FUNC_2 (int *,int,size_t*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(lua_State *VAR_0) {
 size_t VAR_1,VAR_2;
 const char *VAR_3 = FUNC_2(VAR_0,1,&VAR_1);
 const char *VAR_4 = FUNC_2(VAR_0,2,&VAR_2);
 if (VAR_2 == 0) {
  return FUNC_3(VAR_0, "Can't xor empty string");
 }
 luaL_Buffer VAR_5;
 char * VAR_6 = FUNC_1(VAR_0, &VAR_5, VAR_1);
 int VAR_7;
 for (VAR_7=0;VAR_7<VAR_1;VAR_7++) {
  VAR_6[VAR_7] = VAR_3[VAR_7] ^ VAR_4[VAR_7 % VAR_2];
 }
 FUNC_0(&VAR_5, VAR_1);
 FUNC_4(&VAR_5);
 return 1;
}
