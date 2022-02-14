
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_Integer ;
typedef int Table ;
typedef int TValue ;






 int const* FUNC_0 (int *,int const*) ;
 int FUNC_1 (int const*) ;
 int const* FUNC_2 (int *,int ) ;
 int const* FUNC_3 (int *,int ) ;
 int const* VAR_0 ;
 int FUNC_4 (int const*,int *,int ) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int const*) ;

const TValue *FUNC_7 (Table *VAR_1, const TValue *VAR_2) {
  switch (FUNC_6(VAR_2)) {
    case 128: return FUNC_3(VAR_1, FUNC_5(VAR_2));
    case 129: return FUNC_2(VAR_1, FUNC_1(VAR_2));
    case 131: return VAR_0;
    case 130: {
      lua_Integer VAR_3;
      if (FUNC_4(VAR_2, &VAR_3, 0))
        return FUNC_2(VAR_1, VAR_3);

    }
    default:
      return FUNC_0(VAR_1, VAR_2);
  }
}
