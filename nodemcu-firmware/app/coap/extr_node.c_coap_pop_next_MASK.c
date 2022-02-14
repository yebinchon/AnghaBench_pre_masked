
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ coap_queue_t ;



coap_queue_t * FUNC_0( coap_queue_t **VAR_0 ) {
  coap_queue_t *VAR_1;

  if ( !(*VAR_0) )
    return ((void*)0);

  VAR_1 = *VAR_0;
  *VAR_0 = (*VAR_0)->next;



  VAR_1->next = ((void*)0);
  return VAR_1;
}
