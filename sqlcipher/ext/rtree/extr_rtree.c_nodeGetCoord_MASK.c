
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nBytesPerCell; } ;
struct TYPE_5__ {int * zData; } ;
typedef TYPE_1__ RtreeNode ;
typedef int RtreeCoord ;
typedef TYPE_2__ Rtree ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(
  Rtree *VAR_0,
  RtreeNode *VAR_1,
  int VAR_2,
  int VAR_3,
  RtreeCoord *VAR_4
){
  FUNC_0(&VAR_1->zData[12 + VAR_0->nBytesPerCell*VAR_2 + 4*VAR_3], VAR_4);
}
