
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;
typedef int lua_State ;
typedef int lua_Number ;
typedef int TValue ;
typedef int TMS ;
typedef int StkId ;
 int FUNC_0 (int *,int const*,int const*,int ,int) ;
 int FUNC_1 (int *,int ,int ) ;
 int * FUNC_2 (int const*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int const*) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int const*) ;
 int FUNC_14 (int ,int ) ;

__attribute__((used)) static void FUNC_15 (lua_State *VAR_0, StkId VAR_1, const TValue *VAR_2,
                   const TValue *VAR_3, TMS VAR_4) {
  TValue VAR_5, VAR_6;
  const TValue *VAR_7, *VAR_8;
  if ((VAR_7 = FUNC_2(VAR_2, &VAR_5)) != ((void*)0) &&
      (VAR_8 = FUNC_2(VAR_3, &VAR_6)) != ((void*)0)) {
    lua_Number VAR_9 = FUNC_11(VAR_7), VAR_10 = FUNC_11(VAR_8);
    switch (VAR_4) {
      case 134: FUNC_14(VAR_1, FUNC_6(VAR_9, VAR_10)); break;
      case 129: FUNC_14(VAR_1, FUNC_9(VAR_9, VAR_10)); break;
      case 131: FUNC_14(VAR_1, FUNC_7(VAR_9, VAR_10)); break;
      case 133: FUNC_14(VAR_1, FUNC_4(VAR_9, VAR_10)); break;
      case 132: FUNC_14(VAR_1, FUNC_5(VAR_9, VAR_10)); break;
      case 130: FUNC_14(VAR_1, FUNC_8(VAR_9, VAR_10)); break;
      case 128: FUNC_14(VAR_1, FUNC_10(VAR_9)); break;
      default: FUNC_3(0); break;
    }
  }
  else {
    ptrdiff_t VAR_11 = FUNC_13(VAR_0, VAR_2);
    ptrdiff_t VAR_12 = FUNC_13(VAR_0, VAR_3);
    if (!FUNC_0(VAR_0, VAR_2, VAR_3, VAR_1, VAR_4)) {
      FUNC_1(VAR_0, FUNC_12(VAR_0, VAR_11), FUNC_12(VAR_0, VAR_12));
    }
  }
}
