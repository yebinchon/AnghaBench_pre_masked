
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int qk_tap_dance_state_t ;
struct TYPE_4__ {int state; } ;
struct TYPE_3__ {int status; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *) ;
 TYPE_2__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (int ) ;

void FUNC_2(qk_tap_dance_state_t *VAR_6, void *VAR_7) {
  VAR_4.state = FUNC_0(VAR_6);

  switch (VAR_4.state) {
  case 128:
    VAR_5[VAR_3].status = VAR_0;
    FUNC_1(VAR_1);
    break;
  default:
    FUNC_1(VAR_2);
    break;
  }
}
