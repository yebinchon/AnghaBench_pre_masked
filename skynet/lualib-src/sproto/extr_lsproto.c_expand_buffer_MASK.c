
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 void* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void *
FUNC_5(lua_State *VAR_1, int VAR_2, int VAR_3) {
 void *VAR_4;
 do {
  VAR_2 *= 2;
 } while (VAR_2 < VAR_3);
 if (VAR_2 > VAR_0) {
  FUNC_0(VAR_1, "object is too large (>%d)", VAR_0);
  return ((void*)0);
 }
 VAR_4 = FUNC_1(VAR_1, VAR_2);
 FUNC_3(VAR_1, FUNC_4(1));
 FUNC_2(VAR_1, VAR_2);
 FUNC_3(VAR_1, FUNC_4(2));

 return VAR_4;
}
