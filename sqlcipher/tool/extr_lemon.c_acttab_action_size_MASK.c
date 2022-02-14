
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nAction; TYPE_1__* aAction; } ;
typedef TYPE_2__ acttab ;
struct TYPE_4__ {scalar_t__ lookahead; } ;



int FUNC_0(acttab *VAR_0){
  int VAR_1 = VAR_0->nAction;
  while( VAR_1>0 && VAR_0->aAction[VAR_1-1].lookahead<0 ){ VAR_1--; }
  return VAR_1;
}
