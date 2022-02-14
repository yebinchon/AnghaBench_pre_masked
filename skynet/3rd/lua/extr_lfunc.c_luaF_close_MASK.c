
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {TYPE_4__* openupval; } ;
typedef TYPE_3__ lua_State ;
struct TYPE_12__ {TYPE_4__* next; } ;
struct TYPE_13__ {int value; TYPE_1__ open; } ;
struct TYPE_15__ {scalar_t__ v; scalar_t__ refcount; TYPE_2__ u; } ;
typedef TYPE_4__ UpVal ;
typedef scalar_t__ StkId ;


 int FUNC_0 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int *,scalar_t__) ;
 int FUNC_4 (TYPE_4__*) ;

void FUNC_5 (lua_State *VAR_0, StkId VAR_1) {
  UpVal *VAR_2;
  while (VAR_0->openupval != ((void*)0) && (VAR_2 = VAR_0->openupval)->v >= VAR_1) {
    FUNC_2(FUNC_4(VAR_2));
    VAR_0->openupval = VAR_2->u.open.next;
    if (VAR_2->refcount == 0)
      FUNC_1(VAR_0, VAR_2);
    else {
      FUNC_3(VAR_0, &VAR_2->u.value, VAR_2->v);
      VAR_2->v = &VAR_2->u.value;
      FUNC_0(VAR_0, VAR_2);
    }
  }
}
