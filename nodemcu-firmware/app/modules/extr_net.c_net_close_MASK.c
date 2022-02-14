
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {scalar_t__ wait_dns; } ;
struct TYPE_5__ {int type; int self_ref; TYPE_1__ client; int * pcb; int * udp_pcb; int * tcp_pcb; } ;
typedef TYPE_2__ lnet_userdata ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8( lua_State *VAR_5 ) {
  lnet_userdata *VAR_6 = FUNC_3(VAR_5);
  if (!VAR_6) return FUNC_0(VAR_5, "invalid user data");
  if (VAR_6->pcb) {
    switch (VAR_6->type) {
      case 130:
        if (VAR_0 != FUNC_6(VAR_6->tcp_pcb)) {
          FUNC_5(VAR_6->tcp_pcb, ((void*)0));
          FUNC_4(VAR_6->tcp_pcb);
        }
        VAR_6->tcp_pcb = ((void*)0);
        break;
      case 129:
        FUNC_6(VAR_6->tcp_pcb);
        VAR_6->tcp_pcb = ((void*)0);
        break;
      case 128:
        FUNC_7(VAR_6->udp_pcb);
        VAR_6->udp_pcb = ((void*)0);
        break;
    }
  } else {
    return FUNC_0(VAR_5, "not connected");
  }
  if (VAR_6->type == 129 ||
     (VAR_6->pcb == ((void*)0) && VAR_6->client.wait_dns == 0)) {
    FUNC_2(VAR_5, VAR_2, 0);
    FUNC_1(VAR_5, VAR_4, VAR_6->self_ref);
    VAR_6->self_ref = VAR_3;
    FUNC_2(VAR_5, VAR_1, 0);
  }
  return 0;
}
