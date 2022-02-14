
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zNum ;
struct TYPE_2__ {int szTest; int pStmt; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (char*,...) ;
 int const FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (int ,int,char*,int,int ) ;

void FUNC_9(void){
  int VAR_2, VAR_3;
  char VAR_4[2000];

  const int VAR_5 = 500*VAR_1.szTest;
  const int VAR_6 = 100*VAR_1.szTest;

  FUNC_2(
      "BEGIN;"
      "CREATE TABLE t1(rowid INTEGER PRIMARY KEY, i INTEGER, t TEXT);"
      "CREATE TABLE t2(rowid INTEGER PRIMARY KEY, i INTEGER, t TEXT);"
      "CREATE TABLE t3(rowid INTEGER PRIMARY KEY, i INTEGER, t TEXT);"
      "CREATE VIEW v1 AS SELECT rowid, i, t FROM t1;"
      "CREATE VIEW v2 AS SELECT rowid, i, t FROM t2;"
      "CREATE VIEW v3 AS SELECT rowid, i, t FROM t3;"
  );
  for(VAR_2=1; VAR_2<=3; VAR_2++){
    FUNC_4("INSERT INTO t%d VALUES(NULL,?1,?2)", VAR_2);
    for(VAR_3=0; VAR_3<VAR_5; VAR_3++){
      int VAR_7 = FUNC_5() % VAR_5;
      FUNC_3(VAR_7, VAR_4, sizeof(VAR_4));
      FUNC_7(VAR_1.pStmt, 1, VAR_7);
      FUNC_8(VAR_1.pStmt, 2, VAR_4, -1, VAR_0);
      FUNC_6();
    }
  }
  FUNC_2(
      "CREATE INDEX i1 ON t1(t);"
      "CREATE INDEX i2 ON t2(t);"
      "CREATE INDEX i3 ON t3(t);"
      "COMMIT;"
  );

  FUNC_0(100, "speed4p-join1");
  FUNC_4(
      "SELECT * FROM t1, t2, t3 WHERE t1.oid = t2.oid AND t2.oid = t3.oid"
  );
  FUNC_6();
  FUNC_1();

  FUNC_0(110, "speed4p-join2");
  FUNC_4(
      "SELECT * FROM t1, t2, t3 WHERE t1.t = t2.t AND t2.t = t3.t"
  );
  FUNC_6();
  FUNC_1();

  FUNC_0(120, "speed4p-view1");
  for(VAR_2=1; VAR_2<=3; VAR_2++){
    FUNC_4("SELECT * FROM v%d WHERE rowid = ?", VAR_2);
    for(VAR_3=0; VAR_3<VAR_6; VAR_3+=3){
      FUNC_7(VAR_1.pStmt, 1, VAR_3*3);
      FUNC_6();
    }
  }
  FUNC_1();

  FUNC_0(130, "speed4p-table1");
  for(VAR_2=1; VAR_2<=3; VAR_2++){
    FUNC_4("SELECT * FROM t%d WHERE rowid = ?", VAR_2);
    for(VAR_3=0; VAR_3<VAR_6; VAR_3+=3){
      FUNC_7(VAR_1.pStmt, 1, VAR_3*3);
      FUNC_6();
    }
  }
  FUNC_1();

  FUNC_0(140, "speed4p-table1");
  for(VAR_2=1; VAR_2<=3; VAR_2++){
    FUNC_4("SELECT * FROM t%d WHERE rowid = ?", VAR_2);
    for(VAR_3=0; VAR_3<VAR_6; VAR_3+=3){
      FUNC_7(VAR_1.pStmt, 1, VAR_3*3);
      FUNC_6();
    }
  }
  FUNC_1();

  FUNC_0(150, "speed4p-subselect1");
  FUNC_4("SELECT "
      "(SELECT t FROM t1 WHERE rowid = ?1),"
      "(SELECT t FROM t2 WHERE rowid = ?1),"
      "(SELECT t FROM t3 WHERE rowid = ?1)"
  );
  for(VAR_2=0; VAR_2<VAR_6; VAR_2++){
    FUNC_7(VAR_1.pStmt, 1, VAR_2*3);
    FUNC_6();
  }
  FUNC_1();

  FUNC_0(160, "speed4p-rowid-update");
  FUNC_2("BEGIN");
  FUNC_4("UPDATE t1 SET i=i+1 WHERE rowid=?1");
  for(VAR_2=0; VAR_2<VAR_6; VAR_2++){
    FUNC_7(VAR_1.pStmt, 1, VAR_2);
    FUNC_6();
  }
  FUNC_2("COMMIT");
  FUNC_1();

  FUNC_2("CREATE TABLE t5(t TEXT PRIMARY KEY, i INTEGER);");
  FUNC_0(170, "speed4p-insert-ignore");
  FUNC_2("INSERT OR IGNORE INTO t5 SELECT t, i FROM t1");
  FUNC_1();

  FUNC_2(
      "CREATE TABLE log(op TEXT, r INTEGER, i INTEGER, t TEXT);"
      "CREATE TABLE t4(rowid INTEGER PRIMARY KEY, i INTEGER, t TEXT);"
      "CREATE TRIGGER t4_trigger1 AFTER INSERT ON t4 BEGIN"
      "  INSERT INTO log VALUES('INSERT INTO t4', new.rowid, new.i, new.t);"
      "END;"
      "CREATE TRIGGER t4_trigger2 AFTER UPDATE ON t4 BEGIN"
      "  INSERT INTO log VALUES('UPDATE OF t4', new.rowid, new.i, new.t);"
      "END;"
      "CREATE TRIGGER t4_trigger3 AFTER DELETE ON t4 BEGIN"
      "  INSERT INTO log VALUES('DELETE OF t4', old.rowid, old.i, old.t);"
      "END;"
      "BEGIN;"
  );

  FUNC_0(180, "speed4p-trigger1");
  FUNC_4("INSERT INTO t4 VALUES(NULL, ?1, ?2)");
  for(VAR_2=0; VAR_2<VAR_6; VAR_2++){
    FUNC_3(VAR_2, VAR_4, sizeof(VAR_4));
    FUNC_7(VAR_1.pStmt, 1, VAR_2);
    FUNC_8(VAR_1.pStmt, 2, VAR_4, -1, VAR_0);
    FUNC_6();
  }
  FUNC_1();






  FUNC_0(190, "speed4p-trigger2");
  FUNC_4("UPDATE t4 SET i = ?1, t = ?2 WHERE rowid = ?3");
  for(VAR_2=1; VAR_2<=VAR_6*2; VAR_2+=2){
    FUNC_3(VAR_2*2, VAR_4, sizeof(VAR_4));
    FUNC_7(VAR_1.pStmt, 1, VAR_2*2);
    FUNC_8(VAR_1.pStmt, 2, VAR_4, -1, VAR_0);
    FUNC_7(VAR_1.pStmt, 3, VAR_2);
    FUNC_6();
  }
  FUNC_1();




  FUNC_0(200, "speed4p-trigger3");
  FUNC_4("DELETE FROM t4 WHERE rowid = ?1");
  for(VAR_2=1; VAR_2<=VAR_6*2; VAR_2+=2){
    FUNC_7(VAR_1.pStmt, 1, VAR_2*2);
    FUNC_6();
  }
  FUNC_1();
  FUNC_2("COMMIT");







  FUNC_2(
      "DROP TABLE t4;"
      "DROP TABLE log;"
      "VACUUM;"
      "CREATE TABLE t4(rowid INTEGER PRIMARY KEY, i INTEGER, t TEXT);"
      "BEGIN;"
  );
  FUNC_0(210, "speed4p-notrigger1");
  FUNC_4("INSERT INTO t4 VALUES(NULL, ?1, ?2)");
  for(VAR_2=0; VAR_2<VAR_6; VAR_2++){
    FUNC_3(VAR_2, VAR_4, sizeof(VAR_4));
    FUNC_7(VAR_1.pStmt, 1, VAR_2);
    FUNC_8(VAR_1.pStmt, 2, VAR_4, -1, VAR_0);
    FUNC_6();
  }
  FUNC_1();
  FUNC_0(210, "speed4p-notrigger2");
  FUNC_4("UPDATE t4 SET i = ?1, t = ?2 WHERE rowid = ?3");
  for(VAR_2=1; VAR_2<=VAR_6*2; VAR_2+=2){
    FUNC_3(VAR_2*2, VAR_4, sizeof(VAR_4));
    FUNC_7(VAR_1.pStmt, 1, VAR_2*2);
    FUNC_8(VAR_1.pStmt, 2, VAR_4, -1, VAR_0);
    FUNC_7(VAR_1.pStmt, 3, VAR_2);
    FUNC_6();
  }
  FUNC_1();
  FUNC_0(220, "speed4p-notrigger3");
  FUNC_4("DELETE FROM t4 WHERE rowid = ?1");
  for(VAR_2=1; VAR_2<=VAR_6*2; VAR_2+=2){
    FUNC_7(VAR_1.pStmt, 1, VAR_2*2);
    FUNC_6();
  }
  FUNC_1();
  FUNC_2("COMMIT");
}
