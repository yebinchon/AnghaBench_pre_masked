
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_15__ ;


struct TYPE_24__ {int gray; int mainthread; int GCmemtrav; } ;
typedef TYPE_2__ global_State ;
struct TYPE_26__ {int metatable; } ;
struct TYPE_25__ {int tt; } ;
struct TYPE_23__ {int lnglen; } ;
struct TYPE_22__ {TYPE_1__ u; int shrlen; } ;
typedef int TValue ;
typedef TYPE_3__ GCObject ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_15__* FUNC_5 (TYPE_3__*) ;
 TYPE_5__* FUNC_6 (TYPE_3__*) ;
 TYPE_3__* FUNC_7 (int *) ;
 int FUNC_8 (int ,TYPE_5__*,int *) ;
 int FUNC_9 (TYPE_3__*) ;
 scalar_t__ FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_2__*,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_5__*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_18 (global_State *VAR_0, GCObject *VAR_1) {
 reentry:
  if (FUNC_10(VAR_1))
    return;
  FUNC_17(VAR_1);
  switch (VAR_1->tt) {
    case 131: {
      FUNC_9(VAR_1);
      VAR_0->GCmemtrav += FUNC_14(FUNC_5(VAR_1)->shrlen);
      break;
    }
    case 133: {
      FUNC_9(VAR_1);
      VAR_0->GCmemtrav += FUNC_14(FUNC_5(VAR_1)->u.lnglen);
      break;
    }
    case 128: {
      TValue VAR_2;
      FUNC_13(VAR_0, FUNC_6(VAR_1)->metatable);
      FUNC_9(VAR_1);
      VAR_0->GCmemtrav += FUNC_15(FUNC_6(VAR_1));
      FUNC_8(VAR_0->mainthread, FUNC_6(VAR_1), &VAR_2);
      if (FUNC_16(&VAR_2)) {
        VAR_1 = FUNC_7(&VAR_2);
        goto reentry;
      }
      break;
    }
    case 134: {
      FUNC_11(FUNC_1(VAR_1), VAR_0->gray);
      break;
    }
    case 135: {
      FUNC_11(FUNC_0(VAR_1), VAR_0->gray);
      break;
    }
    case 130: {
      FUNC_11(FUNC_3(VAR_1), VAR_0->gray);
      break;
    }
    case 129: {
      FUNC_11(FUNC_4(VAR_1), VAR_0->gray);
      break;
    }
    case 132: {
      FUNC_11(FUNC_2(VAR_1), VAR_0->gray);
      break;
    }
    default: FUNC_12(0); break;
  }
}
