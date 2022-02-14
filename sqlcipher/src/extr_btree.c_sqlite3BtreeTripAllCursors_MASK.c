
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int curFlags; scalar_t__ eState; int skipNext; struct TYPE_12__* pNext; } ;
struct TYPE_11__ {TYPE_1__* pBt; } ;
struct TYPE_10__ {TYPE_3__* pCursor; } ;
typedef TYPE_2__ Btree ;
typedef TYPE_3__ BtCursor ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;

int FUNC_6(Btree *VAR_5, int VAR_6, int VAR_7){
  BtCursor *VAR_8;
  int VAR_9 = VAR_4;

  FUNC_0( (VAR_7==0 || VAR_7==1) && VAR_0==1 );
  if( VAR_5 ){
    FUNC_4(VAR_5);
    for(VAR_8=VAR_5->pBt->pCursor; VAR_8; VAR_8=VAR_8->pNext){
      if( VAR_7 && (VAR_8->curFlags & VAR_0)==0 ){
        if( VAR_8->eState==VAR_3 || VAR_8->eState==VAR_2 ){
          VAR_9 = FUNC_2(VAR_8);
          if( VAR_9!=VAR_4 ){
            (void)FUNC_6(VAR_5, VAR_9, 0);
            break;
          }
        }
      }else{
        FUNC_3(VAR_8);
        VAR_8->eState = VAR_1;
        VAR_8->skipNext = VAR_6;
      }
      FUNC_1(VAR_8);
    }
    FUNC_5(VAR_5);
  }
  return VAR_9;
}
