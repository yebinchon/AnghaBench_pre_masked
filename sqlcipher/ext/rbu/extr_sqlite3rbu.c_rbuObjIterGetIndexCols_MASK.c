
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int rc; int zErrmsg; int dbMain; } ;
typedef TYPE_1__ sqlite3rbu ;
typedef int sqlite3_stmt ;
struct TYPE_7__ {scalar_t__ eType; scalar_t__* abTblPk; int nTblCol; char** azTblCol; char** azTblType; scalar_t__ bUnique; int zIdx; } ;
typedef TYPE_2__ RbuObjIter ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int **,int *,char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char*,char*,...) ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static char *FUNC_9(
  sqlite3rbu *VAR_4,
  RbuObjIter *VAR_5,
  char **VAR_6,
  char **VAR_7,
  char **VAR_8,
  int *VAR_9
){
  int VAR_10 = VAR_4->rc;
  int VAR_11;
  char *VAR_12 = 0;
  char *VAR_13 = 0;
  char *VAR_14 = 0;
  char *VAR_15 = 0;
  int VAR_16 = 0;
  const char *VAR_17 = "";
  const char *VAR_18 = "";
  sqlite3_stmt *VAR_19 = 0;

  if( VAR_10==VAR_2 ){
    FUNC_0( VAR_4->zErrmsg==0 );
    VAR_10 = FUNC_1(VAR_4->dbMain, &VAR_19, &VAR_4->zErrmsg,
        FUNC_7("PRAGMA main.index_xinfo = %Q", VAR_5->zIdx)
    );
  }

  while( VAR_10==VAR_2 && VAR_3==FUNC_8(VAR_19) ){
    int VAR_20 = FUNC_3(VAR_19, 1);
    int VAR_21 = FUNC_3(VAR_19, 3);
    const char *VAR_22 = (const char*)FUNC_4(VAR_19, 4);
    const char *VAR_23;
    const char *VAR_24;

    if( VAR_20<0 ){


      if( VAR_5->eType==VAR_0 ){
        int VAR_25;
        for(VAR_25=0; VAR_5->abTblPk[VAR_25]==0; VAR_25++);
        FUNC_0( VAR_25<VAR_5->nTblCol );
        VAR_23 = VAR_5->azTblCol[VAR_25];
      }else if( FUNC_2(VAR_4) ){
        VAR_23 = "_rowid_";
      }else{
        VAR_23 = "rbu_rowid";
      }
      VAR_24 = "INTEGER";
    }else{
      VAR_23 = VAR_5->azTblCol[VAR_20];
      VAR_24 = VAR_5->azTblType[VAR_20];
    }

    VAR_12 = FUNC_7("%z%s\"%w\" COLLATE %Q", VAR_12, VAR_17, VAR_23, VAR_22);
    if( VAR_5->bUnique==0 || FUNC_3(VAR_19, 5) ){
      const char *VAR_26 = (VAR_21 ? " DESC" : "");
      VAR_14 = FUNC_7("%z%s\"rbu_imp_%d%w\"%s",
          VAR_14, VAR_17, VAR_16, VAR_23, VAR_26
      );
    }
    VAR_13 = FUNC_7("%z%s\"rbu_imp_%d%w\" %s COLLATE %Q",
        VAR_13, VAR_17, VAR_16, VAR_23, VAR_24, VAR_22
    );
    VAR_15 = FUNC_7(
        "%z%s\"rbu_imp_%d%w\" IS ?", VAR_15, VAR_18, VAR_16, VAR_23
    );
    if( VAR_12==0 || VAR_14==0 || VAR_13==0 || VAR_15==0 ) VAR_10 = VAR_1;
    VAR_17 = ", ";
    VAR_18 = " AND ";
    VAR_16++;
  }

  VAR_11 = FUNC_5(VAR_19);
  if( VAR_10==VAR_2 ) VAR_10 = VAR_11;

  if( VAR_10!=VAR_2 ){
    FUNC_6(VAR_12);
    FUNC_6(VAR_13);
    FUNC_6(VAR_14);
    FUNC_6(VAR_15);
    VAR_12 = 0;
    VAR_13 = 0;
    VAR_14 = 0;
    VAR_15 = 0;
    VAR_4->rc = VAR_10;
  }

  *VAR_6 = VAR_13;
  *VAR_7 = VAR_14;
  *VAR_8 = VAR_15;
  *VAR_9 = VAR_16;
  return VAR_12;
}
