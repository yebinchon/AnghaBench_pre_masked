
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TestDb ;
struct TYPE_2__ {int nOpenTrans; int db; } ;
typedef TYPE_1__ SqlDb ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(TestDb *VAR_1, int VAR_2){
  int VAR_3;
  SqlDb *VAR_4 = (SqlDb *)VAR_1;


  if( VAR_2==0 ) return 0;


  if( VAR_4->nOpenTrans==0 ){
    int VAR_5 = FUNC_0(VAR_4->db,
        "BEGIN; SELECT * FROM sqlite_master LIMIT 1;" , 0, 0, 0
    );
    if( VAR_5!=0 ) return VAR_5;
    VAR_4->nOpenTrans = 1;
  }


  for(VAR_3=VAR_4->nOpenTrans; VAR_3<VAR_2; VAR_3++){
    char *VAR_6 = FUNC_2("SAVEPOINT x%d", VAR_3);
    int VAR_7 = FUNC_0(VAR_4->db, VAR_6, 0, 0, 0);
    FUNC_1(VAR_6);
    if( VAR_7!=VAR_0 ) return VAR_7;
  }

  VAR_4->nOpenTrans = VAR_2;
  return 0;
}
