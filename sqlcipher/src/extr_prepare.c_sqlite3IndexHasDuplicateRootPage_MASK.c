
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ tnum; struct TYPE_5__* pNext; TYPE_1__* pTable; } ;
struct TYPE_4__ {TYPE_2__* pIndex; } ;
typedef TYPE_2__ Index ;



int FUNC_0(Index *VAR_0){
  Index *VAR_1;
  for(VAR_1=VAR_0->pTable->pIndex; VAR_1; VAR_1=VAR_1->pNext){
    if( VAR_1->tnum==VAR_0->tnum && VAR_1!=VAR_0 ) return 1;
  }
  return 0;
}
