
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


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,char*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 char* FUNC_5 (char*,int) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static char *FUNC_8(int VAR_2, void *VAR_3){
  Error VAR_4 = {0};
  Sqlite VAR_5 = {0};
  int VAR_6 = 0;

  FUNC_3(&VAR_4, &VAR_5, "test.db", 0);
  while( !FUNC_6(&VAR_4) ){
    FUNC_7(500*1000);
    FUNC_2(&VAR_4, &VAR_5, "PRAGMA wal_checkpoint");
    if( VAR_4.rc==VAR_1 ) VAR_6++;
    FUNC_0(&VAR_4, VAR_0);
  }
  FUNC_1(&VAR_4, &VAR_5);

  FUNC_4(&VAR_4);
  return FUNC_5("%d checkpoints", VAR_6);
}
