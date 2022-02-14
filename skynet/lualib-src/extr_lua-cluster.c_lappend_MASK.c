
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char const*,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int,int) ;
 int FUNC_7 (int *,int) ;
 void* FUNC_8 (int *,int) ;
 int FUNC_9 (void*) ;

__attribute__((used)) static int
FUNC_10(lua_State *VAR_1) {
 FUNC_1(VAR_1, 1, VAR_0);
 int VAR_2 = FUNC_5(VAR_1, 1);
 if (FUNC_3(VAR_1, 2)) {
  FUNC_7(VAR_1, 3);
  FUNC_6(VAR_1, 1, VAR_2 + 1);
  return 0;
 }
 void * VAR_3 = FUNC_8(VAR_1, 2);
 if (VAR_3 == ((void*)0))
  return FUNC_2(VAR_1, "Need lightuserdata");
 int VAR_4 = FUNC_0(VAR_1, 3);
 FUNC_4(VAR_1, (const char *)VAR_3, VAR_4);
 FUNC_9((void *)VAR_3);
 FUNC_6(VAR_1, 1, VAR_2+1);
 return 0;
}
