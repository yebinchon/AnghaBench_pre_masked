
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int top; } ;
typedef TYPE_3__ lua_State ;
typedef int Table ;
struct TYPE_13__ {TYPE_1__* p; } ;
struct TYPE_15__ {TYPE_2__ l; } ;
struct TYPE_12__ {int* lineinfo; int sizelineinfo; } ;
typedef int TValue ;
typedef TYPE_4__ Closure ;


 int FUNC_0 (TYPE_3__*) ;
 int * FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int *,int,int *) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (TYPE_3__*,int ,int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7 (lua_State *VAR_0, Closure *VAR_1) {
  if (FUNC_3(VAR_1)) {
    FUNC_6(VAR_0->top);
    FUNC_0(VAR_0);
  }
  else {
    int VAR_2;
    TValue VAR_3;
    int *VAR_4 = VAR_1->l.p->lineinfo;
    Table *VAR_5 = FUNC_1(VAR_0);
    FUNC_5(VAR_0, VAR_0->top, VAR_5);
    FUNC_0(VAR_0);
    FUNC_4(&VAR_3, 1);
    for (VAR_2 = 0; VAR_2 < VAR_1->l.p->sizelineinfo; VAR_2++)
      FUNC_2(VAR_0, VAR_5, VAR_4[VAR_2], &VAR_3);
  }
}
