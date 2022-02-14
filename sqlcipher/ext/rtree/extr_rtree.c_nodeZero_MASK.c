
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ iNodeSize; } ;
struct TYPE_5__ {int isDirty; int * zData; } ;
typedef TYPE_1__ RtreeNode ;
typedef TYPE_2__ Rtree ;


 int FUNC_0 (int *,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(Rtree *VAR_0, RtreeNode *VAR_1){
  FUNC_0(&VAR_1->zData[2], 0, VAR_0->iNodeSize-2);
  VAR_1->isDirty = 1;
}
