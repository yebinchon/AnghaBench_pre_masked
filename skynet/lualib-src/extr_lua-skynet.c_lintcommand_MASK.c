
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skynet_context {int dummy; } ;
typedef int lua_State ;
typedef int lua_Integer ;
typedef int int32_t ;


 int FUNC_0 (int *,int) ;
 char* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*,char const*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,double) ;
 struct skynet_context* FUNC_7 (int *,int ) ;
 int FUNC_8 (int) ;
 char* FUNC_9 (struct skynet_context*,char const*,char const*) ;
 int FUNC_10 (char*,char*,int) ;
 double FUNC_11 (char const*,char**) ;
 int FUNC_12 (char const*,char**,int ) ;

__attribute__((used)) static int
FUNC_13(lua_State *VAR_0) {
 struct skynet_context * VAR_1 = FUNC_7(VAR_0, FUNC_8(1));
 const char * VAR_2 = FUNC_1(VAR_0,1);
 const char * VAR_3;
 const char * VAR_4 = ((void*)0);
 char VAR_5[64];
 if (FUNC_3(VAR_0) == 2) {
  if (FUNC_4(VAR_0, 2)) {
   int32_t VAR_6 = (int32_t)FUNC_0(VAR_0,2);
   FUNC_10(VAR_5, "%d", VAR_6);
   VAR_4 = VAR_5;
  } else {
   VAR_4 = FUNC_1(VAR_0,2);
  }
 }

 VAR_3 = FUNC_9(VAR_1, VAR_2, VAR_4);
 if (VAR_3) {
  char *VAR_7 = ((void*)0);
  lua_Integer VAR_8 = FUNC_12(VAR_3, &VAR_7, 0);
  if (VAR_7 == ((void*)0) || *VAR_7 != '\0') {

   double VAR_9 = FUNC_11(VAR_3, &VAR_7);
   if (VAR_7 == ((void*)0) || *VAR_7 != '\0') {
    return FUNC_2(VAR_0, "Invalid result %s", VAR_3);
   } else {
    FUNC_6(VAR_0, VAR_9);
   }
  } else {
   FUNC_5(VAR_0, VAR_8);
  }
  return 1;
 }
 return 0;
}
