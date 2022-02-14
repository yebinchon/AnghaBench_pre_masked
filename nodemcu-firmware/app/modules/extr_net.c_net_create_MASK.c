
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_6__ {void* cb_accept_ref; } ;
struct TYPE_5__ {void* cb_sent_ref; void* cb_receive_ref; void* cb_dns_ref; int wait_dns; int hold; void* cb_disconnect_ref; void* cb_reconnect_ref; void* cb_connect_ref; } ;
struct TYPE_7__ {int type; TYPE_2__ server; TYPE_1__ client; int * pcb; void* self_ref; } ;
typedef TYPE_3__ lnet_userdata ;
typedef enum net_type { ____Placeholder_net_type } net_type ;


 void* VAR_0 ;
 char** VAR_1 ;



 int FUNC_0 (int *,char const*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;

lnet_userdata *FUNC_3( lua_State *VAR_2, enum net_type VAR_3 ) {
  const char *VAR_4 = VAR_1[VAR_3];
  lnet_userdata *VAR_5 = (lnet_userdata *)FUNC_1(VAR_2, sizeof(lnet_userdata));
  if (!VAR_5) return ((void*)0);
  FUNC_0(VAR_2, VAR_4);
  FUNC_2(VAR_2, -2);

  VAR_5->type = VAR_3;
  VAR_5->self_ref = VAR_0;
  VAR_5->pcb = ((void*)0);

  switch (VAR_3) {
    case 130:
      VAR_5->client.cb_connect_ref = VAR_0;
      VAR_5->client.cb_reconnect_ref = VAR_0;
      VAR_5->client.cb_disconnect_ref = VAR_0;
      VAR_5->client.hold = 0;
    case 128:
      VAR_5->client.wait_dns = 0;
      VAR_5->client.cb_dns_ref = VAR_0;
      VAR_5->client.cb_receive_ref = VAR_0;
      VAR_5->client.cb_sent_ref = VAR_0;
      break;
    case 129:
      VAR_5->server.cb_accept_ref = VAR_0;
      break;
  }
  return VAR_5;
}
