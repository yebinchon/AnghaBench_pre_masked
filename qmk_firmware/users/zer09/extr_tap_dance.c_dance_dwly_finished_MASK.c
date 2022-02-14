
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int qk_tap_dance_state_t ;
struct TYPE_2__ {int state; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;

void FUNC_2(qk_tap_dance_state_t *VAR_7, void *VAR_8) {
  VAR_5.state = FUNC_0(VAR_7);

  switch (VAR_5.state) {
  case 129:
    if (VAR_4 == VAR_2) {
      FUNC_1(VAR_1);
    } else {
      FUNC_1(VAR_2);
    }
    break;
  case 130:
    FUNC_1(VAR_2);
    break;
  case 131:
    FUNC_1(VAR_0);
    break;
  case 128:
    if (VAR_6 == 1) {
      VAR_6 = 0;
      FUNC_1(VAR_1);
    } else {
      VAR_6 = 1;
      FUNC_1(VAR_3);
    }
  default:
    FUNC_1(VAR_1);
    break;
  }
}
