
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int sqlite3_int64 ;
struct TYPE_23__ {int nPhrase; TYPE_4__** apPhrase; } ;
struct TYPE_22__ {int eType; int nChild; scalar_t__ xNext; TYPE_6__* pNear; } ;
struct TYPE_21__ {scalar_t__ nTerm; TYPE_2__* aTerm; TYPE_5__* pNode; } ;
struct TYPE_20__ {scalar_t__ rc; scalar_t__ zErr; TYPE_1__* pConfig; } ;
struct TYPE_19__ {scalar_t__ bFirst; } ;
struct TYPE_18__ {scalar_t__ eDetail; } ;
typedef TYPE_3__ Fts5Parse ;
typedef TYPE_4__ Fts5ExprPhrase ;
typedef TYPE_5__ Fts5ExprNode ;
typedef TYPE_6__ Fts5ExprNearset ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*,TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 scalar_t__ FUNC_3 (scalar_t__*,int) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*) ;
 scalar_t__ FUNC_7 (char*,char*) ;

Fts5ExprNode *FUNC_8(
  Fts5Parse *VAR_8,
  int VAR_9,
  Fts5ExprNode *VAR_10,
  Fts5ExprNode *VAR_11,
  Fts5ExprNearset *VAR_12
){
  Fts5ExprNode *VAR_13 = 0;

  if( VAR_8->rc==VAR_7 ){
    int VAR_14 = 0;
    sqlite3_int64 VAR_15;

    FUNC_0( (VAR_9!=VAR_5 && !VAR_12)
         || (VAR_9==VAR_5 && !VAR_10 && !VAR_11)
    );
    if( VAR_9==VAR_5 && VAR_12==0 ) return 0;
    if( VAR_9!=VAR_5 && VAR_10==0 ) return VAR_11;
    if( VAR_9!=VAR_5 && VAR_11==0 ) return VAR_10;

    if( VAR_9==VAR_3 ){
      VAR_14 = 2;
    }else if( VAR_9==VAR_0 || VAR_9==VAR_4 ){
      VAR_14 = 2;
      if( VAR_10->eType==VAR_9 ) VAR_14 += VAR_10->nChild-1;
      if( VAR_11->eType==VAR_9 ) VAR_14 += VAR_11->nChild-1;
    }

    VAR_15 = sizeof(Fts5ExprNode) + sizeof(Fts5ExprNode*)*(VAR_14-1);
    VAR_13 = (Fts5ExprNode*)FUNC_3(&VAR_8->rc, VAR_15);

    if( VAR_13 ){
      VAR_13->eType = VAR_9;
      VAR_13->pNear = VAR_12;
      FUNC_2(VAR_13);
      if( VAR_9==VAR_5 ){
        int VAR_16;
        for(VAR_16=0; VAR_16<VAR_12->nPhrase; VAR_16++){
          VAR_12->apPhrase[VAR_16]->pNode = VAR_13;
          if( VAR_12->apPhrase[VAR_16]->nTerm==0 ){
            VAR_13->xNext = 0;
            VAR_13->eType = VAR_2;
          }
        }

        if( VAR_8->pConfig->eDetail!=VAR_1 ){
          Fts5ExprPhrase *VAR_17 = VAR_12->apPhrase[0];
          if( VAR_12->nPhrase!=1
           || VAR_17->nTerm>1
           || (VAR_17->nTerm>0 && VAR_17->aTerm[0].bFirst)
          ){
            FUNC_0( VAR_8->rc==VAR_7 );
            VAR_8->rc = VAR_6;
            FUNC_0( VAR_8->zErr==0 );
            VAR_8->zErr = FUNC_7(
                "fts5: %s queries are not supported (detail!=full)",
                VAR_12->nPhrase==1 ? "phrase": "NEAR"
                );
            FUNC_6(VAR_13);
            VAR_13 = 0;
          }
        }
      }else{
        FUNC_1(VAR_13, VAR_10);
        FUNC_1(VAR_13, VAR_11);
      }
    }
  }

  if( VAR_13==0 ){
    FUNC_0( VAR_8->rc!=VAR_7 );
    FUNC_5(VAR_10);
    FUNC_5(VAR_11);
    FUNC_4(VAR_12);
  }
  return VAR_13;
}
