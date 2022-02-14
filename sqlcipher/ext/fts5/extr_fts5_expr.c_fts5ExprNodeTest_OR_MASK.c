
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nChild; scalar_t__ bNomatch; int bEof; int iRowid; struct TYPE_5__** apChild; } ;
typedef TYPE_1__ Fts5ExprNode ;
typedef int Fts5Expr ;


 int FUNC_0 (int *,TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(
  Fts5Expr *VAR_0,
  Fts5ExprNode *VAR_1
){
  Fts5ExprNode *VAR_2 = VAR_1->apChild[0];
  int VAR_3;

  for(VAR_3=1; VAR_3<VAR_1->nChild; VAR_3++){
    Fts5ExprNode *VAR_4 = VAR_1->apChild[VAR_3];
    int VAR_5 = FUNC_0(VAR_0, VAR_2, VAR_4);
    if( VAR_5>0 || (VAR_5==0 && VAR_4->bNomatch==0) ){
      VAR_2 = VAR_4;
    }
  }
  VAR_1->iRowid = VAR_2->iRowid;
  VAR_1->bEof = VAR_2->bEof;
  VAR_1->bNomatch = VAR_2->bNomatch;
}
