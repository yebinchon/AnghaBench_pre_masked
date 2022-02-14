
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_12__ {int member_0; } ;
struct TYPE_11__ {int member_0; } ;
typedef TYPE_1__ Sqlite ;
typedef TYPE_2__ Error ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,char*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,char*,int) ;

__attribute__((used)) static char *FUNC_5(int VAR_0, void *VAR_1){
  Error VAR_2 = {0};
  Sqlite VAR_3 = {0};
  i64 VAR_4;

  FUNC_2(&VAR_2, &VAR_3, "test.db", 0);
  VAR_4 = FUNC_1(&VAR_2, &VAR_3, "SELECT count(*) FROM t1");
  FUNC_0(&VAR_2, &VAR_3);

  if( VAR_4!=65536 ) FUNC_4(&VAR_2, "Bad row count: %d", (int)VAR_4);
  FUNC_3(&VAR_2);
  return 0;
}
