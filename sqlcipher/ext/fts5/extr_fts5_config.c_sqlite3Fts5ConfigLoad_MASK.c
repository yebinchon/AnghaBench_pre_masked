
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_stmt ;
struct TYPE_4__ {scalar_t__* pzErrmsg; int iCookie; int db; int zName; int zDb; int nHashSize; int nCrisisMerge; int nUsermerge; int nAutomerge; int pgsz; } ;
typedef TYPE_1__ Fts5Config ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,char const*,int *,int*) ;
 char* FUNC_2 (int*,char const*,int ,int ) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int * FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,int,int) ;
 int FUNC_8 (int ,char*,int,int **,int ) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (char const*,char*) ;
 int FUNC_11 (int *) ;

int FUNC_12(Fts5Config *VAR_9, int VAR_10){
  const char *VAR_11 = "SELECT k, v FROM %Q.'%q_config'";
  char *VAR_12;
  sqlite3_stmt *VAR_13 = 0;
  int VAR_14 = VAR_7;
  int VAR_15 = 0;


  VAR_9->pgsz = VAR_4;
  VAR_9->nAutomerge = VAR_1;
  VAR_9->nUsermerge = VAR_5;
  VAR_9->nCrisisMerge = VAR_2;
  VAR_9->nHashSize = VAR_3;

  VAR_12 = FUNC_2(&VAR_14, VAR_11, VAR_9->zDb, VAR_9->zName);
  if( VAR_12 ){
    VAR_14 = FUNC_8(VAR_9->db, VAR_12, -1, &VAR_13, 0);
    FUNC_6(VAR_12);
  }

  FUNC_0( VAR_14==VAR_7 || VAR_13==0 );
  if( VAR_14==VAR_7 ){
    while( VAR_8==FUNC_9(VAR_13) ){
      const char *VAR_16 = (const char*)FUNC_3(VAR_13, 0);
      sqlite3_value *VAR_17 = FUNC_4(VAR_13, 1);
      if( 0==FUNC_10(VAR_16, "version") ){
        VAR_15 = FUNC_11(VAR_17);
      }else{
        int VAR_18 = 0;
        FUNC_1(VAR_9, VAR_16, VAR_17, &VAR_18);
      }
    }
    VAR_14 = FUNC_5(VAR_13);
  }

  if( VAR_14==VAR_7 && VAR_15!=VAR_0 ){
    VAR_14 = VAR_6;
    if( VAR_9->pzErrmsg ){
      FUNC_0( 0==*VAR_9->pzErrmsg );
      *VAR_9->pzErrmsg = FUNC_7(
          "invalid fts5 file format (found %d, expected %d) - run 'rebuild'",
          VAR_15, VAR_0
      );
    }
  }

  if( VAR_14==VAR_7 ){
    VAR_9->iCookie = VAR_10;
  }
  return VAR_14;
}
