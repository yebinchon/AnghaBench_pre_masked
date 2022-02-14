
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_Number ;
typedef int TValue ;





 int FUNC_0 (int) ;
 int const* FUNC_1 (void*,int) ;
 int const* FUNC_2 (void*,int ) ;
 int const* VAR_0 ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int const*) ;

const TValue *FUNC_8 (void *VAR_1, const TValue *VAR_2) {
  switch (FUNC_7(VAR_2)) {
    case 130: return VAR_0;
    case 128: return FUNC_2(VAR_1, FUNC_6(VAR_2));
    case 129: {
      int VAR_3;
      lua_Number VAR_4 = FUNC_5(VAR_2);
      FUNC_3(VAR_3, VAR_4);
      if (FUNC_4(FUNC_0(VAR_3), FUNC_5(VAR_2)))
        return FUNC_1(VAR_1, VAR_3);

    }
    default: {
      return VAR_0;
    }
  }
}
