
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VdbeOp ;
struct TYPE_6__ {int nOp; int * aOp; int btreeMask; TYPE_1__* db; } ;
typedef TYPE_2__ Vdbe ;
struct TYPE_5__ {int mallocFailed; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int*) ;

VdbeOp *FUNC_3(Vdbe *VAR_0, int *VAR_1, int *VAR_2){
  VdbeOp *VAR_3 = VAR_0->aOp;
  FUNC_1( VAR_3 && !VAR_0->db->mallocFailed );


  FUNC_1( FUNC_0(VAR_0->btreeMask) );

  FUNC_2(VAR_0, VAR_2);
  *VAR_1 = VAR_0->nOp;
  VAR_0->aOp = 0;
  return VAR_3;
}
