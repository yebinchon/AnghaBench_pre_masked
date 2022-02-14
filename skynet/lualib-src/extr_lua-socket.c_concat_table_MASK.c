
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int) ;
 char* FUNC_3 (int *,int,size_t*) ;
 int FUNC_4 (char*,char const*,size_t) ;
 int FUNC_5 (void*) ;

__attribute__((used)) static void
FUNC_6(lua_State *VAR_1, int VAR_2, void *VAR_3, size_t VAR_4) {
 char *VAR_5 = VAR_3;
 int VAR_6;
 for (VAR_6=1;FUNC_1(VAR_1, VAR_2, VAR_6) != VAR_0; ++VAR_6) {
  size_t VAR_7;
  const char * VAR_8 = FUNC_3(VAR_1, -1, &VAR_7);
  if (VAR_8 == ((void*)0) || VAR_4 < VAR_7) {
   break;
  }
  FUNC_4(VAR_5, VAR_8, VAR_7);
  VAR_5 += VAR_7;
  VAR_4 -= VAR_7;
  FUNC_2(VAR_1,1);
 }
 if (VAR_4 != 0) {
  FUNC_5(VAR_3);
  FUNC_0(VAR_1, "Invalid strings table");
 }
 FUNC_2(VAR_1,1);
}
