
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int nSavepoint; TYPE_2__* aSavepoint; } ;
struct TYPE_6__ {int pInSavepoint; int nOrig; } ;
struct TYPE_5__ {TYPE_3__* pPager; int pgno; } ;
typedef int Pgno ;
typedef TYPE_1__ PgHdr ;
typedef TYPE_2__ PagerSavepoint ;
typedef TYPE_3__ Pager ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(PgHdr *VAR_0){
  Pgno VAR_1 = VAR_0->pgno;
  Pager *VAR_2 = VAR_0->pPager;
  int VAR_3;
  for(VAR_3=0; VAR_3<VAR_2->nSavepoint; VAR_3++){
    PagerSavepoint *VAR_4 = &VAR_2->aSavepoint[VAR_3];
    if( VAR_4->nOrig>=VAR_1 && 0==FUNC_0(VAR_4->pInSavepoint, VAR_1) ){
      return 1;
    }
  }
  return 0;
}
