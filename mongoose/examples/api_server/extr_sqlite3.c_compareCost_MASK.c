
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ nOBSat; scalar_t__ nRow; } ;
struct TYPE_6__ {scalar_t__ rCost; TYPE_1__ plan; } ;
typedef TYPE_2__ WhereCost ;



__attribute__((used)) static int FUNC_0(const WhereCost *VAR_0, const WhereCost *VAR_1){
  if( VAR_0->rCost<VAR_1->rCost ) return 1;
  if( VAR_0->rCost>VAR_1->rCost ) return 0;
  if( VAR_0->plan.nOBSat>VAR_1->plan.nOBSat ) return 1;
  if( VAR_0->plan.nRow<VAR_1->plan.nRow ) return 1;
  return 0;
}
