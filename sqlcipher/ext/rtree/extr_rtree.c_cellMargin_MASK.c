
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nDim2; } ;
struct TYPE_5__ {int * aCoord; } ;
typedef int RtreeDValue ;
typedef TYPE_1__ RtreeCell ;
typedef TYPE_2__ Rtree ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static RtreeDValue FUNC_1(Rtree *VAR_0, RtreeCell *VAR_1){
  RtreeDValue VAR_2 = 0;
  int VAR_3 = VAR_0->nDim2 - 2;
  do{
    VAR_2 += (FUNC_0(VAR_1->aCoord[VAR_3+1]) - FUNC_0(VAR_1->aCoord[VAR_3]));
    VAR_3 -= 2;
  }while( VAR_3>=0 );
  return VAR_2;
}
