
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ eState; scalar_t__ pKey; int curFlags; scalar_t__ skipNext; } ;
typedef TYPE_1__ BtCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(BtCursor *VAR_7){
  int VAR_8;

  FUNC_0( VAR_5==VAR_7->eState || VAR_4==VAR_7->eState );
  FUNC_0( 0==VAR_7->pKey );
  FUNC_0( FUNC_2(VAR_7) );

  if( VAR_7->eState==VAR_4 ){
    VAR_7->eState = VAR_5;
  }else{
    VAR_7->skipNext = 0;
  }

  VAR_8 = FUNC_3(VAR_7);
  if( VAR_8==VAR_6 ){
    FUNC_1(VAR_7);
    VAR_7->eState = VAR_3;
  }

  VAR_7->curFlags &= ~(VAR_1|VAR_2|VAR_0);
  return VAR_8;
}
