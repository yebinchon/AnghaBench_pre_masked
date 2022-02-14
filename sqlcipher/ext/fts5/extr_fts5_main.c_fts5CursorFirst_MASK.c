
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int iFirstRowid; int * pExpr; } ;
struct TYPE_8__ {int pIndex; } ;
struct TYPE_9__ {TYPE_1__ p; } ;
typedef TYPE_2__ Fts5FullTable ;
typedef int Fts5Expr ;
typedef TYPE_3__ Fts5Cursor ;


 int FUNC_0 (TYPE_3__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(Fts5FullTable *VAR_1, Fts5Cursor *VAR_2, int VAR_3){
  int VAR_4;
  Fts5Expr *VAR_5 = VAR_2->pExpr;
  VAR_4 = FUNC_3(VAR_5, VAR_1->p.pIndex, VAR_2->iFirstRowid, VAR_3);
  if( FUNC_2(VAR_5) ){
    FUNC_0(VAR_2, VAR_0);
  }
  FUNC_1(VAR_2);
  return VAR_4;
}
