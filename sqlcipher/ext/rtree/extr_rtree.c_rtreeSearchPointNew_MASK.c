
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_10__ {scalar_t__ rScore; size_t iLevel; } ;
struct TYPE_11__ {int bPoint; scalar_t__* aNode; TYPE_1__ sPoint; TYPE_1__* aPoint; int * anQueue; } ;
typedef TYPE_1__ RtreeSearchPoint ;
typedef scalar_t__ RtreeDValue ;
typedef TYPE_2__ RtreeCursor ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__) ;
 TYPE_1__* FUNC_3 (TYPE_2__*,scalar_t__,size_t) ;
 TYPE_1__* FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static RtreeSearchPoint *FUNC_5(
  RtreeCursor *VAR_1,
  RtreeDValue VAR_2,
  u8 VAR_3
){
  RtreeSearchPoint *VAR_4, *VAR_5;
  VAR_5 = FUNC_4(VAR_1);
  VAR_1->anQueue[VAR_3]++;
  if( VAR_5==0
   || VAR_5->rScore>VAR_2
   || (VAR_5->rScore==VAR_2 && VAR_5->iLevel>VAR_3)
  ){
    if( VAR_1->bPoint ){
      int VAR_6;
      VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3);
      if( VAR_4==0 ) return 0;
      VAR_6 = (int)(VAR_4 - VAR_1->aPoint) + 1;
      if( VAR_6<VAR_0 ){
        FUNC_1( VAR_1->aNode[VAR_6]==0 );
        VAR_1->aNode[VAR_6] = VAR_1->aNode[0];
      }else{
        FUNC_2(FUNC_0(VAR_1), VAR_1->aNode[0]);
      }
      VAR_1->aNode[0] = 0;
      *VAR_4 = VAR_1->sPoint;
    }
    VAR_1->sPoint.rScore = VAR_2;
    VAR_1->sPoint.iLevel = VAR_3;
    VAR_1->bPoint = 1;
    return &VAR_1->sPoint;
  }else{
    return FUNC_3(VAR_1, VAR_2, VAR_3);
  }
}
