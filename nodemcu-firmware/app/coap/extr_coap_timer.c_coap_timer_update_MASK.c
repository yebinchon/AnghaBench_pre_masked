
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ coap_tick_t ;
struct TYPE_3__ {scalar_t__ t; } ;
typedef TYPE_1__ coap_queue_t ;


 int FUNC_0 (scalar_t__*) ;

void FUNC_1(coap_queue_t ** VAR_0){
  if (!VAR_0)
    return;
  coap_tick_t VAR_1 = 0;
  coap_queue_t *VAR_2 = *VAR_0;
  FUNC_0(&VAR_1);
  if (VAR_2) {

    if (VAR_2->t >= VAR_1){
      VAR_2->t -= VAR_1;
    } else {
      VAR_2->t = 0;
    }
  }
}
