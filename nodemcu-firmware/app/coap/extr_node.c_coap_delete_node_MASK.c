
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pdu; } ;
typedef TYPE_1__ coap_queue_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(coap_queue_t *VAR_0) {
  if ( !VAR_0 )
    return 0;

  FUNC_0(VAR_0->pdu);
  FUNC_1(VAR_0);

  return 1;
}
