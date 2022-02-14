
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {int member_0; } ;
typedef TYPE_1__ Threadset ;
struct TYPE_22__ {scalar_t__ eMode; int nMaxFrame; } ;
struct TYPE_21__ {int member_0; } ;
struct TYPE_20__ {int db; int member_0; } ;
typedef TYPE_2__ Sqlite ;
typedef TYPE_3__ Error ;
typedef TYPE_4__ CheckpointStarvationCtx ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_1__*,int ,int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,char*,int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (TYPE_3__*,TYPE_2__*,char*) ;
 int FUNC_8 (int ,int ,void*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(int VAR_4, CheckpointStarvationCtx *VAR_5){
  Error VAR_6 = {0};
  Sqlite VAR_7 = {0};
  Threadset VAR_8 = {0};
  int VAR_9 = 0;
  int VAR_10;

  FUNC_3(&VAR_6, &VAR_7, "test.db", 1);
  FUNC_7(&VAR_6, &VAR_7,
      "PRAGMA page_size = 1024;"
      "PRAGMA journal_mode = WAL;"
      "CREATE TABLE t1(x);"
  );

  FUNC_6(&VAR_6, VAR_4);

  for(VAR_10=0; VAR_10<4; VAR_10++){
    FUNC_2(&VAR_6, &VAR_8, VAR_2, 0);
    FUNC_10(VAR_0*1000/4);
  }

  FUNC_8(VAR_7.db, VAR_3, (void *)VAR_5);
  while( !FUNC_9(&VAR_6) ){
    FUNC_7(&VAR_6, &VAR_7, "INSERT INTO t1 VALUES(randomblob(1200))");
    VAR_9++;
  }

  FUNC_5(" Checkpoint mode  : %s\n",
      VAR_5->eMode==VAR_1 ? "PASSIVE" : "RESTART"
  );
  FUNC_5(" Peak WAL         : %d frames\n", VAR_5->nMaxFrame);
  FUNC_5(" Transaction count: %d transactions\n", VAR_9);

  FUNC_1(&VAR_6, &VAR_8);
  FUNC_0(&VAR_6, &VAR_7);
  FUNC_4(&VAR_6);
}
