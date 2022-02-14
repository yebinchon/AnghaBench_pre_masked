
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
struct TYPE_17__ {int flags; TYPE_1__ x; } ;
struct TYPE_16__ {int nExpr; TYPE_2__* a; } ;
struct TYPE_15__ {int * pVdbe; } ;
struct TYPE_14__ {TYPE_5__* pExpr; } ;
typedef TYPE_3__ Parse ;
typedef TYPE_4__ ExprList ;
typedef TYPE_5__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,TYPE_5__*,int ,int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_5__*,int) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int *,int ,int,int,int) ;

__attribute__((used)) static void FUNC_5(Parse *VAR_2, Expr *VAR_3, int VAR_4, int VAR_5){
  FUNC_0( VAR_5>0 );
  if( FUNC_3(VAR_3) ){

    if( (VAR_3->flags & VAR_0) ){
      Vdbe *VAR_6 = VAR_2->pVdbe;
      int VAR_7 = FUNC_1(VAR_2, VAR_3, 0, 0);
      FUNC_4(VAR_6, VAR_1, VAR_7, VAR_4, VAR_5-1);
    }else

    {
      int VAR_8;
      ExprList *VAR_9 = VAR_3->x.pList;
      FUNC_0( VAR_5<=VAR_9->nExpr );
      for(VAR_8=0; VAR_8<VAR_5; VAR_8++){
        FUNC_2(VAR_2, VAR_9->a[VAR_8].pExpr, VAR_4+VAR_8);
      }
    }
  }else{
    FUNC_0( VAR_5==1 );
    FUNC_2(VAR_2, VAR_3, VAR_4);
  }
}
