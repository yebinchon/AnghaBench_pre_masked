
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_19__ {int member_0; } ;
struct TYPE_18__ {int member_0; } ;
typedef TYPE_1__ Sqlite ;
typedef TYPE_2__ Error ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,char*) ;
 char* FUNC_2 (TYPE_2__*,TYPE_1__*,int,char const*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*,char*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*,char*) ;
 char* FUNC_7 (char*,int) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int FUNC_9 (TYPE_2__*,char*,char*,char*,char*) ;
 int FUNC_10 (TYPE_2__*) ;

__attribute__((used)) static char *FUNC_11(int VAR_0, void *VAR_1){
  Error VAR_2 = {0};
  Sqlite VAR_3 = {0};
  int VAR_4 = 0;

  FUNC_4(&VAR_2, &VAR_3, "test.db", 0);
  while( !FUNC_10(&VAR_2) ){
    const char *VAR_5[] = {
      "SELECT md5sum(x) FROM t1 WHERE rowid != (SELECT max(rowid) FROM t1)",
      "SELECT x FROM t1 WHERE rowid = (SELECT max(rowid) FROM t1)",
    };
    char *VAR_6, *VAR_7, *VAR_8;

    FUNC_1(&VAR_2, &VAR_3, "BEGIN");
    FUNC_3(&VAR_2, &VAR_3);
    VAR_6 = FUNC_2(&VAR_2, &VAR_3, 1, VAR_5[0]);
    VAR_7 = FUNC_2(&VAR_2, &VAR_3, 2, VAR_5[1]);
    VAR_8 = FUNC_2(&VAR_2, &VAR_3, 3, VAR_5[0]);
    FUNC_1(&VAR_2, &VAR_3, "COMMIT");

    if( FUNC_8(VAR_6, VAR_7) || FUNC_8(VAR_6, VAR_8) ){
      FUNC_9(&VAR_2, "Failed read: %s %s %s", VAR_6, VAR_7, VAR_8);
    }

    FUNC_6(&VAR_2, &VAR_3,
        "BEGIN;"
          "INSERT INTO t1 VALUES(randomblob(100));"
          "INSERT INTO t1 VALUES(randomblob(100));"
          "INSERT INTO t1 SELECT md5sum(x) FROM t1;"
        "COMMIT;"
    );
    VAR_4++;
  }
  FUNC_0(&VAR_2, &VAR_3);

  FUNC_5(&VAR_2);
  return FUNC_7("%d iterations", VAR_4);
}
