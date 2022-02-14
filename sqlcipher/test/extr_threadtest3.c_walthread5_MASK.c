
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {int member_0; } ;
typedef TYPE_1__ Threadset ;
struct TYPE_20__ {scalar_t__ rc; int member_0; } ;
struct TYPE_19__ {int member_0; } ;
typedef TYPE_2__ Sqlite ;
typedef TYPE_3__ Error ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*,char*,char*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_1__*,int ,int ) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*,char*,int) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (TYPE_3__*,int) ;
 int FUNC_9 (TYPE_3__*,TYPE_2__*,char*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_10(int VAR_2){
  Error VAR_3 = {0};
  Sqlite VAR_4 = {0};
  Threadset VAR_5 = {0};

  FUNC_5(&VAR_3, &VAR_4, "test.db", 1);
  FUNC_9(&VAR_3, &VAR_4,
      "PRAGMA wal_autocheckpoint = 0;"
      "PRAGMA page_size = 1024;"
      "PRAGMA journal_mode = WAL;"
      "CREATE TABLE t1(x);"
      "BEGIN;"
      "INSERT INTO t1 VALUES(randomblob(900));"
      "INSERT INTO t1 SELECT randomblob(900) FROM t1;      /*     2 */"
      "INSERT INTO t1 SELECT randomblob(900) FROM t1;      /*     4 */"
      "INSERT INTO t1 SELECT randomblob(900) FROM t1;      /*     8 */"
      "INSERT INTO t1 SELECT randomblob(900) FROM t1;      /*    16 */"
      "INSERT INTO t1 SELECT randomblob(900) FROM t1;      /*    32 */"
      "INSERT INTO t1 SELECT randomblob(900) FROM t1;      /*    64 */"
      "INSERT INTO t1 SELECT randomblob(900) FROM t1;      /*   128 */"
      "INSERT INTO t1 SELECT randomblob(900) FROM t1;      /*   256 */"
      "INSERT INTO t1 SELECT randomblob(900) FROM t1;      /*   512 */"
      "INSERT INTO t1 SELECT randomblob(900) FROM t1;      /*  1024 */"
      "INSERT INTO t1 SELECT randomblob(900) FROM t1;      /*  2048 */"
      "INSERT INTO t1 SELECT randomblob(900) FROM t1;      /*  4096 */"
      "INSERT INTO t1 SELECT randomblob(900) FROM t1;      /*  8192 */"
      "INSERT INTO t1 SELECT randomblob(900) FROM t1;      /* 16384 */"
      "INSERT INTO t1 SELECT randomblob(900) FROM t1;      /* 32768 */"
      "INSERT INTO t1 SELECT randomblob(900) FROM t1;      /* 65536 */"
      "COMMIT;"
  );
  FUNC_1(&VAR_3, "test.db", "test_sv.db");
  FUNC_1(&VAR_3, "test.db-wal", "test_sv.db-wal");
  FUNC_0(&VAR_3, &VAR_4);

  FUNC_1(&VAR_3, "test_sv.db", "test.db");
  FUNC_1(&VAR_3, "test_sv.db-wal", "test.db-wal");

  if( VAR_3.rc==VAR_0 ){
    FUNC_7("  WAL file is %d bytes,", (int)FUNC_2(&VAR_3,"test.db-wal"));
    FUNC_7(" DB file is %d.\n", (int)FUNC_2(&VAR_3,"test.db"));
  }

  FUNC_8(&VAR_3, VAR_2);
  FUNC_4(&VAR_3, &VAR_5, VAR_1, 0);
  FUNC_4(&VAR_3, &VAR_5, VAR_1, 0);
  FUNC_4(&VAR_3, &VAR_5, VAR_1, 0);
  FUNC_4(&VAR_3, &VAR_5, VAR_1, 0);
  FUNC_4(&VAR_3, &VAR_5, VAR_1, 0);
  FUNC_3(&VAR_3, &VAR_5);

  if( VAR_3.rc==VAR_0 ){
    FUNC_7("  WAL file is %d bytes,", (int)FUNC_2(&VAR_3,"test.db-wal"));
    FUNC_7(" DB file is %d.\n", (int)FUNC_2(&VAR_3,"test.db"));
  }

  FUNC_6(&VAR_3);
}
