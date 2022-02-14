
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int info; int aux; } ;
struct TYPE_11__ {TYPE_1__ s; } ;
struct TYPE_12__ {int k; TYPE_2__ u; } ;
typedef TYPE_3__ expdesc ;
typedef int FuncState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (int *,TYPE_3__*,int) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (int *,int ,int,int,int) ;
 int FUNC_3 (int *,int ,int,int) ;
 int FUNC_4 (int *,TYPE_3__*) ;
 int FUNC_5 (int *,TYPE_3__*) ;
 int FUNC_6 (int ) ;

void FUNC_7 (FuncState *VAR_3, expdesc *VAR_4, expdesc *VAR_5) {
  switch (VAR_4->k) {
    case 129: {
      FUNC_1(VAR_3, VAR_5);
      FUNC_0(VAR_3, VAR_5, VAR_4->u.s.info);
      return;
    }
    case 128: {
      int VAR_6 = FUNC_5(VAR_3, VAR_5);
      FUNC_2(VAR_3, VAR_2, VAR_6, VAR_4->u.s.info, 0);
      break;
    }
    case 131: {
      int VAR_7 = FUNC_5(VAR_3, VAR_5);
      FUNC_3(VAR_3, VAR_0, VAR_7, VAR_4->u.s.info);
      break;
    }
    case 130: {
      int VAR_8 = FUNC_4(VAR_3, VAR_5);
      FUNC_2(VAR_3, VAR_1, VAR_4->u.s.info, VAR_4->u.s.aux, VAR_8);
      break;
    }
    default: {
      FUNC_6(0);
      break;
    }
  }
  FUNC_1(VAR_3, VAR_5);
}
