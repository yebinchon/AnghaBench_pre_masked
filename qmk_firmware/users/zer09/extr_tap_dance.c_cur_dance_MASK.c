
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; int pressed; } ;
typedef TYPE_1__ qk_tap_dance_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_0(qk_tap_dance_state_t *VAR_8) {
  switch (VAR_8->count) {
  case 1:
    return VAR_8->pressed == 0 ? VAR_5 : VAR_4;
  case 2:
    return VAR_8->pressed == 0 ? VAR_3 : VAR_2;
  case 3:
    return VAR_8->pressed == 0 ? VAR_7 : VAR_6;
  default:
    return VAR_8->pressed == 0 ? VAR_1 : VAR_0;
  }
}
