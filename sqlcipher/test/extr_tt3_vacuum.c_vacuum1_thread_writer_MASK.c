
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ i64 ;
struct TYPE_13__ {int member_0; } ;
struct TYPE_12__ {int member_0; } ;
typedef TYPE_1__ Sqlite ;
typedef TYPE_2__ Error ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,char*,...) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,char*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static char *FUNC_7(int VAR_1, void *VAR_2){
  Error VAR_3 = {0};
  Sqlite VAR_4 = {0};
  FUNC_3(&VAR_3, &VAR_4, "test.db", 0);
  i64 VAR_5 = 0;

  while( !FUNC_6(&VAR_3) ){
    VAR_5++;


    FUNC_2(&VAR_3, &VAR_4,
        "WITH loop(i) AS (SELECT 1 UNION ALL SELECT i+1 FROM loop WHERE i<100) "
        "INSERT INTO t1 SELECT randomblob(50), randomblob(2500) FROM loop"
    );


    FUNC_2(&VAR_3, &VAR_4, "DELETE FROM t1 WHERE rowid = :i", &VAR_5);
    FUNC_0(&VAR_3, VAR_0);


    FUNC_2(&VAR_3, &VAR_4, "SELECT * FROM t1 ORDER BY x");
    FUNC_0(&VAR_3, VAR_0);
  }

  FUNC_1(&VAR_3, &VAR_4);
  FUNC_4(&VAR_3);
  return FUNC_5("ok");
}
