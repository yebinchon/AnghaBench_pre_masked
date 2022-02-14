
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int p2; } ;
typedef TYPE_1__ VdbeOp ;
struct TYPE_6__ {scalar_t__ addrExplain; int pVdbe; } ;
typedef TYPE_2__ Parse ;


 TYPE_1__* FUNC_0 (int ,scalar_t__) ;

int FUNC_1(Parse *VAR_0){
  VdbeOp *VAR_1;
  if( VAR_0->addrExplain==0 ) return 0;
  VAR_1 = FUNC_0(VAR_0->pVdbe, VAR_0->addrExplain);
  return VAR_1->p2;
}
