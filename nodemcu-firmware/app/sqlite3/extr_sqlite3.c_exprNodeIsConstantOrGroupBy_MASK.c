
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__* pGroupBy; } ;
struct TYPE_11__ {scalar_t__ eCode; int pParse; TYPE_2__ u; } ;
typedef TYPE_3__ Walker ;
struct TYPE_13__ {int zName; } ;
struct TYPE_12__ {int nExpr; TYPE_1__* a; } ;
struct TYPE_9__ {int * pExpr; } ;
typedef TYPE_4__ ExprList ;
typedef int Expr ;
typedef TYPE_5__ CollSeq ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,int *) ;
 TYPE_5__* FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int *,int) ;
 scalar_t__ FUNC_4 (char*,int ) ;

__attribute__((used)) static int FUNC_5(Walker *VAR_3, Expr *VAR_4){
  ExprList *VAR_5 = VAR_3->u.pGroupBy;
  int VAR_6;



  for(VAR_6=0; VAR_6<VAR_5->nExpr; VAR_6++){
    Expr *VAR_7 = VAR_5->a[VAR_6].pExpr;
    if( FUNC_3(VAR_4, VAR_7, -1)<2 ){
      CollSeq *VAR_8 = FUNC_2(VAR_3->pParse, VAR_7);
      if( VAR_8==0 || FUNC_4("BINARY", VAR_8->zName)==0 ){
        return VAR_2;
      }
    }
  }


  if( FUNC_0(VAR_4, VAR_0) ){
    VAR_3->eCode = 0;
    return VAR_1;
  }

  return FUNC_1(VAR_3, VAR_4);
}
