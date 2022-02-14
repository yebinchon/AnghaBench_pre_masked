
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ n; } ;
struct TYPE_15__ {int nPhrase; TYPE_2__* pRoot; TYPE_1__** apExprPhrase; } ;
struct TYPE_14__ {scalar_t__ iRowid; scalar_t__ bEof; } ;
struct TYPE_13__ {int bMiss; } ;
struct TYPE_12__ {scalar_t__ iRowid; } ;
struct TYPE_11__ {int nTerm; TYPE_4__* pNode; TYPE_6__ poslist; } ;
typedef TYPE_3__ Fts5PoslistPopulator ;
typedef TYPE_4__ Fts5ExprNode ;
typedef TYPE_5__ Fts5Expr ;
typedef TYPE_6__ Fts5Buffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 TYPE_3__* FUNC_2 (int) ;

Fts5PoslistPopulator *FUNC_3(Fts5Expr *VAR_0, int VAR_1){
  Fts5PoslistPopulator *VAR_2;
  VAR_2 = FUNC_2(sizeof(Fts5PoslistPopulator)*VAR_0->nPhrase);
  if( VAR_2 ){
    int VAR_3;
    FUNC_1(VAR_2, 0, sizeof(Fts5PoslistPopulator)*VAR_0->nPhrase);
    for(VAR_3=0; VAR_3<VAR_0->nPhrase; VAR_3++){
      Fts5Buffer *VAR_4 = &VAR_0->apExprPhrase[VAR_3]->poslist;
      Fts5ExprNode *VAR_5 = VAR_0->apExprPhrase[VAR_3]->pNode;
      FUNC_0( VAR_0->apExprPhrase[VAR_3]->nTerm==1 );
      if( VAR_1 &&
          (VAR_4->n==0 || VAR_5->iRowid!=VAR_0->pRoot->iRowid || VAR_5->bEof)
      ){
        VAR_2[VAR_3].bMiss = 1;
      }else{
        VAR_4->n = 0;
      }
    }
  }
  return VAR_2;
}
