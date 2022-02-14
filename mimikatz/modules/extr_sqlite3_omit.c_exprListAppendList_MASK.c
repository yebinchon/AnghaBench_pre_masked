
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int nExpr; TYPE_1__* a; } ;
struct TYPE_12__ {int db; } ;
struct TYPE_11__ {int sortOrder; int pExpr; } ;
typedef TYPE_2__ Parse ;
typedef TYPE_3__ ExprList ;
typedef int Expr ;


 int * FUNC_0 (int ,int ,int ) ;
 TYPE_3__* FUNC_1 (TYPE_2__*,TYPE_3__*,int *) ;

__attribute__((used)) static ExprList *FUNC_2(
  Parse *VAR_0,
  ExprList *VAR_1,
  ExprList *VAR_2
){
  if( VAR_2 ){
    int VAR_3;
    int VAR_4 = VAR_1 ? VAR_1->nExpr : 0;
    for(VAR_3=0; VAR_3<VAR_2->nExpr; VAR_3++){
      Expr *VAR_5 = FUNC_0(VAR_0->db, VAR_2->a[VAR_3].pExpr, 0);
      VAR_1 = FUNC_1(VAR_0, VAR_1, VAR_5);
      if( VAR_1 ) VAR_1->a[VAR_4+VAR_3].sortOrder = VAR_2->a[VAR_3].sortOrder;
    }
  }
  return VAR_1;
}
