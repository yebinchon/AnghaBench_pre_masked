
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef scalar_t__ i64 ;
struct TYPE_19__ {int p; int member_2; int member_1; int member_0; } ;
struct TYPE_18__ {size_t nCol; scalar_t__* abUnindexed; } ;
struct TYPE_17__ {size_t iCol; scalar_t__ szCol; TYPE_1__* pStorage; } ;
struct TYPE_16__ {int nTotalRow; int * aTotalSize; int pIndex; TYPE_3__* pConfig; } ;
typedef TYPE_1__ Fts5Storage ;
typedef TYPE_2__ Fts5InsertCtx ;
typedef TYPE_3__ Fts5Config ;
typedef TYPE_4__ Fts5Buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int **,int ) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,scalar_t__,TYPE_4__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (int*,TYPE_4__*,scalar_t__) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int ,int ,scalar_t__) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_3__*,int ,char const*,int ,void*,int ) ;
 int FUNC_10 (int *,int) ;
 scalar_t__ FUNC_11 (int *,int ) ;
 scalar_t__ FUNC_12 (int *,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *) ;

int FUNC_16(Fts5Storage *VAR_5){
  Fts5Buffer VAR_6 = {0,0,0};
  Fts5Config *VAR_7 = VAR_5->pConfig;
  sqlite3_stmt *VAR_8 = 0;
  Fts5InsertCtx VAR_9;
  int VAR_10, VAR_11;

  FUNC_4(&VAR_9, 0, sizeof(Fts5InsertCtx));
  VAR_9.pStorage = VAR_5;
  VAR_10 = FUNC_8(VAR_5);
  if( VAR_10==VAR_2 ){
    VAR_10 = FUNC_2(VAR_5, 1);
  }

  if( VAR_10==VAR_2 ){
    VAR_10 = FUNC_0(VAR_5, VAR_0, &VAR_8, 0);
  }

  while( VAR_10==VAR_2 && VAR_3==FUNC_15(VAR_8) ){
    i64 VAR_12 = FUNC_11(VAR_8, 0);

    FUNC_6(&VAR_6);
    VAR_10 = FUNC_7(VAR_5->pIndex, 0, VAR_12);
    for(VAR_9.iCol=0; VAR_10==VAR_2 && VAR_9.iCol<VAR_7->nCol; VAR_9.iCol++){
      VAR_9.szCol = 0;
      if( VAR_7->abUnindexed[VAR_9.iCol]==0 ){
        VAR_10 = FUNC_9(VAR_7,
            VAR_1,
            (const char*)FUNC_12(VAR_8, VAR_9.iCol+1),
            FUNC_10(VAR_8, VAR_9.iCol+1),
            (void*)&VAR_9,
            VAR_4
        );
      }
      FUNC_5(&VAR_10, &VAR_6, VAR_9.szCol);
      VAR_5->aTotalSize[VAR_9.iCol] += (i64)VAR_9.szCol;
    }
    VAR_5->nTotalRow++;

    if( VAR_10==VAR_2 ){
      VAR_10 = FUNC_1(VAR_5, VAR_12, &VAR_6);
    }
  }
  FUNC_13(VAR_6.p);
  VAR_11 = FUNC_14(VAR_8);
  if( VAR_10==VAR_2 ) VAR_10 = VAR_11;


  if( VAR_10==VAR_2 ){
    VAR_10 = FUNC_3(VAR_5);
  }
  return VAR_10;
}
