
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_5__ {struct TYPE_5__* metatable; } ;
typedef TYPE_1__ Table ;
typedef int TValue ;
typedef int StkId ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int const*,int const*,int *) ;
 int * FUNC_1 (int *,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_2 (int const*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int const*,char*) ;
 int * FUNC_5 (TYPE_1__*,int *) ;
 int * FUNC_6 (void*,int *) ;
 scalar_t__ FUNC_7 (void*) ;
 int * FUNC_8 (int *,int const*,int ) ;
 void* FUNC_9 (int const*) ;
 int FUNC_10 (int *,int *,int const*) ;
 int FUNC_11 (int *,int ,int const*) ;
 scalar_t__ FUNC_12 (int const*) ;
 scalar_t__ FUNC_13 (int const*) ;
 scalar_t__ FUNC_14 (int const*) ;
 scalar_t__ FUNC_15 (int const*) ;
 scalar_t__ FUNC_16 (int const*) ;

void FUNC_17 (lua_State *VAR_2, const TValue *VAR_3, TValue *VAR_4, StkId VAR_5) {
  int VAR_6;
  TValue VAR_7;
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
    const TValue *VAR_8;

    if (FUNC_16(VAR_3)) {
      Table *VAR_9 = FUNC_2(VAR_3);
      const TValue *VAR_10 = FUNC_5(VAR_9, VAR_4);
      if (!FUNC_14(VAR_10) ||
          (VAR_8 = FUNC_1(VAR_2, VAR_9->metatable, VAR_1)) == ((void*)0)) {
        FUNC_11(VAR_2, VAR_5, VAR_10);
        return;
      }

    } else if (FUNC_15(VAR_3)) {
      void *VAR_11 = FUNC_9(VAR_3);
      const TValue *VAR_12 = FUNC_6(VAR_11, VAR_4);
      if (!FUNC_14(VAR_12) ||
          (VAR_8 = FUNC_1(VAR_2, (Table*)FUNC_7(VAR_11), VAR_1)) == ((void*)0)) {
        FUNC_11(VAR_2, VAR_5, VAR_12);
        return;
      }

    }
    else if (FUNC_14(VAR_8 = FUNC_8(VAR_2, VAR_3, VAR_1)))
        FUNC_4(VAR_2, VAR_3, "index");

    if (FUNC_12(VAR_8) || FUNC_13(VAR_8)) {
      FUNC_0(VAR_2, VAR_5, VAR_8, VAR_3, VAR_4);
      return;
    }

    FUNC_10(VAR_2, &VAR_7, VAR_8);
    VAR_3 = &VAR_7;
  }
  FUNC_3(VAR_2, "loop in gettable");
}
