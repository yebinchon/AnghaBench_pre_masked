
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ top; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_20__ {scalar_t__ flags; int metatable; } ;
typedef TYPE_2__ Table ;
typedef int const TValue ;
typedef int StkId ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int const*,int const*,int const*,int ) ;
 int const* FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_2__* FUNC_3 (int const*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*,int const*,char*) ;
 int const* FUNC_7 (TYPE_1__*,TYPE_2__*,int const*) ;
 int const* FUNC_8 (TYPE_1__*,int const*,int ) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (TYPE_1__*,int const*,int const*) ;
 int FUNC_11 (TYPE_1__*,scalar_t__,int const*) ;
 int FUNC_12 (TYPE_1__*,int const*,int ) ;
 scalar_t__ FUNC_13 (int const*) ;
 scalar_t__ FUNC_14 (int const*) ;
 scalar_t__ FUNC_15 (int const*) ;
 scalar_t__ FUNC_16 (int const*) ;
 scalar_t__ FUNC_17 (int const*) ;
 int FUNC_18 (TYPE_1__*) ;

void FUNC_19 (lua_State *VAR_2, const TValue *VAR_3, TValue *VAR_4, StkId VAR_5) {
  int VAR_6;
  TValue VAR_7;
  FUNC_9(VAR_2->top);
  VAR_2->top++;
  FUNC_2(VAR_2);
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
    const TValue *VAR_8 = ((void*)0);
    if (FUNC_17(VAR_3)) {
      Table *VAR_9 = FUNC_3(VAR_3);
      TValue *VAR_10 = FUNC_7(VAR_2, VAR_9, VAR_4);
      if ((!FUNC_15(VAR_10)) ||
          (VAR_8 = FUNC_1(VAR_2, VAR_9->metatable, VAR_1)) == ((void*)0)) {
        VAR_2->top--;
        FUNC_18(VAR_2);
        FUNC_12(VAR_2, VAR_10, VAR_5);
        ((Table *)VAR_9)->flags = 0;
        FUNC_4(VAR_2, (Table*)VAR_9, VAR_5);
        return;
      }

    }
    else if (FUNC_16(VAR_3)) {
      FUNC_5(VAR_2, "invalid write to ROM variable");
    }
    else if (FUNC_15(VAR_8 = FUNC_8(VAR_2, VAR_3, VAR_1)))
      FUNC_6(VAR_2, VAR_3, "index");

    if (FUNC_13(VAR_8) || FUNC_14(VAR_8)) {
      VAR_2->top--;
      FUNC_18(VAR_2);
      FUNC_0(VAR_2, VAR_8, VAR_3, VAR_4, VAR_5);
      return;
    }

    FUNC_10(VAR_2, &VAR_7, VAR_8);
    VAR_3 = &VAR_7;
    FUNC_11(VAR_2, VAR_2->top-1, VAR_3);
  }
  FUNC_5(VAR_2, "loop in settable");
}
