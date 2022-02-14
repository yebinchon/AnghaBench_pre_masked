
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int nConst; TYPE_3__** apExpr; TYPE_1__* pParse; } ;
typedef TYPE_2__ WhereConst ;
struct TYPE_12__ {scalar_t__ op; scalar_t__ iTable; scalar_t__ iColumn; struct TYPE_12__* pLeft; } ;
struct TYPE_10__ {int db; } ;
typedef TYPE_3__ Expr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 TYPE_3__** FUNC_2 (int ,TYPE_3__**,int) ;

__attribute__((used)) static void FUNC_3(
  WhereConst *VAR_2,
  Expr *VAR_3,
  Expr *VAR_4
){
  int VAR_5;
  FUNC_1( VAR_3->op==VAR_1 );



  for(VAR_5=0; VAR_5<VAR_2->nConst; VAR_5++){
    const Expr *VAR_6 = VAR_2->apExpr[VAR_5*2];
    FUNC_1( VAR_6->op==VAR_1 );
    if( VAR_6->iTable==VAR_3->iTable
     && VAR_6->iColumn==VAR_3->iColumn
    ){
      return;
    }
  }

  VAR_2->nConst++;
  VAR_2->apExpr = FUNC_2(VAR_2->pParse->db, VAR_2->apExpr,
                         VAR_2->nConst*2*sizeof(Expr*));
  if( VAR_2->apExpr==0 ){
    VAR_2->nConst = 0;
  }else{
    if( FUNC_0(VAR_4, VAR_0) ) VAR_4 = VAR_4->pLeft;
    VAR_2->apExpr[VAR_2->nConst*2-2] = VAR_3;
    VAR_2->apExpr[VAR_2->nConst*2-1] = VAR_4;
  }
}
