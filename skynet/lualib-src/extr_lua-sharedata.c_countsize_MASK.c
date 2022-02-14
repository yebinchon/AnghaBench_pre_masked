
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_Integer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static int
FUNC_9(lua_State *VAR_3, int VAR_4) {
 int VAR_5 = 0;
 FUNC_4(VAR_3);
 while (FUNC_2(VAR_3, 1) != 0) {
  int VAR_6 = FUNC_7(VAR_3, -2);
  ++VAR_5;
  if (VAR_6 == VAR_0) {
   if (!FUNC_1(VAR_3, -2)) {
    FUNC_0(VAR_3, "Invalid key %f", FUNC_6(VAR_3, -2));
   }
   lua_Integer VAR_7 = FUNC_5(VAR_3, -2);
   if (VAR_7 > 0 && VAR_7 <= VAR_4) {
    --VAR_5;
   }
  } else if (VAR_6 != VAR_1 && VAR_6 != VAR_2) {
   FUNC_0(VAR_3, "Invalid key type %s", FUNC_8(VAR_3, VAR_6));
  }
  FUNC_3(VAR_3, 1);
 }

 return VAR_5;
}
