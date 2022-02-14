
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite_int64 ;
struct TYPE_5__ {char* zErrMsg; } ;
typedef TYPE_1__ sqlite3_vtab ;
typedef int sqlite3_value ;
typedef int sqlite3_stmt ;
typedef int sqlite3 ;
struct TYPE_6__ {int nCol; int inTransaction; int zTableName; int * aCol; int * db; } ;
typedef TYPE_2__ echo_vtab ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (int *,int,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 char* FUNC_7 (char*,...) ;
 int FUNC_8 (int *,char*,int,int **,int ) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (char**,char*,int,int*) ;

int FUNC_12(
  sqlite3_vtab *VAR_5,
  int VAR_6,
  sqlite3_value **VAR_7,
  sqlite_int64 *VAR_8
){
  echo_vtab *VAR_9 = (echo_vtab *)VAR_5;
  sqlite3 *VAR_10 = VAR_9->db;
  int VAR_11 = VAR_4;

  sqlite3_stmt *VAR_12 = 0;
  char *VAR_13 = 0;
  int VAR_14 = 0;
  int VAR_15 = 0;
  int VAR_16;

  FUNC_0( VAR_6==VAR_9->nCol+2 || VAR_6==1 );



  FUNC_0( VAR_9->inTransaction );

  if( FUNC_1(VAR_9, "xUpdate") ){
    return VAR_0;
  }


  if( VAR_6>1 && FUNC_10(VAR_7[0])==VAR_1 ){
    char *VAR_17 = " SET";
    VAR_13 = FUNC_7("UPDATE %Q", VAR_9->zTableName);
    if( !VAR_13 ){
      VAR_11 = VAR_2;
    }

    VAR_15 = (VAR_7[1] && FUNC_10(VAR_7[1])==VAR_1);
    VAR_14 = 1;

    if( VAR_15 ){
       FUNC_11(&VAR_13, " SET rowid=?1 ", 0, &VAR_11);
       VAR_17 = ",";
    }
    for(VAR_16=2; VAR_16<VAR_6; VAR_16++){
      if( VAR_7[VAR_16]==0 ) continue;
      FUNC_11(&VAR_13, FUNC_7(
          "%s %Q=?%d", VAR_17, VAR_9->aCol[VAR_16-2], VAR_16), 1, &VAR_11);
      VAR_17 = ",";
    }
    FUNC_11(&VAR_13, FUNC_7(" WHERE rowid=?%d", VAR_6), 1, &VAR_11);
  }


  else if( VAR_6==1 && FUNC_10(VAR_7[0])==VAR_1 ){
    VAR_13 = FUNC_7("DELETE FROM %Q WHERE rowid = ?1", VAR_9->zTableName);
    if( !VAR_13 ){
      VAR_11 = VAR_2;
    }
    VAR_14 = 1;
  }


  else if( VAR_6>2 && FUNC_10(VAR_7[0])==VAR_3 ){
    int VAR_18;
    char *VAR_19 = 0;
    char *VAR_20 = 0;

    VAR_19 = FUNC_7("INSERT INTO %Q (", VAR_9->zTableName);
    if( !VAR_19 ){
      VAR_11 = VAR_2;
    }
    if( FUNC_10(VAR_7[1])==VAR_1 ){
      VAR_15 = 1;
      VAR_20 = FUNC_7("?");
      FUNC_11(&VAR_19, "rowid", 0, &VAR_11);
    }

    FUNC_0((VAR_9->nCol+2)==VAR_6);
    for(VAR_18=2; VAR_18<VAR_6; VAR_18++){
      FUNC_11(&VAR_19,
          FUNC_7("%s%Q", VAR_20?", ":"", VAR_9->aCol[VAR_18-2]), 1, &VAR_11);
      FUNC_11(&VAR_20,
          FUNC_7("%s?%d", VAR_20?", ":"", VAR_18), 1, &VAR_11);
    }

    FUNC_11(&VAR_13, VAR_19, 1, &VAR_11);
    FUNC_11(&VAR_13, ") VALUES(", 0, &VAR_11);
    FUNC_11(&VAR_13, VAR_20, 1, &VAR_11);
    FUNC_11(&VAR_13, ")", 0, &VAR_11);
  }


  else{
    FUNC_0(0);
    return VAR_0;
  }

  if( VAR_11==VAR_4 ){
    VAR_11 = FUNC_8(VAR_10, VAR_13, -1, &VAR_12, 0);
  }
  FUNC_0( VAR_11!=VAR_4 || VAR_12 );
  FUNC_5(VAR_13);
  if( VAR_11==VAR_4 ) {
    if( VAR_14 ){
      FUNC_2(VAR_12, VAR_6, VAR_7[0]);
    }
    if( VAR_15 ){
      FUNC_2(VAR_12, 1, VAR_7[1]);
    }
    for(VAR_16=2; VAR_16<VAR_6 && VAR_11==VAR_4; VAR_16++){
      if( VAR_7[VAR_16] ) VAR_11 = FUNC_2(VAR_12, VAR_16, VAR_7[VAR_16]);
    }
    if( VAR_11==VAR_4 ){
      FUNC_9(VAR_12);
      VAR_11 = FUNC_4(VAR_12);
    }else{
      FUNC_4(VAR_12);
    }
  }

  if( VAR_8 && VAR_11==VAR_4 ){
    *VAR_8 = FUNC_6(VAR_10);
  }
  if( VAR_11!=VAR_4 ){
    VAR_5->zErrMsg = FUNC_7("echo-vtab-error: %s", FUNC_3(VAR_10));
  }

  return VAR_11;
}
