
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* pCsr; } ;
typedef TYPE_1__ lsm_db ;
struct TYPE_7__ {int iCell; } ;
struct TYPE_6__ {int nPtr; TYPE_3__* aPtr; scalar_t__ pBtCsr; struct TYPE_6__* pNext; } ;
typedef TYPE_2__ MultiCursor ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_3__*,int ) ;

void FUNC_2(lsm_db *VAR_0){
  MultiCursor *VAR_1;
  for(VAR_1=VAR_0->pCsr; VAR_1; VAR_1=VAR_1->pNext){
    int VAR_2;
    if( VAR_1->pBtCsr ){
      FUNC_0(VAR_1->pBtCsr);
    }
    for(VAR_2=0; VAR_2<VAR_1->nPtr; VAR_2++){
      FUNC_1(&VAR_1->aPtr[VAR_2], VAR_1->aPtr[VAR_2].iCell);
    }
  }
}
