
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef scalar_t__ i64 ;
struct TYPE_15__ {int p; } ;
struct TYPE_14__ {size_t nCol; scalar_t__* abUnindexed; } ;
struct TYPE_13__ {size_t iCol; scalar_t__ szCol; TYPE_1__* pStorage; } ;
struct TYPE_12__ {int nTotalRow; int * aTotalSize; int pIndex; TYPE_3__* pConfig; } ;
typedef TYPE_1__ Fts5Storage ;
typedef TYPE_2__ Fts5InsertCtx ;
typedef TYPE_3__ Fts5Config ;
typedef TYPE_4__ Fts5Buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,scalar_t__,TYPE_4__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_4__*,int ,int) ;
 int FUNC_3 (int*,TYPE_4__*,scalar_t__) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (TYPE_3__*,int ,char const*,int ,void*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;

int FUNC_9(
  Fts5Storage *VAR_3,
  sqlite3_value **VAR_4,
  i64 VAR_5
){
  Fts5Config *VAR_6 = VAR_3->pConfig;
  int VAR_7 = VAR_1;
  Fts5InsertCtx VAR_8;
  Fts5Buffer VAR_9;

  FUNC_2(&VAR_9, 0, sizeof(Fts5Buffer));
  VAR_8.pStorage = VAR_3;
  VAR_7 = FUNC_1(VAR_3, 1);

  if( VAR_7==VAR_1 ){
    VAR_7 = FUNC_4(VAR_3->pIndex, 0, VAR_5);
  }
  for(VAR_8.iCol=0; VAR_7==VAR_1 && VAR_8.iCol<VAR_6->nCol; VAR_8.iCol++){
    VAR_8.szCol = 0;
    if( VAR_6->abUnindexed[VAR_8.iCol]==0 ){
      VAR_7 = FUNC_5(VAR_6,
          VAR_0,
          (const char*)FUNC_8(VAR_4[VAR_8.iCol+2]),
          FUNC_7(VAR_4[VAR_8.iCol+2]),
          (void*)&VAR_8,
          VAR_2
      );
    }
    FUNC_3(&VAR_7, &VAR_9, VAR_8.szCol);
    VAR_3->aTotalSize[VAR_8.iCol] += (i64)VAR_8.szCol;
  }
  VAR_3->nTotalRow++;


  if( VAR_7==VAR_1 ){
    VAR_7 = FUNC_0(VAR_3, VAR_5, &VAR_9);
  }
  FUNC_6(VAR_9.p);

  return VAR_7;
}
