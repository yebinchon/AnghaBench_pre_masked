
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ i64 ;
struct TYPE_15__ {int member_0; } ;
struct TYPE_14__ {int member_0; } ;
typedef TYPE_1__ Sqlite ;
typedef TYPE_2__ Error ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,char*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_2__*,char*,scalar_t__,scalar_t__) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static char *FUNC_8(int VAR_1, void *VAR_2){
  Error VAR_3 = {0};
  Sqlite VAR_4 = {0};

  FUNC_2(&VAR_3, &VAR_4, "test.db", 0);
  while( !FUNC_6(&VAR_3) ){
    i64 VAR_5, VAR_6;
    FUNC_4(&VAR_3, &VAR_4, "BEGIN");
    VAR_5 = FUNC_1(&VAR_3, &VAR_4, "SELECT count(x) FROM t1");
    FUNC_7(VAR_0*1000);
    VAR_6 = FUNC_1(&VAR_3, &VAR_4, "SELECT count(x) FROM t1");
    FUNC_4(&VAR_3, &VAR_4, "COMMIT");

    if( VAR_5!=VAR_6 ){
      FUNC_5(&VAR_3, "Isolation failure - %lld %lld", VAR_5, VAR_6);
    }
  }
  FUNC_0(&VAR_3, &VAR_4);

  FUNC_3(&VAR_3);
  return 0;
}
