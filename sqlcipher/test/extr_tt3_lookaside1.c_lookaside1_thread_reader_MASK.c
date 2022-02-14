
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_14__ {int rc; int member_0; } ;
struct TYPE_13__ {int db; int member_0; } ;
typedef TYPE_1__ Sqlite ;
typedef TYPE_2__ Error ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,char*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (int ,char*,int,int **,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*,TYPE_1__*,char*) ;
 int FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static char *FUNC_10(int VAR_2, void *VAR_3){
  Error VAR_4 = {0};
  Sqlite VAR_5 = {0};

  FUNC_2(&VAR_4, &VAR_5, "test.db", 0);

  while( !FUNC_9(&VAR_4) ){
    sqlite3_stmt *VAR_6 = 0;
    int VAR_7;

    FUNC_6(VAR_5.db, "SELECT 1 FROM t1", -1, &VAR_6, 0);
    while( FUNC_7(VAR_6)==VAR_1 ){
      FUNC_1(&VAR_4, &VAR_5, "SELECT length(x||y||z) FROM t2");
    }
    VAR_7 = FUNC_4(VAR_6);
    if( VAR_4.rc==VAR_0 && VAR_7!=VAR_0 ){
      FUNC_8(&VAR_4, &VAR_5, "finalize");
    }
  }

  FUNC_0(&VAR_4, &VAR_5);
  FUNC_3(&VAR_4);
  return FUNC_5("ok");
}
