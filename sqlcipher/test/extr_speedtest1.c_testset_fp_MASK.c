
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int szTest; int pStmt; int zNN; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int,char*,int,int ) ;

void FUNC_8(void){
  int VAR_2;
  int VAR_3;
  char VAR_4[100];
  char VAR_5[100];

  VAR_2 = VAR_1.szTest*5000;
  FUNC_1(100, "Fill a table with %d FP values", VAR_2*2);
  FUNC_3("BEGIN");
  FUNC_3("CREATE%s TABLE t1(a REAL %s, b REAL %s);",
                  FUNC_0(1), VAR_1.zNN, VAR_1.zNN);
  FUNC_4("INSERT INTO t1 VALUES(?1,?2); -- %d times", VAR_2);
  for(VAR_3=1; VAR_3<=VAR_2; VAR_3++){
    FUNC_5(VAR_4);
    FUNC_5(VAR_5);
    FUNC_7(VAR_1.pStmt, 1, VAR_4, -1, VAR_0);
    FUNC_7(VAR_1.pStmt, 2, VAR_5, -1, VAR_0);
    FUNC_6();
  }
  FUNC_3("COMMIT");
  FUNC_2();

  VAR_2 = VAR_1.szTest/25 + 2;
  FUNC_1(110, "%d range queries", VAR_2);
  FUNC_4("SELECT sum(b) FROM t1 WHERE a BETWEEN ?1 AND ?2");
  for(VAR_3=1; VAR_3<=VAR_2; VAR_3++){
    FUNC_5(VAR_4);
    FUNC_5(VAR_5);
    FUNC_7(VAR_1.pStmt, 1, VAR_4, -1, VAR_0);
    FUNC_7(VAR_1.pStmt, 2, VAR_5, -1, VAR_0);
    FUNC_6();
  }
  FUNC_2();

  FUNC_1(120, "CREATE INDEX three times");
  FUNC_3("BEGIN;");
  FUNC_3("CREATE INDEX t1a ON t1(a);");
  FUNC_3("CREATE INDEX t1b ON t1(b);");
  FUNC_3("CREATE INDEX t1ab ON t1(a,b);");
  FUNC_3("COMMIT;");
  FUNC_2();

  VAR_2 = VAR_1.szTest/3 + 2;
  FUNC_1(130, "%d indexed range queries", VAR_2);
  FUNC_4("SELECT sum(b) FROM t1 WHERE a BETWEEN ?1 AND ?2");
  for(VAR_3=1; VAR_3<=VAR_2; VAR_3++){
    FUNC_5(VAR_4);
    FUNC_5(VAR_5);
    FUNC_7(VAR_1.pStmt, 1, VAR_4, -1, VAR_0);
    FUNC_7(VAR_1.pStmt, 2, VAR_5, -1, VAR_0);
    FUNC_6();
  }
  FUNC_2();
}
