
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ coap_tid_t ;
struct TYPE_4__ {scalar_t__ const id; scalar_t__ t; struct TYPE_4__* next; } ;
typedef TYPE_1__ coap_queue_t ;


 int FUNC_0 (TYPE_1__*) ;

int FUNC_1( coap_queue_t **VAR_0, const coap_tid_t VAR_1){
  coap_queue_t *VAR_2, *VAR_3, *VAR_4;
  if ( !VAR_0 )
    return 0;
  if ( !*VAR_0 )
    return 0;

  VAR_3 = *VAR_0;
  if (VAR_3->id == VAR_1) {
    VAR_4 = VAR_3;
    *VAR_0 = VAR_3->next;
    VAR_4->next = ((void*)0);
    if(*VAR_0){
      (*VAR_0)->t += VAR_4->t;
    }
    FUNC_0(VAR_4);
    return 1;
  }


  while (VAR_3 && VAR_3->id != VAR_1) {
    VAR_2 = VAR_3;
    VAR_3 = VAR_3->next;
  }


  if (VAR_3) {
    VAR_4 = VAR_3;
    VAR_2->next = VAR_3->next;
    VAR_3 = VAR_3->next;
    VAR_4->next = ((void*)0);
    if (VAR_3)
    {
      VAR_3->t += VAR_4->t;
    }
    FUNC_0(VAR_4);
    return 1;
  }
  return 0;
}
