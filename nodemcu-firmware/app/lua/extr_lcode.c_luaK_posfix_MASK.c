
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int info; } ;
struct TYPE_16__ {TYPE_1__ s; } ;
struct TYPE_17__ {TYPE_2__ u; int k; int t; int f; } ;
typedef TYPE_3__ expdesc ;
typedef int FuncState ;
typedef int BinOpr ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,int ) ;
 int VAR_11 ;
 int FUNC_3 (int *,int ,TYPE_3__*,TYPE_3__*) ;
 int FUNC_4 (int *,int ,int,TYPE_3__*,TYPE_3__*) ;
 int FUNC_5 (int *,TYPE_3__*) ;
 int FUNC_6 (int *,TYPE_3__*) ;
 int FUNC_7 (int *,int *,int ) ;
 int FUNC_8 (int *,TYPE_3__*) ;
 int FUNC_9 (int *,TYPE_3__*) ;
 int FUNC_10 (int *,TYPE_3__*) ;
 int FUNC_11 (int) ;

void FUNC_12 (FuncState *VAR_12, BinOpr VAR_13, expdesc *VAR_14, expdesc *VAR_15) {
  switch (VAR_13) {
    case 141: {
      FUNC_11(VAR_14->t == VAR_0);
      FUNC_8(VAR_12, VAR_15);
      FUNC_7(VAR_12, &VAR_15->f, VAR_14->f);
      *VAR_14 = *VAR_15;
      break;
    }
    case 130: {
      FUNC_11(VAR_14->f == VAR_0);
      FUNC_8(VAR_12, VAR_15);
      FUNC_7(VAR_12, &VAR_15->t, VAR_14->t);
      *VAR_14 = *VAR_15;
      break;
    }
    case 140: {
      FUNC_10(VAR_12, VAR_15);
      if (VAR_15->k == VAR_11 && FUNC_1(FUNC_6(VAR_12, VAR_15)) == VAR_2) {
        FUNC_11(VAR_14->u.s.info == FUNC_0(FUNC_6(VAR_12, VAR_15))-1);
        FUNC_5(VAR_12, VAR_14);
        FUNC_2(FUNC_6(VAR_12, VAR_15), VAR_14->u.s.info);
        VAR_14->k = VAR_11; VAR_14->u.s.info = VAR_15->u.s.info;
      }
      else {
        FUNC_9(VAR_12, VAR_15);
        FUNC_3(VAR_12, VAR_2, VAR_14, VAR_15);
      }
      break;
    }
    case 142: FUNC_3(VAR_12, VAR_1, VAR_14, VAR_15); break;
    case 128: FUNC_3(VAR_12, VAR_10, VAR_14, VAR_15); break;
    case 132: FUNC_3(VAR_12, VAR_8, VAR_14, VAR_15); break;
    case 139: FUNC_3(VAR_12, VAR_3, VAR_14, VAR_15); break;
    case 133: FUNC_3(VAR_12, VAR_7, VAR_14, VAR_15); break;
    case 129: FUNC_3(VAR_12, VAR_9, VAR_14, VAR_15); break;
    case 138: FUNC_4(VAR_12, VAR_4, 1, VAR_14, VAR_15); break;
    case 131: FUNC_4(VAR_12, VAR_4, 0, VAR_14, VAR_15); break;
    case 134: FUNC_4(VAR_12, VAR_6, 1, VAR_14, VAR_15); break;
    case 135: FUNC_4(VAR_12, VAR_5, 1, VAR_14, VAR_15); break;
    case 136: FUNC_4(VAR_12, VAR_6, 0, VAR_14, VAR_15); break;
    case 137: FUNC_4(VAR_12, VAR_5, 0, VAR_14, VAR_15); break;
    default: FUNC_11(0);
  }
}
