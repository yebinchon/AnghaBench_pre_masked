
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ pErr; int errCode; int bBenignMalloc; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_6__ {int rc; int zErrMsg; TYPE_1__* db; } ;
typedef TYPE_2__ Vdbe ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int,int ,int ,int ) ;

int FUNC_5(Vdbe *VAR_2){
  sqlite3 *VAR_3 = VAR_2->db;
  int VAR_4 = VAR_2->rc;
  if( VAR_2->zErrMsg ){
    VAR_3->bBenignMalloc++;
    FUNC_0();
    if( VAR_3->pErr==0 ) VAR_3->pErr = FUNC_2(VAR_3);
    FUNC_4(VAR_3->pErr, -1, VAR_2->zErrMsg, VAR_1, VAR_0);
    FUNC_1();
    VAR_3->bBenignMalloc--;
  }else if( VAR_3->pErr ){
    FUNC_3(VAR_3->pErr);
  }
  VAR_3->errCode = VAR_4;
  return VAR_4;
}
