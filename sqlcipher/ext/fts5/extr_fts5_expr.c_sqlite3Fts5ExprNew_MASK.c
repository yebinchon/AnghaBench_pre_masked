
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int sParse ;
struct TYPE_20__ {int nCol; int* aiCol; } ;
struct TYPE_19__ {int nCol; } ;
struct TYPE_18__ {int nPhrase; scalar_t__ apExprPhrase; TYPE_4__* pConfig; scalar_t__ pIndex; TYPE_2__* pRoot; } ;
struct TYPE_17__ {int bEof; } ;
struct TYPE_16__ {scalar_t__ rc; char* zErr; scalar_t__ apPhrase; TYPE_2__* pExpr; int nPhrase; TYPE_4__* pConfig; } ;
typedef int Fts5Token ;
typedef TYPE_1__ Fts5Parse ;
typedef TYPE_2__ Fts5ExprNode ;
typedef TYPE_3__ Fts5Expr ;
typedef TYPE_4__ Fts5Config ;
typedef TYPE_5__ Fts5Colset ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,char const**,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_3 (scalar_t__*,int const) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*,TYPE_5__*) ;
 int FUNC_6 (void*,int,int ,TYPE_1__*) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (void*,int ) ;
 int FUNC_9 (scalar_t__) ;
 TYPE_3__* FUNC_10 (int) ;

int FUNC_11(
  Fts5Config *VAR_5,
  int VAR_6,
  const char *VAR_7,
  Fts5Expr **VAR_8,
  char **VAR_9
){
  Fts5Parse VAR_10;
  Fts5Token VAR_11;
  const char *VAR_12 = VAR_7;
  int VAR_13;
  void *VAR_14;
  Fts5Expr *VAR_15;

  *VAR_8 = 0;
  *VAR_9 = 0;
  FUNC_2(&VAR_10, 0, sizeof(VAR_10));
  VAR_14 = FUNC_7(VAR_3);
  if( VAR_14==0 ){ return VAR_1; }
  VAR_10.pConfig = VAR_5;

  do {
    VAR_13 = FUNC_1(&VAR_10, &VAR_12, &VAR_11);
    FUNC_6(VAR_14, VAR_13, VAR_11, &VAR_10);
  }while( VAR_10.rc==VAR_2 && VAR_13!=VAR_0 );
  FUNC_8(VAR_14, VAR_4);



  if( VAR_6<VAR_5->nCol && VAR_10.pExpr && VAR_10.rc==VAR_2 ){
    int VAR_16 = sizeof(Fts5Colset);
    Fts5Colset *VAR_17 = (Fts5Colset*)FUNC_3(&VAR_10.rc, VAR_16);
    if( VAR_17 ){
      VAR_17->nCol = 1;
      VAR_17->aiCol[0] = VAR_6;
      FUNC_5(&VAR_10, VAR_10.pExpr, VAR_17);
    }
  }

  FUNC_0( VAR_10.rc!=VAR_2 || VAR_10.zErr==0 );
  if( VAR_10.rc==VAR_2 ){
    *VAR_8 = VAR_15 = FUNC_10(sizeof(Fts5Expr));
    if( VAR_15==0 ){
      VAR_10.rc = VAR_1;
      FUNC_4(VAR_10.pExpr);
    }else{
      if( !VAR_10.pExpr ){
        const int VAR_18 = sizeof(Fts5ExprNode);
        VAR_15->pRoot = (Fts5ExprNode*)FUNC_3(&VAR_10.rc, VAR_18);
        if( VAR_15->pRoot ){
          VAR_15->pRoot->bEof = 1;
        }
      }else{
        VAR_15->pRoot = VAR_10.pExpr;
      }
      VAR_15->pIndex = 0;
      VAR_15->pConfig = VAR_5;
      VAR_15->apExprPhrase = VAR_10.apPhrase;
      VAR_15->nPhrase = VAR_10.nPhrase;
      VAR_10.apPhrase = 0;
    }
  }else{
    FUNC_4(VAR_10.pExpr);
  }

  FUNC_9(VAR_10.apPhrase);
  *VAR_9 = VAR_10.zErr;
  return VAR_10.rc;
}
