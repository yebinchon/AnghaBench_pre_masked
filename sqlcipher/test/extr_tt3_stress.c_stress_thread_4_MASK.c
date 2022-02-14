
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ rc; int member_0; } ;
struct TYPE_12__ {int member_0; } ;
typedef TYPE_1__ Sqlite ;
typedef TYPE_2__ Error ;


 int FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,char*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*,char*) ;
 char* FUNC_6 (char*,int,int) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static char *FUNC_8(int VAR_2, void *VAR_3){
  Error VAR_4 = {0};
  Sqlite VAR_5 = {0};
  int VAR_6 = 0;
  int VAR_7 = 0;
  int VAR_8 = FUNC_0(VAR_3);

  FUNC_3(&VAR_4, &VAR_5, "test.db", 0);
  while( !FUNC_7(&VAR_4) ){
    if( VAR_8 ){
      FUNC_2(&VAR_4, &VAR_5);
      FUNC_3(&VAR_4, &VAR_5, "test.db", 0);
    }
    FUNC_5(&VAR_4, &VAR_5,
        "WITH loop(i) AS (SELECT 1 UNION ALL SELECT i+1 FROM loop LIMIT 200) "
        "INSERT INTO t1 VALUES(randomblob(60), randomblob(60));"
    );
    VAR_6++;
    if( VAR_4.rc ) VAR_7++;
    FUNC_1(&VAR_4, VAR_1);
    FUNC_1(&VAR_4, VAR_0);
  }
  FUNC_2(&VAR_4, &VAR_5);
  FUNC_4(&VAR_4);
  return FUNC_6("wrote t1 %d/%d attempts", VAR_7, VAR_6);
}
