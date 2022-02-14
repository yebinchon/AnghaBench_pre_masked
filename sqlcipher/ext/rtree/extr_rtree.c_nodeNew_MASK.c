
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_9__ {int nNodeRef; scalar_t__ iNodeSize; } ;
struct TYPE_8__ {int nRef; int isDirty; struct TYPE_8__* pParent; int * zData; } ;
typedef TYPE_1__ RtreeNode ;
typedef TYPE_2__ Rtree ;


 int FUNC_0 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static RtreeNode *FUNC_3(Rtree *VAR_0, RtreeNode *VAR_1){
  RtreeNode *VAR_2;
  VAR_2 = (RtreeNode *)FUNC_2(sizeof(RtreeNode) + VAR_0->iNodeSize);
  if( VAR_2 ){
    FUNC_0(VAR_2, 0, sizeof(RtreeNode) + VAR_0->iNodeSize);
    VAR_2->zData = (u8 *)&VAR_2[1];
    VAR_2->nRef = 1;
    VAR_0->nNodeRef++;
    VAR_2->pParent = VAR_1;
    VAR_2->isDirty = 1;
    FUNC_1(VAR_1);
  }
  return VAR_2;
}
