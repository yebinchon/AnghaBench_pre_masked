
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {size_t iLevel; } ;
struct TYPE_8__ {size_t iLevel; } ;
struct TYPE_9__ {int bPoint; int nPoint; TYPE_5__* aPoint; scalar_t__* aNode; int * anQueue; TYPE_1__ sPoint; } ;
typedef TYPE_2__ RtreeCursor ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_5__*,TYPE_5__*) ;
 int FUNC_4 (TYPE_2__*,int,int) ;

__attribute__((used)) static void FUNC_5(RtreeCursor *VAR_1){
  int VAR_2, VAR_3, VAR_4, VAR_5;
  VAR_2 = 1 - VAR_1->bPoint;
  FUNC_1( VAR_2==0 || VAR_2==1 );
  if( VAR_1->aNode[VAR_2] ){
    FUNC_2(FUNC_0(VAR_1), VAR_1->aNode[VAR_2]);
    VAR_1->aNode[VAR_2] = 0;
  }
  if( VAR_1->bPoint ){
    VAR_1->anQueue[VAR_1->sPoint.iLevel]--;
    VAR_1->bPoint = 0;
  }else if( VAR_1->nPoint ){
    VAR_1->anQueue[VAR_1->aPoint[0].iLevel]--;
    VAR_5 = --VAR_1->nPoint;
    VAR_1->aPoint[0] = VAR_1->aPoint[VAR_5];
    if( VAR_5<VAR_0-1 ){
      VAR_1->aNode[1] = VAR_1->aNode[VAR_5+1];
      VAR_1->aNode[VAR_5+1] = 0;
    }
    VAR_2 = 0;
    while( (VAR_3 = VAR_2*2+1)<VAR_5 ){
      VAR_4 = VAR_3+1;
      if( VAR_4<VAR_5 && FUNC_3(&VAR_1->aPoint[VAR_4], &VAR_1->aPoint[VAR_3])<0 ){
        if( FUNC_3(&VAR_1->aPoint[VAR_4], &VAR_1->aPoint[VAR_2])<0 ){
          FUNC_4(VAR_1, VAR_2, VAR_4);
          VAR_2 = VAR_4;
        }else{
          break;
        }
      }else{
        if( FUNC_3(&VAR_1->aPoint[VAR_3], &VAR_1->aPoint[VAR_2])<0 ){
          FUNC_4(VAR_1, VAR_2, VAR_3);
          VAR_2 = VAR_3;
        }else{
          break;
        }
      }
    }
  }
}
