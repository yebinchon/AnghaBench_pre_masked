
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 scalar_t__* VAR_2 ;
 int FUNC_1 (int,scalar_t__*,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(lua_State* VAR_3)
{
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
    if (VAR_2[VAR_4] != VAR_0) {
      int32_t VAR_5;
      int32_t VAR_6;
      int32_t VAR_7;
      if (!FUNC_1( VAR_4, &VAR_5, &VAR_6, &VAR_7 )) {
 if (VAR_6 == 0 && VAR_5 == VAR_7) {
   FUNC_0(VAR_3, VAR_4);
 }
      }
    }
  }

  return 0;
}
