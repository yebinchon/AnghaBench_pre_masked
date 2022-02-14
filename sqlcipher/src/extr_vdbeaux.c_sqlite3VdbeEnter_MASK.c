
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nDb; TYPE_3__* aDb; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_6__ {int lockMask; TYPE_1__* db; } ;
typedef TYPE_2__ Vdbe ;
struct TYPE_7__ {scalar_t__ pBt; } ;
typedef TYPE_3__ Db ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(Vdbe *VAR_0){
  int VAR_1;
  sqlite3 *VAR_2;
  Db *VAR_3;
  int VAR_4;
  if( FUNC_1(VAR_0->lockMask) ) return;
  VAR_2 = VAR_0->db;
  VAR_3 = VAR_2->aDb;
  VAR_4 = VAR_2->nDb;
  for(VAR_1=0; VAR_1<VAR_4; VAR_1++){
    if( VAR_1!=1 && FUNC_2(VAR_0->lockMask,VAR_1) && FUNC_0(VAR_3[VAR_1].pBt!=0) ){
      FUNC_3(VAR_3[VAR_1].pBt);
    }
  }
}
