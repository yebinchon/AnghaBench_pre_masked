
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int db; } ;
typedef TYPE_1__ Fts3Table ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;

int FUNC_3(Fts3Table *VAR_2){
  int VAR_3;
  VAR_3 = FUNC_2(VAR_2->db, "SAVEPOINT fts3", 0, 0, 0);
  if( VAR_3==VAR_1 ){
    VAR_3 = FUNC_0(VAR_2, 1);
    if( VAR_3==VAR_1 || VAR_3==VAR_0 ){
      int VAR_4 = FUNC_2(VAR_2->db, "RELEASE fts3", 0, 0, 0);
      if( VAR_4!=VAR_1 ) VAR_3 = VAR_4;
    }else{
      FUNC_2(VAR_2->db, "ROLLBACK TO fts3", 0, 0, 0);
      FUNC_2(VAR_2->db, "RELEASE fts3", 0, 0, 0);
    }
  }
  FUNC_1(VAR_2);
  return VAR_3;
}
