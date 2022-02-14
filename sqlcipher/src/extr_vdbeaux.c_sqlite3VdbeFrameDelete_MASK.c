
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {size_t nChildMem; int nChildCsr; TYPE_2__* v; int pAuxData; } ;
typedef TYPE_1__ VdbeFrame ;
typedef int VdbeCursor ;
struct TYPE_8__ {int db; } ;
typedef int Mem ;


 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,size_t) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int ,int *,int,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*,int *) ;

void FUNC_7(VdbeFrame *VAR_0){
  int VAR_1;
  Mem *VAR_2 = FUNC_0(VAR_0);
  VdbeCursor **VAR_3 = (VdbeCursor **)&VAR_2[VAR_0->nChildMem];
  FUNC_1( FUNC_5(VAR_0) );
  for(VAR_1=0; VAR_1<VAR_0->nChildCsr; VAR_1++){
    FUNC_6(VAR_0->v, VAR_3[VAR_1]);
  }
  FUNC_2(VAR_2, VAR_0->nChildMem);
  FUNC_4(VAR_0->v->db, &VAR_0->pAuxData, -1, 0);
  FUNC_3(VAR_0->v->db, VAR_0);
}
