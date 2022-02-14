
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 char* FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (char const*,char const*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_9(lua_State *VAR_3) {
 FUNC_4(VAR_3);
 while (FUNC_2(VAR_3, -2) != 0) {
  int VAR_4 = FUNC_7(VAR_3, -2);
  if (VAR_4 != VAR_1) {
   FUNC_1(VAR_2, "Invalid config table\n");
   FUNC_0(1);
  }
  const char * VAR_5 = FUNC_6(VAR_3,-2);
  if (FUNC_7(VAR_3,-1) == VAR_0) {
   int VAR_6 = FUNC_5(VAR_3,-1);
   FUNC_8(VAR_5,VAR_6 ? "true" : "false" );
  } else {
   const char * VAR_7 = FUNC_6(VAR_3,-1);
   if (VAR_7 == ((void*)0)) {
    FUNC_1(VAR_2, "Invalid config table key = %s\n", VAR_5);
    FUNC_0(1);
   }
   FUNC_8(VAR_5,VAR_7);
  }
  FUNC_3(VAR_3,1);
 }
 FUNC_3(VAR_3,1);
}
