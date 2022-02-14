
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_39__ TYPE_7__ ;
typedef struct TYPE_38__ TYPE_6__ ;
typedef struct TYPE_37__ TYPE_5__ ;
typedef struct TYPE_36__ TYPE_4__ ;
typedef struct TYPE_35__ TYPE_3__ ;
typedef struct TYPE_34__ TYPE_2__ ;
typedef struct TYPE_33__ TYPE_1__ ;


struct TYPE_33__ {TYPE_6__* gclist; } ;
typedef TYPE_1__ lua_State ;
typedef scalar_t__ lu_mem ;
struct TYPE_34__ {int GCmemtrav; TYPE_6__* gray; int grayagain; } ;
typedef TYPE_2__ global_State ;
struct TYPE_35__ {TYPE_6__* gclist; } ;
typedef TYPE_3__ Table ;
struct TYPE_39__ {TYPE_6__* gclist; } ;
struct TYPE_38__ {int tt; } ;
struct TYPE_37__ {TYPE_6__* gclist; } ;
struct TYPE_36__ {TYPE_6__* gclist; } ;
typedef TYPE_4__ Proto ;
typedef TYPE_5__ LClosure ;
typedef TYPE_6__ GCObject ;
typedef TYPE_7__ CClosure ;







 int FUNC_0 (TYPE_6__*) ;
 TYPE_7__* FUNC_1 (TYPE_6__*) ;
 TYPE_5__* FUNC_2 (TYPE_6__*) ;
 TYPE_4__* FUNC_3 (TYPE_6__*) ;
 TYPE_3__* FUNC_4 (TYPE_6__*) ;
 TYPE_1__* FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (TYPE_2__*,TYPE_7__*) ;
 scalar_t__ FUNC_11 (TYPE_2__*,TYPE_5__*) ;
 scalar_t__ FUNC_12 (TYPE_2__*,TYPE_4__*) ;
 scalar_t__ FUNC_13 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_14 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_15 (global_State *VAR_0) {
  lu_mem VAR_1;
  GCObject *VAR_2 = VAR_0->gray;
  FUNC_9(FUNC_7(VAR_2));
  FUNC_6(VAR_2);
  switch (VAR_2->tt) {
    case 129: {
      Table *VAR_3 = FUNC_4(VAR_2);
      VAR_0->gray = VAR_3->gclist;
      VAR_1 = FUNC_13(VAR_0, VAR_3);
      break;
    }
    case 131: {
      LClosure *VAR_4 = FUNC_2(VAR_2);
      VAR_0->gray = VAR_4->gclist;
      VAR_1 = FUNC_11(VAR_0, VAR_4);
      break;
    }
    case 132: {
      CClosure *VAR_5 = FUNC_1(VAR_2);
      VAR_0->gray = VAR_5->gclist;
      VAR_1 = FUNC_10(VAR_0, VAR_5);
      break;
    }
    case 128: {
      lua_State *VAR_6 = FUNC_5(VAR_2);
      VAR_0->gray = VAR_6->gclist;
      FUNC_8(VAR_6, VAR_0->grayagain);
      FUNC_0(VAR_2);
      VAR_1 = FUNC_14(VAR_0, VAR_6);
      break;
    }
    case 130: {
      Proto *VAR_7 = FUNC_3(VAR_2);
      VAR_0->gray = VAR_7->gclist;
      VAR_1 = FUNC_12(VAR_0, VAR_7);
      break;
    }
    default: FUNC_9(0); return;
  }
  VAR_0->GCmemtrav += VAR_1;
}
