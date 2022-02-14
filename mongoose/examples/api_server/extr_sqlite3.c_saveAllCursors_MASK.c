
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ pgnoRoot; scalar_t__ eState; scalar_t__ iPage; struct TYPE_8__* pNext; TYPE_1__* pBt; } ;
struct TYPE_7__ {TYPE_2__* pCursor; int mutex; } ;
typedef scalar_t__ Pgno ;
typedef TYPE_1__ BtShared ;
typedef TYPE_2__ BtCursor ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(BtShared *VAR_2, Pgno VAR_3, BtCursor *VAR_4){
  BtCursor *VAR_5;
  FUNC_0( FUNC_3(VAR_2->mutex) );
  FUNC_0( VAR_4==0 || VAR_4->pBt==VAR_2 );
  for(VAR_5=VAR_2->pCursor; VAR_5; VAR_5=VAR_5->pNext){
    if( VAR_5!=VAR_4 && (0==VAR_3 || VAR_5->pgnoRoot==VAR_3) ){
      if( VAR_5->eState==VAR_0 ){
        int VAR_6 = FUNC_2(VAR_5);
        if( VAR_1!=VAR_6 ){
          return VAR_6;
        }
      }else{
        FUNC_4( VAR_5->iPage>0 );
        FUNC_1(VAR_5);
      }
    }
  }
  return VAR_1;
}
