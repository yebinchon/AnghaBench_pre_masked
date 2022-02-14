
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
 int FUNC_1 (TYPE_2__*,TYPE_1__*,char*,int*,...) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,char*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 char* FUNC_4 (char*,int,int) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static char *FUNC_6(int VAR_0, void *VAR_1){
  Error VAR_2 = {0};
  Sqlite VAR_3 = {0};
  i64 VAR_4 = 0;
  int VAR_5 = 0;
  int VAR_6 = 0;

  FUNC_2(&VAR_2, &VAR_3, "test.db", 0);
  while( !FUNC_5(&VAR_2) ){
    do {
      VAR_4 = (VAR_4+1)%100;
      FUNC_1(&VAR_2, &VAR_3, "INSERT INTO t1 VALUES(:iX, :iY+1)", &VAR_4, &VAR_4);
      VAR_5++;
    } while( VAR_4 );

    do {
      VAR_4 = (VAR_4+1)%100;
      FUNC_1(&VAR_2, &VAR_3, "DELETE FROM t1 WHERE x = :iX", &VAR_4);
      VAR_6++;
    } while( VAR_4 );
  }
  FUNC_0(&VAR_2, &VAR_3);

  FUNC_3(&VAR_2);
  return FUNC_4("%d inserts, %d deletes", VAR_5, VAR_6);
}
