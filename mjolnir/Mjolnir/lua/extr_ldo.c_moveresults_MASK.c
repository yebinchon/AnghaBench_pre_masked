
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* top; } ;
typedef TYPE_1__ lua_State ;
typedef int TValue ;
typedef void* StkId ;



 int * VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (TYPE_1__*,void*,int const*) ;

__attribute__((used)) static int FUNC_2 (lua_State *VAR_1, const TValue *VAR_2, StkId VAR_3,
                                      int VAR_4, int VAR_5) {
  switch (VAR_5) {
    case 0: break;
    case 1: {
      if (VAR_4 == 0)
        VAR_2 = VAR_0;
      FUNC_1(VAR_1, VAR_3, VAR_2);
      break;
    }
    case 128: {
      int VAR_6;
      for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
        FUNC_1(VAR_1, VAR_3 + VAR_6, VAR_2 + VAR_6);
      VAR_1->top = VAR_3 + VAR_4;
      return 0;
    }
    default: {
      int VAR_7;
      if (VAR_5 <= VAR_4) {
        for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
          FUNC_1(VAR_1, VAR_3 + VAR_7, VAR_2 + VAR_7);
      }
      else {
        for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
          FUNC_1(VAR_1, VAR_3 + VAR_7, VAR_2 + VAR_7);
        for (; VAR_7 < VAR_5; VAR_7++)
          FUNC_0(VAR_3 + VAR_7);
      }
      break;
    }
  }
  VAR_1->top = VAR_3 + VAR_5;
  return 1;
}
