
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_2__ {void* iTimeout; int db; scalar_t__ nTest; scalar_t__ nError; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ) ;
 TYPE_1__ VAR_5 ;
 int * FUNC_3 (char*,int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (int *,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 char* FUNC_11 (int) ;
 char* FUNC_12 (char*,scalar_t__) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char*,char const*) ;
 int FUNC_16 (char*) ;

__attribute__((used)) static int FUNC_17(
  int VAR_6,
  char **VAR_7,
  int *VAR_8,
  char **VAR_9
){
  sqlite3_stmt *VAR_10 = 0;
  int VAR_11;
  int VAR_12;
  int VAR_13 = 0;

  *VAR_7 = 0;
  VAR_5.iTimeout = 0;
  while(1){
    VAR_12 = FUNC_16("BEGIN IMMEDIATE");
    if( VAR_12==VAR_1 ){
      FUNC_13(10);
      VAR_13 += 10;
      continue;
    }
    if( VAR_12!=VAR_3 ){
      FUNC_2("in startScript: %s", FUNC_9(VAR_5.db));
    }
    if( VAR_5.nError || VAR_5.nTest ){
      FUNC_4("UPDATE counters SET nError=nError+%d, nTest=nTest+%d",
             VAR_5.nError, VAR_5.nTest);
      VAR_5.nError = 0;
      VAR_5.nTest = 0;
    }
    VAR_10 = FUNC_3("SELECT 1 FROM client WHERE id=%d AND wantHalt",VAR_6);
    VAR_12 = FUNC_14(VAR_10);
    FUNC_10(VAR_10);
    if( VAR_12==VAR_4 ){
      FUNC_4("DELETE FROM client WHERE id=%d", VAR_6);
      VAR_5.iTimeout = VAR_0;
      FUNC_4("COMMIT TRANSACTION;");
      return VAR_2;
    }
    VAR_10 = FUNC_3(
              "SELECT script, id, name FROM task"
              " WHERE client=%d AND starttime IS NULL"
              " ORDER BY id LIMIT 1", VAR_6);
    VAR_12 = FUNC_14(VAR_10);
    if( VAR_12==VAR_4 ){
      int VAR_14 = FUNC_6(VAR_10, 0);
      *VAR_7 = FUNC_11(VAR_14+1);
      FUNC_15(*VAR_7, (const char*)FUNC_8(VAR_10, 0));
      *VAR_8 = VAR_11 = FUNC_7(VAR_10, 1);
      *VAR_9 = FUNC_12("%s", FUNC_8(VAR_10, 2));
      FUNC_10(VAR_10);
      FUNC_4("UPDATE task"
             "   SET starttime=strftime('%%Y-%%m-%%d %%H:%%M:%%f','now')"
             " WHERE id=%d;", VAR_11);
      VAR_5.iTimeout = VAR_0;
      FUNC_4("COMMIT TRANSACTION;");
      return VAR_3;
    }
    FUNC_10(VAR_10);
    if( VAR_12==VAR_2 ){
      if( VAR_13>30000 ){
        FUNC_0("Waited over 30 seconds with no work.  Giving up.");
        FUNC_4("DELETE FROM client WHERE id=%d; COMMIT;", VAR_6);
        FUNC_5(VAR_5.db);
        FUNC_1(1);
      }
      while( FUNC_16("COMMIT")==VAR_1 ){
        FUNC_13(10);
        VAR_13 += 10;
      }
      FUNC_13(100);
      VAR_13 += 100;
      continue;
    }
    FUNC_2("%s", FUNC_9(VAR_5.db));
  }
  VAR_5.iTimeout = VAR_0;
}
