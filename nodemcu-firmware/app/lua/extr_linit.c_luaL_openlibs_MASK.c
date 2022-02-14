
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ top; } ;
typedef TYPE_1__ lua_State ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,int) ;

void FUNC_9 (lua_State *VAR_1) {

  FUNC_7(VAR_1, FUNC_0(VAR_0));
  FUNC_6(VAR_1);




  while (FUNC_4(VAR_1, -2) != 0) {
    if (FUNC_3(VAR_1,-1) &&
        FUNC_1(VAR_1->top-1)) {
      FUNC_8(VAR_1, -2);
      FUNC_2(VAR_1, 1, 0);
    } else {
      FUNC_5(VAR_1, 1);
    }
  }
  FUNC_5(VAR_1, 1);
}
