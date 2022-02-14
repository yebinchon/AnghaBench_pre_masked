
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int) ;
 char* FUNC_6 (int *,int,size_t*) ;
 int FUNC_7 (char*,char const*,size_t) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (int) ;

__attribute__((used)) static int
FUNC_10(lua_State *VAR_2) {
 if (!FUNC_1(VAR_2,1))
  return 0;
 if (FUNC_0(VAR_2,1,1) != VAR_0)
  return 0;
 int VAR_3 = FUNC_5(VAR_2,-1);
 FUNC_2(VAR_2,1);
 char * VAR_4 = FUNC_9(VAR_3);
 int VAR_5 = 2;
 int VAR_6 = 0;
 while(FUNC_0(VAR_2,1,VAR_5) == VAR_1) {
  size_t VAR_7;
  const char * VAR_8 = FUNC_6(VAR_2, -1, &VAR_7);
  if (VAR_7+VAR_6 > VAR_3) {
   FUNC_8(VAR_4);
   return 0;
  }
  FUNC_7(VAR_4+VAR_6, VAR_8, VAR_7);
  FUNC_2(VAR_2,1);
  VAR_6 += VAR_7;
  ++VAR_5;
 }
 if (VAR_6 != VAR_3) {
  FUNC_8(VAR_4);
  return 0;
 }

 FUNC_4(VAR_2, VAR_4);
 FUNC_3(VAR_2, VAR_3);
 return 2;
}
