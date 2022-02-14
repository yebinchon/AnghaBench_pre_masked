
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int info; } ;
struct TYPE_17__ {TYPE_1__ u; int k; int t; int f; } ;
typedef TYPE_2__ expdesc ;
typedef int FuncState ;
typedef int BinOpr ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int VAR_5 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int ,TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_5 (int *,int,TYPE_2__*,TYPE_2__*) ;
 int FUNC_6 (int *,int ,TYPE_2__*,TYPE_2__*) ;
 int FUNC_7 (int *,TYPE_2__*) ;
 int FUNC_8 (int *,TYPE_2__*) ;
 int FUNC_9 (int *,int *,int ) ;
 int FUNC_10 (int *,TYPE_2__*) ;
 int FUNC_11 (int *,TYPE_2__*) ;
 int FUNC_12 (int *,TYPE_2__*) ;
 int FUNC_13 (int) ;

void FUNC_14 (FuncState *VAR_6, BinOpr VAR_7,
                  expdesc *VAR_8, expdesc *VAR_9, int VAR_10) {
  switch (VAR_7) {
    case 147: {
      FUNC_13(VAR_8->t == VAR_1);
      FUNC_10(VAR_6, VAR_9);
      FUNC_9(VAR_6, &VAR_9->f, VAR_8->f);
      *VAR_8 = *VAR_9;
      break;
    }
    case 132: {
      FUNC_13(VAR_8->f == VAR_1);
      FUNC_10(VAR_6, VAR_9);
      FUNC_9(VAR_6, &VAR_9->t, VAR_8->t);
      *VAR_8 = *VAR_9;
      break;
    }
    case 143: {
      FUNC_12(VAR_6, VAR_9);
      if (VAR_9->k == VAR_5 &&
          FUNC_1(FUNC_8(VAR_6, VAR_9)) == VAR_3) {
        FUNC_13(VAR_8->u.info == FUNC_0(FUNC_8(VAR_6, VAR_9))-1);
        FUNC_7(VAR_6, VAR_8);
        FUNC_2(FUNC_8(VAR_6, VAR_9), VAR_8->u.info);
        VAR_8->k = VAR_5; VAR_8->u.info = VAR_9->u.info;
      }
      else {
        FUNC_11(VAR_6, VAR_9);
        FUNC_4(VAR_6, VAR_3, VAR_8, VAR_9, VAR_10);
      }
      break;
    }
    case 148: case 128: case 134: case 142:
    case 138: case 135: case 131:
    case 146: case 145: case 144:
    case 130: case 129: {
      if (!FUNC_6(VAR_6, VAR_7 + VAR_0, VAR_8, VAR_9))
        FUNC_4(VAR_6, FUNC_3(VAR_4, VAR_7 + VAR_2), VAR_8, VAR_9, VAR_10);
      break;
    }
    case 141: case 136: case 137:
    case 133: case 139: case 140: {
      FUNC_5(VAR_6, VAR_7, VAR_8, VAR_9);
      break;
    }
    default: FUNC_13(0);
  }
}
