
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int count; } ;
typedef TYPE_1__ qk_tap_dance_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3 (qk_tap_dance_state_t *VAR_4, void *VAR_5) {
  switch(VAR_4->count){
  case 1:
    if(FUNC_1())
      FUNC_0(VAR_2);
    else
         FUNC_0(VAR_3);
    break;
  case 2:
    FUNC_0(VAR_1);
    break;
  case 3:
    FUNC_0(VAR_0);
  default:
    break;
  }
  FUNC_2(VAR_4);
}
