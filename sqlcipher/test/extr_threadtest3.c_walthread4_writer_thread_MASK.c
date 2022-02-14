
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_14__ {int member_0; } ;
struct TYPE_13__ {int member_0; } ;
typedef TYPE_1__ Sqlite ;
typedef TYPE_2__ Error ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,char*,int*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,char*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static char *FUNC_6(int VAR_0, void *VAR_1){
  Error VAR_2 = {0};
  Sqlite VAR_3 = {0};
  i64 VAR_4 = 1;

  FUNC_2(&VAR_2, &VAR_3, "test.db", 0);
  FUNC_4(&VAR_2, &VAR_3, "PRAGMA wal_autocheckpoint = 15;");
  while( !FUNC_5(&VAR_2) ){
    FUNC_1(
        &VAR_2, &VAR_3, "REPLACE INTO t1 VALUES(:iRow, randomblob(300))", &VAR_4
    );
    VAR_4++;
    if( VAR_4==10 ) VAR_4 = 0;
  }
  FUNC_0(&VAR_2, &VAR_3);

  FUNC_3(&VAR_2);
  return 0;
}
