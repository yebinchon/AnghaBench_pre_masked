
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ i64 ;
struct TYPE_9__ {int pReadParent; } ;
struct TYPE_8__ {int iNode; struct TYPE_8__* pParent; } ;
typedef TYPE_1__ RtreeNode ;
typedef TYPE_2__ Rtree ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,scalar_t__,int ,TYPE_1__**) ;
 int FUNC_2 (int ,int,int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(Rtree *VAR_3, RtreeNode *VAR_4){
  int VAR_5 = VAR_1;
  RtreeNode *VAR_6 = VAR_4;
  while( VAR_5==VAR_1 && VAR_6->iNode!=1 && VAR_6->pParent==0 ){
    int VAR_7 = VAR_1;
    FUNC_2(VAR_3->pReadParent, 1, VAR_6->iNode);
    VAR_5 = FUNC_5(VAR_3->pReadParent);
    if( VAR_5==VAR_2 ){
      RtreeNode *VAR_8;
      i64 VAR_9;






      VAR_9 = FUNC_3(VAR_3->pReadParent, 0);
      for(VAR_8=VAR_4; VAR_8 && VAR_8->iNode!=VAR_9; VAR_8=VAR_8->pParent);
      if( !VAR_8 ){
        VAR_7 = FUNC_1(VAR_3, VAR_9, 0, &VAR_6->pParent);
      }
    }
    VAR_5 = FUNC_4(VAR_3->pReadParent);
    if( VAR_5==VAR_1 ) VAR_5 = VAR_7;
    if( VAR_5==VAR_1 && !VAR_6->pParent ){
      FUNC_0(VAR_3);
      VAR_5 = VAR_0;
    }
    VAR_6 = VAR_6->pParent;
  }
  return VAR_5;
}
