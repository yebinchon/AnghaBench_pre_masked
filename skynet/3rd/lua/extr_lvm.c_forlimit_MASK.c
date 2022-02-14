
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_Number ;
typedef scalar_t__ lua_Integer ;
typedef int TValue ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int const*,scalar_t__*,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int const*,int *) ;

__attribute__((used)) static int FUNC_3 (const TValue *VAR_2, lua_Integer *VAR_3, lua_Integer VAR_4,
                     int *VAR_5) {
  *VAR_5 = 0;
  if (!FUNC_0(VAR_2, VAR_3, (VAR_4 < 0 ? 2 : 1))) {
    lua_Number VAR_6;
    if (!FUNC_2(VAR_2, &VAR_6))
      return 0;
    if (FUNC_1(0, VAR_6)) {
      *VAR_3 = VAR_0;
      if (VAR_4 < 0) *VAR_5 = 1;
    }
    else {
      *VAR_3 = VAR_1;
      if (VAR_4 >= 0) *VAR_5 = 1;
    }
  }
  return 1;
}
