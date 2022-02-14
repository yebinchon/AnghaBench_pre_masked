
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {TYPE_3__* udp; TYPE_2__* tcp; } ;
struct espconn {scalar_t__ type; TYPE_4__ proto; } ;
typedef int ip ;
typedef int coap_tid_t ;
struct TYPE_7__ {int len; scalar_t__ p; } ;
struct TYPE_11__ {int pkt; TYPE_1__ msg; } ;
typedef TYPE_5__ coap_pdu_t ;
struct TYPE_9__ {int remote_port; int remote_ip; } ;
struct TYPE_8__ {int remote_port; int remote_ip; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (struct espconn*,unsigned char*,int ) ;
 int FUNC_2 (int *,int ,int) ;

coap_tid_t FUNC_3(struct espconn *VAR_2, coap_pdu_t *VAR_3) {
  coap_tid_t VAR_4 = VAR_0;
  uint32_t VAR_5 = 0, VAR_6 = 0;
  if ( !VAR_2 || !VAR_3 )
    return VAR_4;

  FUNC_1(VAR_2, (unsigned char *)(VAR_3->msg.p), VAR_3->msg.len);

  if(VAR_2->type == VAR_1){
    FUNC_2(&VAR_5, VAR_2->proto.tcp->remote_ip, sizeof(VAR_5));
    VAR_6 = VAR_2->proto.tcp->remote_port;
  }else{
    FUNC_2(&VAR_5, VAR_2->proto.udp->remote_ip, sizeof(VAR_5));
    VAR_6 = VAR_2->proto.udp->remote_port;
  }
  FUNC_0(VAR_5, VAR_6, VAR_3->pkt, &VAR_4);
  return VAR_4;
}
