
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_Number ;
typedef int TValue ;
typedef int TMS ;
typedef int StkId ;
 int FUNC_0 (int *,int const*,int const*) ;
 int FUNC_1 (int *,int const*,int const*,char*) ;
 int FUNC_2 (int *,int const*,int const*) ;
 int FUNC_3 (int *,int const*,int const*,int ,int) ;
 int FUNC_4 (int const*,int *) ;

void FUNC_5 (lua_State *VAR_0, const TValue *VAR_1, const TValue *VAR_2,
                    StkId VAR_3, TMS VAR_4) {
  if (!FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4)) {
    switch (VAR_4) {
      case 130:
        FUNC_0(VAR_0, VAR_1, VAR_2);

      case 134: case 132: case 131:
      case 129: case 128: case 133: {
        lua_Number VAR_5;
        if (FUNC_4(VAR_1, &VAR_5) && FUNC_4(VAR_2, &VAR_5))
          FUNC_2(VAR_0, VAR_1, VAR_2);
        else
          FUNC_1(VAR_0, VAR_1, VAR_2, "perform bitwise operation on");
      }

      default:
        FUNC_1(VAR_0, VAR_1, VAR_2, "perform arithmetic on");
    }
  }
}
