
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_25__ ;
typedef struct TYPE_31__ TYPE_23__ ;
typedef struct TYPE_30__ TYPE_21__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_19__ ;
typedef struct TYPE_27__ TYPE_17__ ;


struct TYPE_34__ {TYPE_5__* gray; } ;
typedef TYPE_3__ global_State ;
struct TYPE_29__ {int value; } ;
struct TYPE_35__ {TYPE_1__ u; int * v; } ;
typedef TYPE_4__ UpVal ;
typedef int Table ;
struct TYPE_36__ {int gch; } ;
struct TYPE_33__ {TYPE_5__* gclist; } ;
struct TYPE_32__ {TYPE_2__ c; } ;
struct TYPE_31__ {TYPE_5__* gclist; } ;
struct TYPE_30__ {TYPE_5__* gclist; } ;
struct TYPE_28__ {TYPE_5__* gclist; } ;
struct TYPE_27__ {int * env; int * metatable; } ;
typedef TYPE_5__ GCObject ;
 TYPE_25__* FUNC_0 (TYPE_5__*) ;
 TYPE_23__* FUNC_1 (TYPE_5__*) ;
 TYPE_21__* FUNC_2 (TYPE_5__*) ;
 TYPE_19__* FUNC_3 (TYPE_5__*) ;
 TYPE_17__* FUNC_4 (TYPE_5__*) ;
 TYPE_4__* FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_5__*) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (TYPE_3__*,TYPE_5__*) ;
 scalar_t__ FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int) ;
 int FUNC_13 (TYPE_3__*,int *) ;
 int FUNC_14 (TYPE_3__*,int *) ;
 int FUNC_15 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_16 (global_State *VAR_0, GCObject *VAR_1) {

  if (FUNC_6(&VAR_1->gch) == 133 && FUNC_8(&(VAR_1->gch)))
    return;

  FUNC_12(FUNC_10(VAR_1) && !FUNC_9(VAR_0, VAR_1));
  FUNC_15(VAR_1);
  switch (FUNC_6(&VAR_1->gch)) {
    case 132: {
      return;
    }
    case 128: {
      Table *VAR_2 = FUNC_4(VAR_1)->metatable;
      FUNC_7(VAR_1);
      if (VAR_2 && !FUNC_11(VAR_2)) FUNC_13(VAR_0, VAR_2);
      FUNC_13(VAR_0, FUNC_4(VAR_1)->env);
      return;
    }
    case 129: {
      UpVal *VAR_3 = FUNC_5(VAR_1);
      FUNC_14(VAR_0, VAR_3->v);
      if (VAR_3->v == &VAR_3->u.value)
        FUNC_7(VAR_1);
      return;
    }
    case 134: {
      FUNC_0(VAR_1)->c.gclist = VAR_0->gray;
      VAR_0->gray = VAR_1;
      break;
    }
    case 131: {
      FUNC_1(VAR_1)->gclist = VAR_0->gray;
      VAR_0->gray = VAR_1;
      break;
    }
    case 130: {
      FUNC_3(VAR_1)->gclist = VAR_0->gray;
      VAR_0->gray = VAR_1;
      break;
    }
    case 133: {
      FUNC_2(VAR_1)->gclist = VAR_0->gray;
      VAR_0->gray = VAR_1;
      break;
    }
    default: FUNC_12(0);
  }
}
