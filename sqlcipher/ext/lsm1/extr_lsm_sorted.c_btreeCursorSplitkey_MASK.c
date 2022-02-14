
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {size_t iPg; TYPE_1__* aPg; } ;
struct TYPE_7__ {int iCell; void* iPg; } ;
struct TYPE_6__ {int iCell; int pPage; } ;
typedef TYPE_2__ MergeInput ;
typedef TYPE_3__ BtreeCursor ;


 int FUNC_0 (int) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(BtreeCursor *VAR_0, MergeInput *VAR_1){
  int VAR_2 = VAR_0->aPg[VAR_0->iPg].iCell;
  if( VAR_2>=0 ){
    VAR_1->iCell = VAR_2;
    VAR_1->iPg = FUNC_1(VAR_0->aPg[VAR_0->iPg].pPage);
  }else{
    int VAR_3;
    for(VAR_3=VAR_0->iPg-1; VAR_3>=0; VAR_3--){
      if( VAR_0->aPg[VAR_3].iCell>0 ) break;
    }
    FUNC_0( VAR_3>=0 );
    VAR_1->iCell = VAR_0->aPg[VAR_3].iCell-1;
    VAR_1->iPg = FUNC_1(VAR_0->aPg[VAR_3].pPage);
  }
}
