
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ zIdx; int nCol; scalar_t__ eType; scalar_t__* abTblPk; int pSelect; int * pInsert; int * pDelete; scalar_t__ nIndex; } ;
struct TYPE_5__ {int zErrmsg; void* rc; TYPE_2__ objiter; int nPhaseOneStep; } ;
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
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 scalar_t__ VAR_9 ;
 void* VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 void* FUNC_3 (int *,int *) ;
 void* FUNC_4 (int *,int,int *) ;
 scalar_t__ FUNC_5 (int ,int) ;
 int * FUNC_6 (int ,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(sqlite3rbu *VAR_11, int VAR_12){
  RbuObjIter *VAR_13 = &VAR_11->objiter;
  sqlite3_value *VAR_14;
  sqlite3_stmt *VAR_15;
  int VAR_16;

  FUNC_0( VAR_11->rc==VAR_10 );
  FUNC_0( VAR_12!=VAR_0 || VAR_13->zIdx==0 );
  FUNC_0( VAR_12==VAR_0 || VAR_12==VAR_1
       || VAR_12==VAR_3 || VAR_12==VAR_2
  );





  if( VAR_12==VAR_0 ){
    VAR_11->nPhaseOneStep -= VAR_11->objiter.nIndex;
  }

  if( VAR_12==VAR_1 || VAR_12==VAR_0 ){
    VAR_15 = VAR_13->pDelete;
  }else{
    VAR_15 = VAR_13->pInsert;
  }

  for(VAR_16=0; VAR_16<VAR_13->nCol; VAR_16++){



    if( VAR_12==VAR_3
     && VAR_13->zIdx==0 && VAR_13->eType==VAR_5 && VAR_13->abTblPk[VAR_16]
     && FUNC_5(VAR_13->pSelect, VAR_16)==VAR_9
    ){
      VAR_11->rc = VAR_8;
      VAR_11->zErrmsg = FUNC_7("datatype mismatch");
      return;
    }

    if( VAR_12==VAR_0 && VAR_13->abTblPk[VAR_16]==0 ){
      continue;
    }

    VAR_14 = FUNC_6(VAR_13->pSelect, VAR_16);
    VAR_11->rc = FUNC_4(VAR_15, VAR_16+1, VAR_14);
    if( VAR_11->rc ) return;
  }
  if( VAR_13->zIdx==0 ){
    if( VAR_13->eType==VAR_7
     || VAR_13->eType==VAR_6
     || (VAR_13->eType==VAR_4 && FUNC_2(VAR_11))
    ){







      FUNC_1(VAR_13->pSelect, VAR_13->nCol+1,
          FUNC_2(VAR_11) ? "rowid" : "rbu_rowid"
      );
      VAR_14 = FUNC_6(VAR_13->pSelect, VAR_13->nCol+1);
      VAR_11->rc = FUNC_4(VAR_15, VAR_13->nCol+1, VAR_14);
    }
  }
  if( VAR_11->rc==VAR_10 ){
    FUNC_8(VAR_15);
    VAR_11->rc = FUNC_3(VAR_15, &VAR_11->zErrmsg);
  }
}
