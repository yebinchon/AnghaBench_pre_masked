
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ i64 ;
struct TYPE_6__ {TYPE_1__** aHash; } ;
struct TYPE_5__ {scalar_t__ iNode; struct TYPE_5__* pNext; } ;
typedef TYPE_1__ RtreeNode ;
typedef TYPE_2__ Rtree ;


 size_t FUNC_0 (scalar_t__) ;

__attribute__((used)) static RtreeNode *FUNC_1(Rtree *VAR_0, i64 VAR_1){
  RtreeNode *VAR_2;
  for(VAR_2=VAR_0->aHash[FUNC_0(VAR_1)]; VAR_2 && VAR_2->iNode!=VAR_1; VAR_2=VAR_2->pNext);
  return VAR_2;
}
