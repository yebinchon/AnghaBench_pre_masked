
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_4__ {int count; } ;
typedef TYPE_1__ qk_tap_dance_state_t ;


 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(qk_tap_dance_state_t *VAR_2, void *VAR_3, uint8_t VAR_4) {
  if (VAR_2->count >= 7) {
    VAR_0[VAR_4] = VAR_1[0];
    FUNC_0(VAR_2);
  } else {
    VAR_0[VAR_4] = VAR_1[VAR_2->count - 1];
  }
}
