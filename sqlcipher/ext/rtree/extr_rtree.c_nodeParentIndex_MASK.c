
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int iNode; struct TYPE_4__* pParent; } ;
typedef TYPE_1__ RtreeNode ;
typedef int Rtree ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*,int ,int*) ;

__attribute__((used)) static int FUNC_1(Rtree *VAR_1, RtreeNode *VAR_2, int *VAR_3){
  RtreeNode *VAR_4 = VAR_2->pParent;
  if( VAR_4 ){
    return FUNC_0(VAR_1, VAR_4, VAR_2->iNode, VAR_3);
  }
  *VAR_3 = -1;
  return VAR_0;
}
