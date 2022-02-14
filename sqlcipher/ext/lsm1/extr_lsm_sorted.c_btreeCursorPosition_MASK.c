
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {size_t iPg; scalar_t__ nDepth; TYPE_1__* aPg; } ;
struct TYPE_7__ {scalar_t__ iCell; scalar_t__ iPg; } ;
struct TYPE_6__ {int iCell; int pPage; } ;
typedef TYPE_2__ MergeInput ;
typedef TYPE_3__ BtreeCursor ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(BtreeCursor *VAR_0, MergeInput *VAR_1){
  if( VAR_0->iPg>=0 ){
    VAR_1->iPg = FUNC_0(VAR_0->aPg[VAR_0->iPg].pPage);
    VAR_1->iCell = ((VAR_0->aPg[VAR_0->iPg].iCell + 1) << 8) + VAR_0->nDepth;
  }else{
    VAR_1->iPg = 0;
    VAR_1->iCell = 0;
  }
}
