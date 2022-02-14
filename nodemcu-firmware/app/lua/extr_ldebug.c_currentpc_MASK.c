
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int savedpc; TYPE_3__* ci; } ;
typedef TYPE_2__ lua_State ;
struct TYPE_9__ {int p; } ;
struct TYPE_12__ {TYPE_1__ l; } ;
struct TYPE_11__ {int savedpc; } ;
typedef TYPE_3__ CallInfo ;


 TYPE_7__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3 (lua_State *VAR_0, CallInfo *VAR_1) {
  if (!FUNC_1(VAR_1)) return -1;
  if (VAR_1 == VAR_0->ci)
    VAR_1->savedpc = VAR_0->savedpc;
  return FUNC_2(VAR_1->savedpc, FUNC_0(VAR_1)->l.p);
}
