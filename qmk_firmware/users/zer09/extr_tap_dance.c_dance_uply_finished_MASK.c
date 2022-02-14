
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
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_3 ;

void FUNC_2(qk_tap_dance_state_t *VAR_4, void *VAR_5) {
  VAR_3.state = FUNC_0(VAR_4);

  switch (VAR_3.state) {
  case 128:
    if (VAR_2 == VAR_1) {
      FUNC_1(VAR_0);
    } else {
      FUNC_1(VAR_1);
    }
    break;
  case 129:
    FUNC_1(VAR_1);
    break;
  default:
    FUNC_1(VAR_0);
    break;
  }
}
