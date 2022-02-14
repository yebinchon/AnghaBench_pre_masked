
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {int member_0; } ;
struct TYPE_16__ {int member_0; } ;
typedef TYPE_1__ Sqlite ;
typedef TYPE_2__ Error ;


 int FUNC_0 (void*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*,char*,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,TYPE_1__*,char const*) ;
 char* FUNC_8 (char*,int,int) ;
 int FUNC_9 (TYPE_2__*,char*,int,int) ;
 int FUNC_10 (TYPE_2__*) ;

__attribute__((used)) static char *FUNC_11(int VAR_1, void *VAR_2){
  Error VAR_3 = {0};
  Sqlite VAR_4 = {0};
  int VAR_5[2] = {0, 0};
  int VAR_6 = FUNC_0(VAR_2);

  const char *VAR_7 = "PRAGMA journal_mode = WAL";
  if( VAR_6 ){ VAR_7 = "PRAGMA journal_mode = DELETE"; }

  while( !FUNC_10(&VAR_3) ){
    int VAR_8 = 0;
    int VAR_9 = 0;

    FUNC_5(&VAR_3, &VAR_4, "test.db", 0);

    FUNC_7(&VAR_3, &VAR_4, VAR_7);
    FUNC_1(&VAR_3, VAR_0);
    FUNC_7(&VAR_3, &VAR_4, "BEGIN");
    FUNC_7(&VAR_3, &VAR_4, "INSERT INTO t1 VALUES(NULL, randomblob(100))");

    VAR_8 = (FUNC_3(&VAR_3, "test.db-journal") >= 0);
    VAR_9 = (FUNC_3(&VAR_3, "test.db-wal") >= 0);
    if( (VAR_8+VAR_9)!=1 ){
      FUNC_9(&VAR_3, "File system looks incorrect (%d, %d)",
          VAR_8, VAR_9
      );
    }
    VAR_5[VAR_8]++;

    FUNC_7(&VAR_3, &VAR_4, "COMMIT");
    FUNC_4(&VAR_3, &VAR_4);
    FUNC_2(&VAR_3, &VAR_4);
  }

  FUNC_6(&VAR_3);
  return FUNC_8("W %d R %d", VAR_5[0], VAR_5[1]);
}
