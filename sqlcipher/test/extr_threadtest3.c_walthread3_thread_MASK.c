
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_16__ {int member_0; } ;
struct TYPE_15__ {int member_0; } ;
typedef TYPE_1__ Sqlite ;
typedef TYPE_2__ Error ;


 int FUNC_0 (void*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,char*,...) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*,char*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*,char*) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static char *FUNC_8(int VAR_1, void *VAR_2){
  Error VAR_3 = {0};
  Sqlite VAR_4 = {0};
  i64 VAR_5;
  int VAR_6 = FUNC_0(VAR_2);

  FUNC_4(&VAR_3, &VAR_4, "test.db", 0);
  FUNC_6(&VAR_3, &VAR_4, "PRAGMA wal_autocheckpoint = 10");

  VAR_5 = VAR_6+1;
  while( 1 ){
    i64 VAR_7;
    i64 VAR_8;
    int VAR_9 = 0;

    while( 0==(VAR_9 = FUNC_7(&VAR_3)) ){
      i64 VAR_10 = FUNC_2(&VAR_3, &VAR_4, "SELECT max(cnt) FROM t1");
      if( VAR_10+1==VAR_5 ) break;
    }
    if( VAR_9 ) break;

    VAR_7 = FUNC_2(&VAR_3, &VAR_4, "SELECT sum(cnt) FROM t1");
    VAR_8 = FUNC_2(&VAR_3, &VAR_4, "SELECT sum(sum1) FROM t1");
    FUNC_2(&VAR_3, &VAR_4,
        "INSERT INTO t1 VALUES(:iNextWrite, :iSum1, :iSum2)",
        &VAR_5, &VAR_7, &VAR_8
    );
    FUNC_3(&VAR_3, &VAR_4);

    VAR_5 += VAR_0;
  }

  FUNC_1(&VAR_3, &VAR_4);
  FUNC_5(&VAR_3);
  return 0;
}
