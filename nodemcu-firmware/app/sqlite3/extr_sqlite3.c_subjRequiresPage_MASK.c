
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int nSavepoint; TYPE_2__* aSavepoint; } ;
struct TYPE_6__ {scalar_t__ nOrig; int pInSavepoint; } ;
struct TYPE_5__ {scalar_t__ pgno; TYPE_3__* pPager; } ;
typedef scalar_t__ Pgno ;
typedef TYPE_1__ PgHdr ;
typedef TYPE_2__ PagerSavepoint ;
typedef TYPE_3__ Pager ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(PgHdr *VAR_0){
  Pager *VAR_1 = VAR_0->pPager;
  PagerSavepoint *VAR_2;
  Pgno VAR_3 = VAR_0->pgno;
  int VAR_4;
  for(VAR_4=0; VAR_4<VAR_1->nSavepoint; VAR_4++){
    VAR_2 = &VAR_1->aSavepoint[VAR_4];
    if( VAR_2->nOrig>=VAR_3 && 0==FUNC_0(VAR_2->pInSavepoint, VAR_3) ){
      return 1;
    }
  }
  return 0;
}
