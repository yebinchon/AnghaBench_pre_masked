
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_6__ {void* cb_accept_ref; } ;
struct TYPE_5__ {void* cb_sent_ref; void* cb_receive_ref; void* cb_dns_ref; void* cb_reconnect_ref; void* cb_disconnect_ref; void* cb_connect_ref; } ;
struct TYPE_7__ {int type; void* self_ref; TYPE_2__ server; TYPE_1__ client; int * udp_pcb; int * tcp_pcb; scalar_t__ pcb; } ;
typedef TYPE_3__ lnet_userdata ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ,void*) ;
 int FUNC_2 (int *,int ,int ) ;
 TYPE_3__* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8( lua_State *VAR_4 ) {
  lnet_userdata *VAR_5 = FUNC_3(VAR_4);
  if (!VAR_5) return FUNC_0(VAR_4, "no user data");
  if (VAR_5->pcb) {
    switch (VAR_5->type) {
      case 130:
        FUNC_5(VAR_5->tcp_pcb, ((void*)0));
        FUNC_4(VAR_5->tcp_pcb);
        VAR_5->tcp_pcb = ((void*)0);
        break;
      case 129:
        FUNC_6(VAR_5->tcp_pcb);
        VAR_5->tcp_pcb = ((void*)0);
        break;
      case 128:
        FUNC_7(VAR_5->udp_pcb);
        VAR_5->udp_pcb = ((void*)0);
        break;
    }
  }
  switch (VAR_5->type) {
    case 130:
      FUNC_1(VAR_4, VAR_3, VAR_5->client.cb_connect_ref);
      VAR_5->client.cb_connect_ref = VAR_2;
      FUNC_1(VAR_4, VAR_3, VAR_5->client.cb_disconnect_ref);
      VAR_5->client.cb_disconnect_ref = VAR_2;
      FUNC_1(VAR_4, VAR_3, VAR_5->client.cb_reconnect_ref);
      VAR_5->client.cb_reconnect_ref = VAR_2;
    case 128:
      FUNC_1(VAR_4, VAR_3, VAR_5->client.cb_dns_ref);
      VAR_5->client.cb_dns_ref = VAR_2;
      FUNC_1(VAR_4, VAR_3, VAR_5->client.cb_receive_ref);
      VAR_5->client.cb_receive_ref = VAR_2;
      FUNC_1(VAR_4, VAR_3, VAR_5->client.cb_sent_ref);
      VAR_5->client.cb_sent_ref = VAR_2;
      break;
    case 129:
      FUNC_1(VAR_4, VAR_3, VAR_5->server.cb_accept_ref);
      VAR_5->server.cb_accept_ref = VAR_2;
      break;
  }
  FUNC_2(VAR_4, VAR_1, 0);
  FUNC_1(VAR_4, VAR_3, VAR_5->self_ref);
  VAR_5->self_ref = VAR_2;
  FUNC_2(VAR_4, VAR_0, 0);
  return 0;
}
