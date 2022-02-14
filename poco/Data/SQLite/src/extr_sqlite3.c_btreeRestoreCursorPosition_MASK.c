
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ eState; int skipNext; scalar_t__ pKey; int nKey; } ;
typedef TYPE_1__ BtCursor ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,int ,int ,int*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(BtCursor *VAR_7){
  int VAR_8;
  int VAR_9 = 0;
  FUNC_0( FUNC_2(VAR_7) );
  FUNC_0( VAR_7->eState>=VAR_2 );
  if( VAR_7->eState==VAR_0 ){
    return VAR_7->skipNext;
  }
  VAR_7->eState = VAR_1;
  if( FUNC_3(410) ){
    VAR_8 = VAR_5;
  }else{
    VAR_8 = FUNC_1(VAR_7, VAR_7->pKey, VAR_7->nKey, 0, &VAR_9);
  }
  if( VAR_8==VAR_6 ){
    FUNC_4(VAR_7->pKey);
    VAR_7->pKey = 0;
    FUNC_0( VAR_7->eState==VAR_4 || VAR_7->eState==VAR_1 );
    if( VAR_9 ) VAR_7->skipNext = VAR_9;
    if( VAR_7->skipNext && VAR_7->eState==VAR_4 ){
      VAR_7->eState = VAR_3;
    }
  }
  return VAR_8;
}
