
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int ptrdiff_t ;
struct TYPE_9__ {scalar_t__ top; int ci; } ;
typedef TYPE_1__ lua_State ;
typedef int const TValue ;
typedef scalar_t__ StkId ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,int) ;
 int const* FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int const*) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,int const*) ;
 int FUNC_6 (TYPE_1__*,int const*,scalar_t__) ;

void FUNC_7 (lua_State *VAR_0, const TValue *VAR_1, const TValue *VAR_2,
                  const TValue *VAR_3, TValue *VAR_4, int VAR_5) {
  ptrdiff_t VAR_6 = FUNC_4(VAR_0, VAR_4);
  StkId VAR_7 = VAR_0->top;
  FUNC_5(VAR_0, VAR_7, VAR_1);
  FUNC_5(VAR_0, VAR_7 + 1, VAR_2);
  FUNC_5(VAR_0, VAR_7 + 2, VAR_3);
  VAR_0->top += 3;
  if (!VAR_5)
    FUNC_5(VAR_0, VAR_0->top++, VAR_4);

  if (FUNC_0(VAR_0->ci))
    FUNC_1(VAR_0, VAR_7, VAR_5);
  else
    FUNC_2(VAR_0, VAR_7, VAR_5);
  if (VAR_5) {
    VAR_4 = FUNC_3(VAR_0, VAR_6);
    FUNC_6(VAR_0, VAR_4, --VAR_0->top);
  }
}
