
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nAlloc; } ;
struct TYPE_4__ {TYPE_2__ blob2; TYPE_2__ blob1; scalar_t__ iCell; scalar_t__ eType; scalar_t__ nVal; scalar_t__ pVal; scalar_t__ nKey; scalar_t__ pKey; scalar_t__ nCell; scalar_t__ pPg; } ;
typedef TYPE_1__ SegmentPtr ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(SegmentPtr *VAR_0, int VAR_1){
  FUNC_0(VAR_0->pPg);
  VAR_0->pPg = 0;
  VAR_0->nCell = 0;
  VAR_0->pKey = 0;
  VAR_0->nKey = 0;
  VAR_0->pVal = 0;
  VAR_0->nVal = 0;
  VAR_0->eType = 0;
  VAR_0->iCell = 0;
  if( VAR_0->blob1.nAlloc>=VAR_1 ) FUNC_1(&VAR_0->blob1);
  if( VAR_0->blob2.nAlloc>=VAR_1 ) FUNC_1(&VAR_0->blob2);
}
