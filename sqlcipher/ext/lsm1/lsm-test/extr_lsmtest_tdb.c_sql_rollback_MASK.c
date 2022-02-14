
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TestDb ;
struct TYPE_2__ {int nOpenTrans; int db; } ;
typedef TYPE_1__ SqlDb ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int ,int ,int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,int) ;

__attribute__((used)) static int FUNC_4(TestDb *VAR_0, int VAR_1){
  SqlDb *VAR_2 = (SqlDb *)VAR_0;
  FUNC_0( VAR_1>=0 );

  if( VAR_2->nOpenTrans>=1 && VAR_1==0 ){

    int VAR_3 = FUNC_1(VAR_2->db, "ROLLBACK", 0, 0, 0);
    if( VAR_3!=0 ) return VAR_3;
  }else if( VAR_2->nOpenTrans>1 && VAR_1==1 ){

    int VAR_4 = FUNC_1(VAR_2->db, "ROLLBACK TO x1; RELEASE x1;", 0, 0, 0);
    if( VAR_4!=0 ) return VAR_4;
  }else{

    char *VAR_5 = FUNC_3("ROLLBACK TO x%d", VAR_1-1);
    int VAR_6 = FUNC_1(VAR_2->db, VAR_5, 0, 0, 0);
    FUNC_2(VAR_5);
    if( VAR_6!=0 ) return VAR_6;
  }

  VAR_2->nOpenTrans = VAR_1;
  return 0;
}
