
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; int pressed; int interrupted; } ;
typedef TYPE_1__ qk_tap_dance_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_0(qk_tap_dance_state_t *VAR_4) {
  int VAR_5 = 0;
  switch(VAR_4->count) {
    case 1:
      VAR_5 = (VAR_4->interrupted || !VAR_4->pressed)
        ? VAR_2
        : VAR_1;
      break;
     case 2:
      VAR_5 = VAR_0;
      break;
    case 3:
      VAR_5 = VAR_3;
  }
  return VAR_5;
}
