
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ iCountdown; scalar_t__ nFail; scalar_t__ isBenignMode; scalar_t__ nRepeat; scalar_t__ enable; int nBenign; int nOkBefore; int nOkAfter; } ;


 scalar_t__ FUNC_0 (int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(void){
  if( FUNC_0(!VAR_0.enable) ){
    VAR_0.nOkAfter++;
    return 0;
  }
  if( VAR_0.iCountdown>0 ){
    VAR_0.iCountdown--;
    VAR_0.nOkBefore++;
    return 0;
  }
  if( VAR_0.nFail==0 ) FUNC_2();
  FUNC_1();
  VAR_0.nFail++;
  if( VAR_0.isBenignMode>0 ){
    VAR_0.nBenign++;
  }
  VAR_0.nRepeat--;
  if( VAR_0.nRepeat<=0 ){
    VAR_0.enable = 0;
  }
  return 1;
}
