
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 (char*,char*,int) ;
 int FUNC_10 (char*) ;
 char* VAR_1 ;

int FUNC_11(int VAR_2, char **VAR_3){
  sqlite3 *VAR_4;
  int VAR_5;

  if( VAR_2<3 ) FUNC_10(VAR_3[0]);
  if( FUNC_8(VAR_3[1], "new")==0 ){
    VAR_4 = FUNC_3(VAR_3[VAR_2-1]);
    for(VAR_5=2; VAR_5<VAR_2-1; VAR_5++){
      if( FUNC_8(VAR_3[VAR_5],"-utf8")==0 ){
        FUNC_5(VAR_4, "PRAGMA encoding=UTF8");
      }else if( FUNC_8(VAR_3[VAR_5], "-utf16le")==0 ){
        FUNC_5(VAR_4, "PRAGMA encoding=UTF16LE");
      }else if( FUNC_8(VAR_3[VAR_5], "-utf16be")==0 ){
        FUNC_5(VAR_4, "PRAGMA encoding=UTF16BE");
      }else if( FUNC_9(VAR_3[VAR_5], "-pagesize=", 10)==0 ){
        int VAR_6 = FUNC_0(&VAR_3[VAR_5][10]);
        char VAR_7[100];
        FUNC_6(VAR_7, "PRAGMA pagesize=%d", VAR_6);
        FUNC_5(VAR_4, VAR_7);
      }else{
        FUNC_2(VAR_0, "unknown option %s\n", VAR_3[VAR_5]);
        FUNC_10(VAR_3[0]);
      }
    }
    FUNC_5(VAR_4,
       "BEGIN;"
       "CREATE TABLE t1(x INTEGER PRIMARY KEY, y);"
       "INSERT INTO t1(y) VALUES('abcdefghijklmnopqrstuvwxyz');"
       "INSERT INTO t1(y) VALUES('abcdefghijklmnopqrstuvwxyz');"
       "INSERT INTO t1(y) SELECT y FROM t1;"
       "INSERT INTO t1(y) SELECT y FROM t1;"
       "INSERT INTO t1(y) SELECT y FROM t1;"
       "INSERT INTO t1(y) SELECT y FROM t1;"
       "INSERT INTO t1(y) SELECT y FROM t1;"
       "INSERT INTO t1(y) SELECT y FROM t1;"
       "INSERT INTO t1(y) SELECT y FROM t1;"
       "INSERT INTO t1(y) SELECT y FROM t1;"
       "INSERT INTO t1(y) SELECT y FROM t1;"
       "UPDATE t1 SET y=(y || x);"
       "CREATE INDEX t1y ON t1(y);"
       "COMMIT;"
    );
    FUNC_7(VAR_4);
  }else if( FUNC_8(VAR_3[1], "check")==0 ){
    VAR_4 = FUNC_3(VAR_3[VAR_2-1]);
    FUNC_5(VAR_4, "PRAGMA integrity_check");
    if( FUNC_8(VAR_1, "ok")!=0 ){
      FUNC_2(VAR_0, "Integrity check: %s\n", VAR_1);
      FUNC_1(1);
    }
    FUNC_5(VAR_4,
      "SELECT count(*) FROM t1 WHERE y<>('abcdefghijklmnopqrstuvwxyz' || x)"
    );
    if( FUNC_8(VAR_1, "0")!=0 ){
      FUNC_2(VAR_0, "Wrong content\n");
      FUNC_1(1);
    }
    FUNC_4("Ok\n");
  }else if( FUNC_8(VAR_3[1], "crash")==0 ){
    VAR_4 = FUNC_3(VAR_3[VAR_2-1]);
    for(VAR_5=2; VAR_5<VAR_2-1; VAR_5++){
      if( FUNC_8(VAR_3[VAR_5],"-wal")==0 ){
        FUNC_5(VAR_4, "PRAGMA journal_mode=WAL");
      }else if( FUNC_8(VAR_3[VAR_5], "-rollback")==0 ){
        FUNC_5(VAR_4, "PRAGMA journal_mode=DELETE");
      }else{
        FUNC_2(VAR_0, "unknown option %s\n", VAR_3[VAR_5]);
        FUNC_10(VAR_3[0]);
      }
    }
    FUNC_5(VAR_4,
      "PRAGMA cache_size=10;"
      "BEGIN;"
      "UPDATE t1 SET y=(y || -x)"
    );
    FUNC_1(0);
  }else{
    FUNC_10(VAR_3[0]);
  }
  return 0;
}
