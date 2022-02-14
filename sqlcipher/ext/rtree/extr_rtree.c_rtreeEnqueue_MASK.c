
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_11__ {int nPoint; int nPointAlloc; TYPE_1__* aPoint; } ;
struct TYPE_10__ {scalar_t__ iLevel; int rScore; } ;
typedef TYPE_1__ RtreeSearchPoint ;
typedef int RtreeDValue ;
typedef TYPE_2__ RtreeCursor ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,int,int) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static RtreeSearchPoint *FUNC_4(
  RtreeCursor *VAR_1,
  RtreeDValue VAR_2,
  u8 VAR_3
){
  int VAR_4, VAR_5;
  RtreeSearchPoint *VAR_6;
  if( VAR_1->nPoint>=VAR_1->nPointAlloc ){
    int VAR_7 = VAR_1->nPointAlloc*2 + 8;
    VAR_6 = FUNC_3(VAR_1->aPoint, VAR_7*sizeof(VAR_1->aPoint[0]));
    if( VAR_6==0 ) return 0;
    VAR_1->aPoint = VAR_6;
    VAR_1->nPointAlloc = VAR_7;
  }
  VAR_4 = VAR_1->nPoint++;
  VAR_6 = VAR_1->aPoint + VAR_4;
  VAR_6->rScore = VAR_2;
  VAR_6->iLevel = VAR_3;
  FUNC_0( VAR_3<=VAR_0 );
  while( VAR_4>0 ){
    RtreeSearchPoint *VAR_8;
    VAR_5 = (VAR_4-1)/2;
    VAR_8 = VAR_1->aPoint + VAR_5;
    if( FUNC_1(VAR_6, VAR_8)>=0 ) break;
    FUNC_2(VAR_1, VAR_5, VAR_4);
    VAR_4 = VAR_5;
    VAR_6 = VAR_8;
  }
  return VAR_6;
}
