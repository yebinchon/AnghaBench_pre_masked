
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_14__ ;


struct TYPE_23__ {int gray; int mainthread; int GCmemtrav; } ;
typedef TYPE_2__ global_State ;
struct TYPE_25__ {int metatable; } ;
struct TYPE_24__ {int tt; } ;
struct TYPE_22__ {int lnglen; } ;
struct TYPE_21__ {TYPE_1__ u; int shrlen; } ;
typedef int TValue ;
typedef TYPE_3__ GCObject ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_14__* FUNC_5 (TYPE_3__*) ;
 TYPE_5__* FUNC_6 (TYPE_3__*) ;
 TYPE_3__* FUNC_7 (int *) ;
 int FUNC_8 (int ,TYPE_5__*,int *) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_2__*,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (TYPE_5__*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_17 (global_State *VAR_0, GCObject *VAR_1) {
 reentry:
  FUNC_16(VAR_1);
  switch (VAR_1->tt) {
    case 131: {
      FUNC_9(VAR_1);
      VAR_0->GCmemtrav += FUNC_13(FUNC_5(VAR_1)->shrlen);
      break;
    }
    case 133: {
      FUNC_9(VAR_1);
      VAR_0->GCmemtrav += FUNC_13(FUNC_5(VAR_1)->u.lnglen);
      break;
    }
    case 128: {
      TValue VAR_2;
      FUNC_12(VAR_0, FUNC_6(VAR_1)->metatable);
      FUNC_9(VAR_1);
      VAR_0->GCmemtrav += FUNC_14(FUNC_6(VAR_1));
      FUNC_8(VAR_0->mainthread, FUNC_6(VAR_1), &VAR_2);
      if (FUNC_15(&VAR_2)) {
        VAR_1 = FUNC_7(&VAR_2);
        goto reentry;
      }
      break;
    }
    case 134: {
      FUNC_10(FUNC_1(VAR_1), VAR_0->gray);
      break;
    }
    case 135: {
      FUNC_10(FUNC_0(VAR_1), VAR_0->gray);
      break;
    }
    case 130: {
      FUNC_10(FUNC_3(VAR_1), VAR_0->gray);
      break;
    }
    case 129: {
      FUNC_10(FUNC_4(VAR_1), VAR_0->gray);
      break;
    }
    case 132: {
      FUNC_10(FUNC_2(VAR_1), VAR_0->gray);
      break;
    }
    default: FUNC_11(0); break;
  }
}
