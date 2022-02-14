
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int sqlite3_int64 ;
typedef scalar_t__ i64 ;
typedef int aStatic ;
struct TYPE_20__ {scalar_t__ n; int p; } ;
struct TYPE_19__ {int nPhrase; scalar_t__ nNear; TYPE_4__** apPhrase; } ;
struct TYPE_18__ {scalar_t__ nTerm; TYPE_6__ poslist; } ;
struct TYPE_17__ {scalar_t__ iPos; scalar_t__ iLookahead; } ;
struct TYPE_15__ {scalar_t__ iPrev; } ;
struct TYPE_16__ {TYPE_6__* pOut; TYPE_3__ reader; TYPE_1__ writer; } ;
typedef TYPE_1__ Fts5PoslistWriter ;
typedef TYPE_2__ Fts5NearTrimmer ;
typedef TYPE_3__ Fts5LookaheadReader ;
typedef TYPE_4__ Fts5ExprPhrase ;
typedef TYPE_5__ Fts5ExprNearset ;
typedef TYPE_6__ Fts5Buffer ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__,TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_5 (int*,int) ;
 int FUNC_6 (TYPE_6__*,TYPE_1__*,scalar_t__) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_8(int *VAR_1, Fts5ExprNearset *VAR_2){
  Fts5NearTrimmer VAR_3[4];
  Fts5NearTrimmer *VAR_4 = VAR_3;
  Fts5ExprPhrase **VAR_5 = VAR_2->apPhrase;

  int VAR_6;
  int VAR_7 = *VAR_1;
  int VAR_8;

  FUNC_1( VAR_2->nPhrase>1 );



  if( VAR_2->nPhrase>FUNC_0(VAR_3) ){
    sqlite3_int64 VAR_9 = sizeof(Fts5NearTrimmer) * VAR_2->nPhrase;
    VAR_4 = (Fts5NearTrimmer*)FUNC_5(&VAR_7, VAR_9);
  }else{
    FUNC_4(VAR_3, 0, sizeof(VAR_3));
  }
  if( VAR_7!=VAR_0 ){
    *VAR_1 = VAR_7;
    return 0;
  }
  for(VAR_6=0; VAR_6<VAR_2->nPhrase; VAR_6++){
    Fts5Buffer *VAR_10 = &VAR_5[VAR_6]->poslist;
    FUNC_2(VAR_10->p, VAR_10->n, &VAR_4[VAR_6].reader);
    VAR_10->n = 0;
    VAR_4[VAR_6].pOut = VAR_10;
  }

  while( 1 ){
    int VAR_11;
    i64 VAR_12;
    i64 VAR_13;



    VAR_13 = VAR_4[0].reader.iPos;
    do {
      VAR_8 = 1;
      for(VAR_6=0; VAR_6<VAR_2->nPhrase; VAR_6++){
        Fts5LookaheadReader *VAR_14 = &VAR_4[VAR_6].reader;
        VAR_12 = VAR_13 - VAR_2->apPhrase[VAR_6]->nTerm - VAR_2->nNear;
        if( VAR_14->iPos<VAR_12 || VAR_14->iPos>VAR_13 ){
          VAR_8 = 0;
          while( VAR_14->iPos<VAR_12 ){
            if( FUNC_3(VAR_14) ) goto ismatch_out;
          }
          if( VAR_14->iPos>VAR_13 ) VAR_13 = VAR_14->iPos;
        }
      }
    }while( VAR_8==0 );


    for(VAR_6=0; VAR_6<VAR_2->nPhrase; VAR_6++){
      i64 VAR_15 = VAR_4[VAR_6].reader.iPos;
      Fts5PoslistWriter *VAR_16 = &VAR_4[VAR_6].writer;
      if( VAR_4[VAR_6].pOut->n==0 || VAR_15!=VAR_16->iPrev ){
        FUNC_6(VAR_4[VAR_6].pOut, VAR_16, VAR_15);
      }
    }

    VAR_11 = 0;
    VAR_12 = VAR_4[0].reader.iLookahead;
    for(VAR_6=0; VAR_6<VAR_2->nPhrase; VAR_6++){
      if( VAR_4[VAR_6].reader.iLookahead < VAR_12 ){
        VAR_12 = VAR_4[VAR_6].reader.iLookahead;
        VAR_11 = VAR_6;
      }
    }
    if( FUNC_3(&VAR_4[VAR_11].reader) ) goto ismatch_out;
  }

  ismatch_out: {
    int VAR_17 = VAR_4[0].pOut->n>0;
    *VAR_1 = VAR_7;
    if( VAR_4!=VAR_3 ) FUNC_7(VAR_4);
    return VAR_17;
  }
}
