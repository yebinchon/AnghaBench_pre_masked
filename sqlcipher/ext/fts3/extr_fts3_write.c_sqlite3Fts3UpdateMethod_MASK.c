
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int u32 ;
typedef int sqlite_int64 ;
typedef int sqlite3_vtab ;
typedef int sqlite3_value ;
typedef int sqlite3_int64 ;
typedef int aSzDel ;
struct TYPE_11__ {int bHasStat; scalar_t__ pSegments; int nColumn; scalar_t__ zContentTbl; scalar_t__ bFts4; scalar_t__ bHasDocsize; int iPrevDocid; int db; } ;
typedef TYPE_1__ Fts3Table ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int *,int*,int *) ;
 int FUNC_2 (TYPE_1__*,int **,int *) ;
 int FUNC_3 (int*,TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int,int **,int *) ;
 int FUNC_5 (TYPE_1__*,int ,int,int ) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (int*,TYPE_1__*,int *,int *,int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int ) ;

int FUNC_17(
  sqlite3_vtab *VAR_7,
  int VAR_8,
  sqlite3_value **VAR_9,
  sqlite_int64 *VAR_10
){
  Fts3Table *VAR_11 = (Fts3Table *)VAR_7;
  int VAR_12 = VAR_5;
  u32 *VAR_13 = 0;
  u32 *VAR_14 = 0;
  int VAR_15 = 0;
  int VAR_16 = 0;



  FUNC_0( VAR_11->bHasStat==0 || VAR_11->bHasStat==1 );

  FUNC_0( VAR_11->pSegments==0 );
  FUNC_0(
      VAR_8==1
   || VAR_8==(2 + VAR_11->nColumn + 3)
  );





  if( VAR_8>1
   && FUNC_15(VAR_9[0])==VAR_4
   && FUNC_15(VAR_9[VAR_11->nColumn+2])!=VAR_4
  ){
    VAR_12 = FUNC_6(VAR_11, VAR_9[VAR_11->nColumn+2]);
    goto update_out;
  }

  if( VAR_8>1 && FUNC_13(VAR_9[2 + VAR_11->nColumn + 2])<0 ){
    VAR_12 = VAR_1;
    goto update_out;
  }


  VAR_14 = FUNC_12(sizeof(VAR_14[0])*((sqlite3_int64)VAR_11->nColumn+1)*2);
  if( VAR_14==0 ){
    VAR_12 = VAR_3;
    goto update_out;
  }
  VAR_13 = &VAR_14[VAR_11->nColumn+1];
  FUNC_9(VAR_14, 0, sizeof(VAR_14[0])*(VAR_11->nColumn+1)*2);

  VAR_12 = FUNC_8(VAR_11);
  if( VAR_12!=VAR_5 ) goto update_out;
  if( VAR_8>1 && VAR_11->zContentTbl==0 ){

    sqlite3_value *VAR_17 = VAR_9[3+VAR_11->nColumn];
    if( FUNC_15(VAR_17)==VAR_4 ){
      VAR_17 = VAR_9[1];
    }

    if( FUNC_15(VAR_17)!=VAR_4 && (
        FUNC_15(VAR_9[0])==VAR_4
     || FUNC_14(VAR_9[0])!=FUNC_14(VAR_17)
    )){
      if( FUNC_16(VAR_11->db)==VAR_6 ){
        VAR_12 = FUNC_1(VAR_11, VAR_17, &VAR_15, VAR_14);
      }else{
        VAR_12 = FUNC_2(VAR_11, VAR_9, VAR_10);
        VAR_16 = 1;
      }
    }
  }
  if( VAR_12!=VAR_5 ){
    goto update_out;
  }


  if( FUNC_15(VAR_9[0])!=VAR_4 ){
    FUNC_0( FUNC_15(VAR_9[0])==VAR_2 );
    VAR_12 = FUNC_1(VAR_11, VAR_9[0], &VAR_15, VAR_14);
  }


  if( VAR_8>1 && VAR_12==VAR_5 ){
    int VAR_18 = FUNC_13(VAR_9[2 + VAR_11->nColumn + 2]);
    if( VAR_16==0 ){
      VAR_12 = FUNC_2(VAR_11, VAR_9, VAR_10);
      if( VAR_12==VAR_1 && VAR_11->zContentTbl==0 ){
        VAR_12 = VAR_0;
      }
    }
    if( VAR_12==VAR_5 ){
      VAR_12 = FUNC_5(VAR_11, 0, VAR_18, *VAR_10);
    }
    if( VAR_12==VAR_5 ){
      FUNC_0( VAR_11->iPrevDocid==*VAR_10 );
      VAR_12 = FUNC_4(VAR_11, VAR_18, VAR_9, VAR_13);
    }
    if( VAR_11->bHasDocsize ){
      FUNC_3(&VAR_12, VAR_11, VAR_13);
    }
    VAR_15++;
  }

  if( VAR_11->bFts4 ){
    FUNC_7(&VAR_12, VAR_11, VAR_13, VAR_14, VAR_15);
  }

 update_out:
  FUNC_11(VAR_14);
  FUNC_10(VAR_11);
  return VAR_12;
}
