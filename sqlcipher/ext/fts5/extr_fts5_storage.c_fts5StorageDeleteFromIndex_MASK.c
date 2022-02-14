
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_stmt ;
typedef scalar_t__ i64 ;
struct TYPE_9__ {int nCol; scalar_t__* abUnindexed; } ;
struct TYPE_8__ {int iCol; scalar_t__ szCol; TYPE_1__* pStorage; } ;
struct TYPE_7__ {int nTotalRow; int * aTotalSize; int pIndex; TYPE_3__* pConfig; } ;
typedef TYPE_1__ Fts5Storage ;
typedef TYPE_2__ Fts5InsertCtx ;
typedef TYPE_3__ Fts5Config ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int **,int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,int,scalar_t__) ;
 int FUNC_2 (TYPE_3__*,int ,char const*,int,void*,int ) ;
 int FUNC_3 (int *,int,scalar_t__) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(
  Fts5Storage *VAR_5,
  i64 VAR_6,
  sqlite3_value **VAR_7
){
  Fts5Config *VAR_8 = VAR_5->pConfig;
  sqlite3_stmt *VAR_9 = 0;
  int VAR_10;
  int VAR_11;
  int VAR_12;
  Fts5InsertCtx VAR_13;

  if( VAR_7==0 ){
    VAR_10 = FUNC_0(VAR_5, VAR_0, &VAR_9, 0);
    if( VAR_10!=VAR_2 ) return VAR_10;
    FUNC_3(VAR_9, 1, VAR_6);
    if( FUNC_7(VAR_9)!=VAR_3 ){
      return FUNC_6(VAR_9);
    }
  }

  VAR_13.pStorage = VAR_5;
  VAR_13.iCol = -1;
  VAR_10 = FUNC_1(VAR_5->pIndex, 1, VAR_6);
  for(VAR_12=1; VAR_10==VAR_2 && VAR_12<=VAR_8->nCol; VAR_12++){
    if( VAR_8->abUnindexed[VAR_12-1]==0 ){
      const char *VAR_14;
      int VAR_15;
      if( VAR_9 ){
        VAR_14 = (const char*)FUNC_5(VAR_9, VAR_12);
        VAR_15 = FUNC_4(VAR_9, VAR_12);
      }else{
        VAR_14 = (const char*)FUNC_9(VAR_7[VAR_12-1]);
        VAR_15 = FUNC_8(VAR_7[VAR_12-1]);
      }
      VAR_13.szCol = 0;
      VAR_10 = FUNC_2(VAR_8, VAR_1,
          VAR_14, VAR_15, (void*)&VAR_13, VAR_4
      );
      VAR_5->aTotalSize[VAR_12-1] -= (i64)VAR_13.szCol;
    }
  }
  VAR_5->nTotalRow--;

  VAR_11 = FUNC_6(VAR_9);
  if( VAR_10==VAR_2 ) VAR_10 = VAR_11;
  return VAR_10;
}
