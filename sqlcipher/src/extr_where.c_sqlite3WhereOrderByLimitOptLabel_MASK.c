
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ addrNxt; } ;
typedef TYPE_1__ WhereLevel ;
struct TYPE_5__ {int iContinue; int nLevel; TYPE_1__* a; int bOrderedInnerLoop; } ;
typedef TYPE_2__ WhereInfo ;


 int FUNC_0 (int) ;

int FUNC_1(WhereInfo *VAR_0){
  WhereLevel *VAR_1;
  if( !VAR_0->bOrderedInnerLoop ){


    return VAR_0->iContinue;
  }
  VAR_1 = &VAR_0->a[VAR_0->nLevel-1];
  FUNC_0( VAR_1->addrNxt!=0 );
  return VAR_1->addrNxt;
}
