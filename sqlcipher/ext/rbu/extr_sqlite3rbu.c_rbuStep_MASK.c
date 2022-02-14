
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ zIdx; int nCol; size_t* aiSrcOrder; scalar_t__ eType; int pSelect; scalar_t__* abTblPk; scalar_t__ nIndex; } ;
struct TYPE_9__ {scalar_t__ rc; int zErrmsg; TYPE_2__ objiter; int nPhaseOneStep; } ;
typedef TYPE_1__ sqlite3rbu ;
typedef int sqlite3_value ;
typedef int sqlite3_stmt ;
typedef TYPE_2__ RbuObjIter ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,char const*,int **) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,char const**) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 void* FUNC_7 (int *,int,int *) ;
 int * FUNC_8 (int ,int) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(sqlite3rbu *VAR_9){
  RbuObjIter *VAR_10 = &VAR_9->objiter;
  const char *VAR_11 = 0;
  int VAR_12 = FUNC_5(VAR_9, &VAR_11);

  if( VAR_12 ){
    FUNC_0( VAR_12==VAR_3 || VAR_12==VAR_0
         || VAR_12==VAR_6 || VAR_12==VAR_1
         || VAR_12==VAR_2 || VAR_12==VAR_7
    );
    FUNC_0( VAR_12!=VAR_7 || VAR_10->zIdx==0 );

    if( VAR_10->zIdx==0 && (VAR_12==VAR_1 || VAR_12==VAR_2) ){
      FUNC_2(VAR_9);
    }
    else if( VAR_12==VAR_6 ){
      if( VAR_10->zIdx==0 ){
        VAR_9->nPhaseOneStep += VAR_9->objiter.nIndex;
        FUNC_4(VAR_9, VAR_0);
      }
      if( VAR_9->rc==VAR_8 ) FUNC_4(VAR_9, VAR_3);
    }
    else if( VAR_12!=VAR_7 ){
      FUNC_4(VAR_9, VAR_12);
    }
    else{
      sqlite3_value *VAR_13;
      sqlite3_stmt *VAR_14 = 0;
      FUNC_0( VAR_12==VAR_7 );
      VAR_9->nPhaseOneStep -= VAR_9->objiter.nIndex;
      FUNC_3(VAR_9, VAR_10, VAR_11, &VAR_14);
      if( VAR_14 ){
        int VAR_15;
        for(VAR_15=0; VAR_9->rc==VAR_8 && VAR_15<VAR_10->nCol; VAR_15++){
          char VAR_16 = VAR_11[VAR_10->aiSrcOrder[VAR_15]];
          VAR_13 = FUNC_8(VAR_10->pSelect, VAR_15);
          if( VAR_10->abTblPk[VAR_15] || VAR_16!='.' ){
            VAR_9->rc = FUNC_7(VAR_14, VAR_15+1, VAR_13);
          }
        }
        if( VAR_9->rc==VAR_8
         && (VAR_10->eType==VAR_5 || VAR_10->eType==VAR_4)
        ){

          FUNC_1(VAR_10->pSelect, VAR_10->nCol+1, "rbu_rowid");
          VAR_13 = FUNC_8(VAR_10->pSelect, VAR_10->nCol+1);
          VAR_9->rc = FUNC_7(VAR_14, VAR_10->nCol+1, VAR_13);
        }
        if( VAR_9->rc==VAR_8 ){
          FUNC_9(VAR_14);
          VAR_9->rc = FUNC_6(VAR_14, &VAR_9->zErrmsg);
        }
      }
    }
  }
  return VAR_9->rc;
}
