
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int nChild; scalar_t__ bEof; int iRowid; scalar_t__ bNomatch; struct TYPE_7__** apChild; } ;
typedef TYPE_1__ Fts5ExprNode ;
typedef int Fts5Expr ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_1__*,int,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(
  Fts5Expr *VAR_1,
  Fts5ExprNode *VAR_2
){
  int VAR_3 = VAR_0;
  Fts5ExprNode *VAR_4 = VAR_2->apChild[0];
  Fts5ExprNode *VAR_5 = VAR_2->apChild[1];
  FUNC_0( VAR_2->nChild==2 );

  while( VAR_3==VAR_0 && VAR_4->bEof==0 ){
    int VAR_6 = FUNC_3(VAR_1, VAR_4, VAR_5);
    if( VAR_6>0 ){
      VAR_3 = FUNC_1(VAR_1, VAR_5, 1, VAR_4->iRowid);
      VAR_6 = FUNC_3(VAR_1, VAR_4, VAR_5);
    }
    FUNC_0( VAR_3!=VAR_0 || VAR_6<=0 );
    if( VAR_6 || VAR_5->bNomatch ) break;
    VAR_3 = FUNC_1(VAR_1, VAR_4, 0, 0);
  }
  VAR_2->bEof = VAR_4->bEof;
  VAR_2->bNomatch = VAR_4->bNomatch;
  VAR_2->iRowid = VAR_4->iRowid;
  if( VAR_4->bEof ){
    FUNC_2(VAR_5);
  }
  return VAR_3;
}
