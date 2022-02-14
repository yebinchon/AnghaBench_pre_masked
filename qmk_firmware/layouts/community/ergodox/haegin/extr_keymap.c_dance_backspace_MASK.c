
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int count; } ;
typedef TYPE_1__ qk_tap_dance_state_t ;
struct TYPE_6__ {int b; scalar_t__ a; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_2__ VAR_3 ;
 int FUNC_1 (int ) ;

void FUNC_2 (qk_tap_dance_state_t *VAR_4, void *VAR_5) {


  if (VAR_4->count == 4) {
    FUNC_1(VAR_2);
    VAR_3.state = VAR_0;
    VAR_3.a = 0;
    VAR_3.b = 1;
  }



  if (VAR_4->count == 2) {
    FUNC_1(VAR_1);
  }
  if (VAR_4->count > 1) {
    FUNC_0(VAR_4);
  }
}
