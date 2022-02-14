
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int) ;
 char* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int*,char const*,int) ;

__attribute__((used)) static int
FUNC_4(lua_State *VAR_0) {
 const char * VAR_1 = FUNC_1(VAR_0, 1);
 int VAR_2 = 0;
 FUNC_3(&VAR_2, VAR_1, sizeof(int));
 int VAR_3 = FUNC_0(VAR_2);
 FUNC_2(VAR_0, VAR_3 - 4);
 return 1;
}
