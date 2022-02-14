
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef scalar_t__ lua_Integer ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,int,int,char*) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int,int ) ;
 int FUNC_4 (int *,int,scalar_t__) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int,scalar_t__) ;

__attribute__((used)) static int FUNC_8 (lua_State *VAR_4) {
  lua_Integer VAR_5 = FUNC_2(VAR_4, 2);
  lua_Integer VAR_6 = FUNC_2(VAR_4, 3);
  lua_Integer VAR_7 = FUNC_2(VAR_4, 4);
  int VAR_8 = !FUNC_5(VAR_4, 5) ? 5 : 1;
  FUNC_0(VAR_4, 1, VAR_2);
  FUNC_0(VAR_4, VAR_8, VAR_3);
  if (VAR_6 >= VAR_5) {
    lua_Integer VAR_9, VAR_10;
    FUNC_1(VAR_4, VAR_5 > 0 || VAR_6 < VAR_0 + VAR_5, 3,
                  "too many elements to move");
    VAR_9 = VAR_6 - VAR_5 + 1;
    FUNC_1(VAR_4, VAR_7 <= VAR_0 - VAR_9 + 1, 4,
                  "destination wrap around");
    if (VAR_7 > VAR_6 || VAR_7 <= VAR_5 || (VAR_8 != 1 && !FUNC_3(VAR_4, 1, VAR_8, VAR_1))) {
      for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
        FUNC_4(VAR_4, 1, VAR_5 + VAR_10);
        FUNC_7(VAR_4, VAR_8, VAR_7 + VAR_10);
      }
    }
    else {
      for (VAR_10 = VAR_9 - 1; VAR_10 >= 0; VAR_10--) {
        FUNC_4(VAR_4, 1, VAR_5 + VAR_10);
        FUNC_7(VAR_4, VAR_8, VAR_7 + VAR_10);
      }
    }
  }
  FUNC_6(VAR_4, VAR_8);
  return 1;
}
