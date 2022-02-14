
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct espconn {int dummy; } ;
typedef scalar_t__ coap_tid_t ;
typedef int coap_tick_t ;
struct TYPE_5__ {scalar_t__ id; int timeout; int t; int * pdu; struct espconn* pconn; scalar_t__ retransmit_cnt; } ;
typedef TYPE_1__ coap_queue_t ;
typedef int coap_pdu_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_3 () ;
 scalar_t__ FUNC_4 (struct espconn*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int VAR_3 ;
 int FUNC_8 () ;

coap_tid_t FUNC_9(struct espconn *VAR_4, coap_pdu_t *VAR_5) {
  coap_queue_t *VAR_6;
  coap_tick_t VAR_7;
  uint32_t VAR_8;

  VAR_6 = FUNC_3();
  if (!VAR_6) {
    FUNC_0("coap_send_confirmed: insufficient memory\n");
    return VAR_1;
  }

  VAR_6->retransmit_cnt = 0;
  VAR_6->id = FUNC_4(VAR_4, VAR_5);
  if (VAR_1 == VAR_6->id) {
    FUNC_0("coap_send_confirmed: error sending pdu\n");
    FUNC_1(VAR_6);
    return VAR_1;
  }
  VAR_8 = FUNC_8();


  VAR_6->timeout = VAR_0 * VAR_2 +
    (VAR_0 >> 1) *
    ((VAR_2 * (VAR_8 & 0xFF)) >> 8);

  VAR_6->pconn = VAR_4;
  VAR_6->pdu = VAR_5;
  FUNC_6();
  FUNC_7(&VAR_3);
  VAR_6->t = VAR_6->timeout;
  FUNC_2(&VAR_3, VAR_6);
  FUNC_5(&VAR_3);
  return VAR_6->id;
}
