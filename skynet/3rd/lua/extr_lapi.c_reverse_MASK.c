
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int TValue ;
typedef scalar_t__ StkId ;


 int FUNC_0 (int *,int *,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__,int *) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3 (lua_State *VAR_0, StkId VAR_1, StkId VAR_2) {
  for (; VAR_1 < VAR_2; VAR_1++, VAR_2--) {
    TValue VAR_3;
    FUNC_0(VAR_0, &VAR_3, VAR_1);
    FUNC_2(VAR_0, VAR_1, VAR_2);
    FUNC_1(VAR_0, VAR_2, &VAR_3);
  }
}
