
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_13__ {scalar_t__ rc; int member_0; } ;
struct TYPE_12__ {int member_0; } ;
typedef TYPE_1__ Sqlite ;
typedef TYPE_2__ Error ;


 int FUNC_0 (void*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,char*,int*) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*,char*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 char* FUNC_6 (char*,int,int) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static char *FUNC_8(int VAR_1, void *VAR_2){
  Error VAR_3 = {0};
  Sqlite VAR_4 = {0};
  int VAR_5 = FUNC_0(VAR_2);

  int VAR_6 = 0;
  int VAR_7 = 0;

  FUNC_4(&VAR_3, &VAR_4, "test.db", 0);
  while( !FUNC_7(&VAR_3) ){
    i64 VAR_8 = (VAR_6 % 4);
    if( VAR_5 ){
      FUNC_2(&VAR_3, &VAR_4);
      FUNC_4(&VAR_3, &VAR_4, "test.db", 0);
    }
    FUNC_3(&VAR_3, &VAR_4, "DELETE FROM t1 WHERE (rowid % 4)==:i", &VAR_8);
    VAR_6++;
    if( VAR_3.rc ) VAR_7++;
    FUNC_1(&VAR_3, VAR_0);
  }
  FUNC_2(&VAR_3, &VAR_4);
  FUNC_5(&VAR_3);
  return FUNC_6("deleted from t1 %d/%d attempts", VAR_7, VAR_6);
}
