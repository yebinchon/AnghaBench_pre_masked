
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ t; struct TYPE_4__* next; } ;
typedef TYPE_1__ coap_queue_t ;



int FUNC_0(coap_queue_t **VAR_0, coap_queue_t *VAR_1) {
  coap_queue_t *VAR_2, *VAR_3;
  if ( !VAR_0 || !VAR_1 )
    return 0;


  if ( !*VAR_0 ) {
    *VAR_0 = VAR_1;
    return 1;
  }


  VAR_3 = *VAR_0;
  if (VAR_1->t < VAR_3->t) {
    VAR_1->next = VAR_3;
    *VAR_0 = VAR_1;
    VAR_3->t -= VAR_1->t;
    return 1;
  }


  do {
    VAR_1->t -= VAR_3->t;
    VAR_2 = VAR_3;
    VAR_3 = VAR_3->next;
  } while (VAR_3 && VAR_3->t <= VAR_1->t);


  if (VAR_3) {
    VAR_3->t -= VAR_1->t;
  }
  VAR_1->next = VAR_3;
  VAR_2->next = VAR_1;
  return 1;
}
