
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int len; TYPE_4__* p; } ;
struct TYPE_10__ {int len; TYPE_4__* p; } ;
struct TYPE_9__ {scalar_t__ len; int * p; } ;
struct TYPE_12__ {TYPE_3__ msg; TYPE_2__ scratch; struct TYPE_12__* pkt; TYPE_1__ content; } ;
typedef TYPE_4__ uint8_t ;
typedef TYPE_4__ coap_pdu_t ;
typedef TYPE_4__ coap_packet_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_4__*) ;

coap_pdu_t * FUNC_3(void) {
  coap_pdu_t *VAR_2 = ((void*)0);
  VAR_2 = (coap_pdu_t *)FUNC_1(1,sizeof(coap_pdu_t));
  if(!VAR_2){
    FUNC_0("coap_new_pdu malloc error.\n");
    return ((void*)0);
  }

  VAR_2->scratch.p = (uint8_t *)FUNC_1(1,VAR_1);
  if(!VAR_2->scratch.p){
    FUNC_0("coap_new_pdu malloc error.\n");
    FUNC_2(VAR_2);
    return ((void*)0);
  }
  VAR_2->scratch.len = VAR_1;

  VAR_2->pkt = (coap_packet_t *)FUNC_1(1,sizeof(coap_packet_t));
  if(!VAR_2->pkt){
    FUNC_0("coap_new_pdu malloc error.\n");
    FUNC_2(VAR_2->scratch.p);
    FUNC_2(VAR_2);
    return ((void*)0);
  }
  VAR_2->pkt->content.p = ((void*)0);
  VAR_2->pkt->content.len = 0;

  VAR_2->msg.p = (uint8_t *)FUNC_1(1,VAR_0+1);
  if(!VAR_2->msg.p){
    FUNC_0("coap_new_pdu malloc error.\n");
    FUNC_2(VAR_2->pkt);
    FUNC_2(VAR_2->scratch.p);
    FUNC_2(VAR_2);
    return ((void*)0);
  }
  VAR_2->msg.len = VAR_0;
  return VAR_2;
}
