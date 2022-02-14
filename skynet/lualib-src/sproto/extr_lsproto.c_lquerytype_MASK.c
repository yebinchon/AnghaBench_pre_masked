
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sproto_type {int dummy; } ;
struct sproto {int dummy; } ;
typedef int lua_State ;


 int FUNC_0 (int *,int,char*) ;
 char* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,struct sproto_type*) ;
 struct sproto* FUNC_3 (int *,int) ;
 struct sproto_type* FUNC_4 (struct sproto*,char const*) ;

__attribute__((used)) static int
FUNC_5(lua_State *VAR_0) {
 const char * VAR_1;
 struct sproto *VAR_2 = FUNC_3(VAR_0,1);
 struct sproto_type *VAR_3;
 if (VAR_2 == ((void*)0)) {
  return FUNC_0(VAR_0, 1, "Need a sproto object");
 }
 VAR_1 = FUNC_1(VAR_0,2);
 VAR_3 = FUNC_4(VAR_2, VAR_1);
 if (VAR_3) {
  FUNC_2(VAR_0, VAR_3);
  return 1;
 }
 return 0;
}
