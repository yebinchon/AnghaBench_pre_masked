
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int member_0; } ;
struct TYPE_11__ {int member_0; } ;
typedef TYPE_1__ Sqlite ;
typedef TYPE_2__ Error ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,char*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,int,...) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static char *FUNC_7(int VAR_0, void *VAR_1){
  Error VAR_2 = {0};
  Sqlite VAR_3 = {0};
  int VAR_4 = 0;
  int VAR_5 = 0;

  FUNC_2(&VAR_2, &VAR_3, "test.db", 0);
  while( !FUNC_6(&VAR_2) ){
    int VAR_6;

    for(VAR_6=1; VAR_6<9; VAR_6++){
      char *VAR_7 = FUNC_5(
        "CREATE TRIGGER itr%d BEFORE INSERT ON t%d BEGIN "
          "INSERT INTO t%d VALUES(new.x, new.y);"
        "END;", VAR_6, VAR_6, VAR_6+1
      );
      FUNC_1(&VAR_2, &VAR_3, VAR_7);
      FUNC_4(VAR_7);
      VAR_5++;
    }

    for(VAR_6=1; VAR_6<9; VAR_6++){
      char *VAR_8 = FUNC_5(
        "CREATE TRIGGER dtr%d BEFORE DELETE ON t%d BEGIN "
          "DELETE FROM t%d WHERE x = old.x; "
        "END;", VAR_6, VAR_6, VAR_6+1
      );
      FUNC_1(&VAR_2, &VAR_3, VAR_8);
      FUNC_4(VAR_8);
      VAR_5++;
    }

    for(VAR_6=1; VAR_6<9; VAR_6++){
      char *VAR_9 = FUNC_5("DROP TRIGGER itr%d", VAR_6);
      FUNC_1(&VAR_2, &VAR_3, VAR_9);
      FUNC_4(VAR_9);
      VAR_4++;
    }

    for(VAR_6=1; VAR_6<9; VAR_6++){
      char *VAR_10 = FUNC_5("DROP TRIGGER dtr%d", VAR_6);
      FUNC_1(&VAR_2, &VAR_3, VAR_10);
      FUNC_4(VAR_10);
      VAR_4++;
    }
  }
  FUNC_0(&VAR_2, &VAR_3);

  FUNC_3(&VAR_2);
  return FUNC_5("%d created, %d dropped", VAR_5, VAR_4);
}
