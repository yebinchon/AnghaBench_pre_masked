
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int Vdbe ;
struct TYPE_13__ {TYPE_4__* pList; } ;
struct TYPE_17__ {int flags; scalar_t__ op; TYPE_1__ x; } ;
struct TYPE_16__ {int nExpr; TYPE_2__* a; } ;
struct TYPE_15__ {int * pVdbe; } ;
struct TYPE_14__ {TYPE_5__* pExpr; } ;
typedef TYPE_3__ Parse ;
typedef TYPE_4__ ExprList ;
typedef TYPE_5__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_5__*,int) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int *,int ,int,int,int) ;

__attribute__((used)) static void FUNC_5(Parse *VAR_3, Expr *VAR_4, int VAR_5, int VAR_6){
  FUNC_0( VAR_6>0 );
  if( VAR_4 && FUNC_3(VAR_4) ){

    if( (VAR_4->flags & VAR_0) ){
      Vdbe *VAR_7 = VAR_3->pVdbe;
      int VAR_8;
      FUNC_0( VAR_4->op==VAR_2 );
      VAR_8 = FUNC_1(VAR_3, VAR_4);
      FUNC_4(VAR_7, VAR_1, VAR_8, VAR_5, VAR_6-1);
    }else

    {
      int VAR_9;
      ExprList *VAR_10 = VAR_4->x.pList;
      FUNC_0( VAR_6<=VAR_10->nExpr );
      for(VAR_9=0; VAR_9<VAR_6; VAR_9++){
        FUNC_2(VAR_3, VAR_10->a[VAR_9].pExpr, VAR_5+VAR_9);
      }
    }
  }else{
    FUNC_0( VAR_6==1 );
    FUNC_2(VAR_3, VAR_4, VAR_5);
  }
}
