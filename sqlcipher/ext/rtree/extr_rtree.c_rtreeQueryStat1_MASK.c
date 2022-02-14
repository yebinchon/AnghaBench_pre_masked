
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int sqlite3 ;
typedef scalar_t__ i64 ;
struct TYPE_3__ {void* nRowEst; int zName; int zDb; } ;
typedef TYPE_1__ Rtree ;


 void* FUNC_0 (scalar_t__,int ) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char const*,int ,int ) ;
 int FUNC_5 (int *,char*,int,int **,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,char*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(sqlite3 *VAR_6, Rtree *VAR_7){
  const char *VAR_8 = "SELECT stat FROM %Q.sqlite_stat1 WHERE tbl = '%q_rowid'";
  char *VAR_9;
  sqlite3_stmt *VAR_10;
  int VAR_11;
  i64 VAR_12 = 0;

  VAR_11 = FUNC_7(
      VAR_6, VAR_7->zDb, "sqlite_stat1",0,0,0,0,0,0
  );
  if( VAR_11!=VAR_4 ){
    VAR_7->nRowEst = VAR_0;
    return VAR_11==VAR_2 ? VAR_4 : VAR_11;
  }
  VAR_9 = FUNC_4(VAR_8, VAR_7->zDb, VAR_7->zName);
  if( VAR_9==0 ){
    VAR_11 = VAR_3;
  }else{
    VAR_11 = FUNC_5(VAR_6, VAR_9, -1, &VAR_10, 0);
    if( VAR_11==VAR_4 ){
      if( FUNC_6(VAR_10)==VAR_5 ) VAR_12 = FUNC_1(VAR_10, 0);
      VAR_11 = FUNC_2(VAR_10);
    }else if( VAR_11!=VAR_3 ){
      VAR_11 = VAR_4;
    }

    if( VAR_11==VAR_4 ){
      if( VAR_12==0 ){
        VAR_7->nRowEst = VAR_0;
      }else{
        VAR_7->nRowEst = FUNC_0(VAR_12, VAR_1);
      }
    }
    FUNC_3(VAR_9);
  }

  return VAR_11;
}
