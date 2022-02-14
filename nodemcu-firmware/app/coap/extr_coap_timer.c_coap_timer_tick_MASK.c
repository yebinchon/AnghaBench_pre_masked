
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_13__ {int retransmit_cnt; int t; int timeout; scalar_t__ id; TYPE_5__* pdu; int pconn; } ;
typedef TYPE_3__ coap_queue_t ;
struct TYPE_14__ {TYPE_2__* pkt; } ;
struct TYPE_11__ {scalar_t__* id; } ;
struct TYPE_12__ {TYPE_1__ hdr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__**,TYPE_3__*) ;
 TYPE_3__* FUNC_3 (TYPE_3__**) ;
 scalar_t__ FUNC_4 (int ,TYPE_5__*) ;
 int FUNC_5 (TYPE_3__**) ;

void FUNC_6(void *VAR_2){
  if( !VAR_2 )
    return;
  coap_queue_t **VAR_3 = (coap_queue_t **)VAR_2;
  if( !(*VAR_3) )
    return;

  coap_queue_t *VAR_4 = FUNC_3( VAR_3 );

  if (VAR_4->retransmit_cnt < VAR_0) {
    VAR_4->retransmit_cnt++;
    VAR_4->t = VAR_4->timeout << VAR_4->retransmit_cnt;

    FUNC_0("** retransmission #%d of transaction %d\n",
        VAR_4->retransmit_cnt, (((uint16_t)(VAR_4->pdu->pkt->hdr.id[0]))<<8)+VAR_4->pdu->pkt->hdr.id[1]);
    VAR_4->id = FUNC_4(VAR_4->pconn, VAR_4->pdu);
    if (VAR_1 == VAR_4->id) {
      FUNC_0("retransmission: error sending pdu\n");
      FUNC_1(VAR_4);
    } else {
      FUNC_2(VAR_3, VAR_4);
    }
  } else {

    FUNC_1( VAR_4 );
  }

  FUNC_5(VAR_3);
}
