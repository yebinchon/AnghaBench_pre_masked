
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int iCur; } ;
struct TYPE_10__ {int eCode; TYPE_1__ u; scalar_t__ xSelectCallback2; scalar_t__ xSelectCallback; int xExprCallback; } ;
typedef TYPE_2__ Walker ;
struct TYPE_11__ {scalar_t__ op; struct TYPE_11__* pRight; struct TYPE_11__* pLeft; } ;
typedef TYPE_3__ Expr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*) ;

int FUNC_2(Expr *VAR_3, int VAR_4){
  Walker VAR_5;
  VAR_3 = FUNC_0(VAR_3);
  while( VAR_3 ){
    if( VAR_3->op==VAR_1 ){
      VAR_3 = VAR_3->pLeft;
    }else if( VAR_3->op==VAR_0 ){
      if( FUNC_2(VAR_3->pLeft, VAR_4) ) return 1;
      VAR_3 = VAR_3->pRight;
    }else{
      break;
    }
  }
  VAR_5.xExprCallback = VAR_2;
  VAR_5.xSelectCallback = 0;
  VAR_5.xSelectCallback2 = 0;
  VAR_5.eCode = 0;
  VAR_5.u.iCur = VAR_4;
  FUNC_1(&VAR_5, VAR_3);
  return VAR_5.eCode;
}
