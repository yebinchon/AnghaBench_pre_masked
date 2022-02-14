
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int * document ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,...) ;
 scalar_t__ FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,int) ;
 int * FUNC_7 (int *,int) ;

__attribute__((used)) static int
FUNC_8(lua_State *VAR_0) {
 if (FUNC_3(VAR_0, 3)) {
  document VAR_1 = FUNC_7(VAR_0,3);
  return FUNC_0(VAR_1);
 }
 if (FUNC_2(VAR_0,3)) {
  int VAR_2 = 0;
  int VAR_3 = FUNC_6(VAR_0,3);
  int VAR_4;
  for (VAR_4=1;VAR_4<=VAR_3;VAR_4++) {
   FUNC_5(VAR_0, 3, VAR_4);
   document VAR_5 = FUNC_7(VAR_0,-1);
   if (VAR_5 == ((void*)0)) {
    FUNC_4(VAR_0,1);
    return FUNC_1(VAR_0, "Invalid document at %d", VAR_4);
   } else {
    VAR_2 += FUNC_0(VAR_5);
    FUNC_4(VAR_0,1);
   }
  }
  return VAR_2;
 }
 return FUNC_1(VAR_0, "Insert need documents");
}
