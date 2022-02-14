
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* pIdxTrans; } ;
struct TYPE_9__ {TYPE_1__ u; } ;
typedef TYPE_2__ Walker ;
struct TYPE_11__ {scalar_t__ pTab; int iColumn; int iTable; int op; } ;
struct TYPE_10__ {int iIdxCol; int iIdxCur; int iTabCur; int pIdxExpr; } ;
typedef TYPE_3__ IdxExprTrans ;
typedef TYPE_4__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int ,int ) ;

__attribute__((used)) static int FUNC_1(Walker *VAR_3, Expr *VAR_4){
  IdxExprTrans *VAR_5 = VAR_3->u.pIdxTrans;
  if( FUNC_0(VAR_4, VAR_5->pIdxExpr, VAR_5->iTabCur)==0 ){
    VAR_4->op = VAR_0;
    VAR_4->iTable = VAR_5->iIdxCur;
    VAR_4->iColumn = VAR_5->iIdxCol;
    VAR_4->pTab = 0;
    return VAR_2;
  }else{
    return VAR_1;
  }
}
