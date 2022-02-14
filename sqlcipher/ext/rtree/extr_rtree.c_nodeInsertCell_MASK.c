
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int iNodeSize; int nBytesPerCell; } ;
struct TYPE_8__ {int isDirty; int * zData; } ;
typedef TYPE_1__ RtreeNode ;
typedef int RtreeCell ;
typedef TYPE_2__ Rtree ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,int *,int) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(
  Rtree *VAR_0,
  RtreeNode *VAR_1,
  RtreeCell *VAR_2
){
  int VAR_3;
  int VAR_4;

  VAR_4 = (VAR_0->iNodeSize-4)/VAR_0->nBytesPerCell;
  VAR_3 = FUNC_0(VAR_1);

  FUNC_1( VAR_3<=VAR_4 );
  if( VAR_3<VAR_4 ){
    FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
    FUNC_3(&VAR_1->zData[2], VAR_3+1);
    VAR_1->isDirty = 1;
  }

  return (VAR_3==VAR_4);
}
