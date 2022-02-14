
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int yDbMask ;
struct TYPE_7__ {int lockMask; TYPE_2__* db; int btreeMask; } ;
typedef TYPE_3__ Vdbe ;
struct TYPE_6__ {int nDb; TYPE_1__* aDb; } ;
struct TYPE_5__ {int pBt; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;

void FUNC_3(Vdbe *VAR_0, int VAR_1){
  FUNC_1( VAR_1>=0 && VAR_1<VAR_0->db->nDb && VAR_1<(int)sizeof(yDbMask)*8 );
  FUNC_1( VAR_1<(int)sizeof(VAR_0->btreeMask)*8 );
  FUNC_0(VAR_0->btreeMask, VAR_1);
  if( VAR_1!=1 && FUNC_2(VAR_0->db->aDb[VAR_1].pBt) ){
    FUNC_0(VAR_0->lockMask, VAR_1);
  }
}
