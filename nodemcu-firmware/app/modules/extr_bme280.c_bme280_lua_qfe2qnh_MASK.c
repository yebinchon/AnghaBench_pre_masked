
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int int32_t ;


 double FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(lua_State* VAR_0) {
 if (!FUNC_3(VAR_0, 2)) {
  return FUNC_2(VAR_0, "wrong arg range");
 }
 int32_t VAR_1 = FUNC_1(VAR_0, 1);
 int32_t VAR_2 = FUNC_1(VAR_0, 2);
 double VAR_3 = FUNC_0(VAR_1, VAR_2);
 FUNC_4(VAR_0, (int32_t)(VAR_3 + 0.5));
 return 1;
}
