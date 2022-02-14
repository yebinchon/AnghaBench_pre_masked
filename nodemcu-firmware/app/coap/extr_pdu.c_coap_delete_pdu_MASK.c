
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ len; TYPE_3__* p; } ;
struct TYPE_7__ {scalar_t__ len; TYPE_3__* p; } ;
struct TYPE_8__ {TYPE_1__ msg; struct TYPE_8__* pkt; TYPE_2__ scratch; } ;
typedef TYPE_3__ coap_pdu_t ;


 int FUNC_0 (TYPE_3__*) ;

void FUNC_1(coap_pdu_t *VAR_0){
  if(!VAR_0)
    return;

  if(VAR_0->scratch.p){
    FUNC_0(VAR_0->scratch.p);
    VAR_0->scratch.p = ((void*)0);
    VAR_0->scratch.len = 0;
  }

  if(VAR_0->pkt){
    FUNC_0(VAR_0->pkt);
    VAR_0->pkt = ((void*)0);
  }

  if(VAR_0->msg.p){
    FUNC_0(VAR_0->msg.p);
    VAR_0->msg.p = ((void*)0);
    VAR_0->msg.len = 0;
  }

  FUNC_0(VAR_0);
  VAR_0 = ((void*)0);
}
