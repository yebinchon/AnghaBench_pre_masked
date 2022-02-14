
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ top; } ;
typedef TYPE_1__ lua_State ;
typedef int TValue ;


 int FUNC_0 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,int const*) ;

__attribute__((used)) static void FUNC_3 (lua_State *VAR_0, const TValue *VAR_1, const TValue *VAR_2,
                    const TValue *VAR_3, const TValue *VAR_4) {
  FUNC_2(VAR_0, VAR_0->top, VAR_1);
  FUNC_2(VAR_0, VAR_0->top+1, VAR_2);
  FUNC_2(VAR_0, VAR_0->top+2, VAR_3);
  FUNC_2(VAR_0, VAR_0->top+3, VAR_4);
  FUNC_1(VAR_0, 4);
  VAR_0->top += 4;
  FUNC_0(VAR_0, VAR_0->top - 4, 0);
}
