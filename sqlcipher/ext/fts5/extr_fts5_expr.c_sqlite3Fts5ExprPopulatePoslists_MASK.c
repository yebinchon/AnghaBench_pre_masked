
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_14__ {int nPhrase; TYPE_1__** apExprPhrase; } ;
struct TYPE_13__ {int iOff; TYPE_3__* aPopulator; TYPE_6__* pExpr; } ;
struct TYPE_12__ {TYPE_2__* pNear; } ;
struct TYPE_11__ {int bOk; scalar_t__ bMiss; } ;
struct TYPE_10__ {int * pColset; } ;
struct TYPE_9__ {TYPE_4__* pNode; } ;
typedef TYPE_3__ Fts5PoslistPopulator ;
typedef TYPE_4__ Fts5ExprNode ;
typedef TYPE_5__ Fts5ExprCtx ;
typedef TYPE_6__ Fts5Expr ;
typedef int Fts5Config ;
typedef int Fts5Colset ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,char const*,int,void*,int ) ;

int FUNC_2(
  Fts5Config *VAR_2,
  Fts5Expr *VAR_3,
  Fts5PoslistPopulator *VAR_4,
  int VAR_5,
  const char *VAR_6, int VAR_7
){
  int VAR_8;
  Fts5ExprCtx VAR_9;
  VAR_9.pExpr = VAR_3;
  VAR_9.aPopulator = VAR_4;
  VAR_9.iOff = (((i64)VAR_5) << 32) - 1;

  for(VAR_8=0; VAR_8<VAR_3->nPhrase; VAR_8++){
    Fts5ExprNode *VAR_10 = VAR_3->apExprPhrase[VAR_8]->pNode;
    Fts5Colset *VAR_11 = VAR_10->pNear->pColset;
    if( (VAR_11 && 0==FUNC_0(VAR_11, VAR_5))
     || VAR_4[VAR_8].bMiss
    ){
      VAR_4[VAR_8].bOk = 0;
    }else{
      VAR_4[VAR_8].bOk = 1;
    }
  }

  return FUNC_1(VAR_2,
      VAR_0, VAR_6, VAR_7, (void*)&VAR_9, VAR_1
  );
}
