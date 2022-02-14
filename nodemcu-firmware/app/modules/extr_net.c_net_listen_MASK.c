
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct tcp_pcb {int so_options; } ;
typedef int lua_State ;
struct TYPE_6__ {void* cb_accept_ref; } ;
struct TYPE_7__ {int type; scalar_t__ self_ref; int * udp_pcb; struct tcp_pcb* tcp_pcb; TYPE_1__ server; scalar_t__ pcb; } ;
typedef TYPE_2__ lnet_userdata ;
typedef int ip_addr_t ;
typedef scalar_t__ err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_0 (char const*,int *) ;
 char* FUNC_1 (int *,int ,size_t*) ;
 int FUNC_2 (int *,char*) ;
 void* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,void*) ;
 scalar_t__ FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,scalar_t__) ;
 int VAR_6 ;
 TYPE_2__* FUNC_12 (int *) ;
 int VAR_7 ;
 int FUNC_13 (struct tcp_pcb*,int ) ;
 int FUNC_14 (struct tcp_pcb*,TYPE_2__*) ;
 scalar_t__ FUNC_15 (struct tcp_pcb*,int *,int ) ;
 int FUNC_16 (struct tcp_pcb*) ;
 struct tcp_pcb* FUNC_17 (struct tcp_pcb*) ;
 struct tcp_pcb* FUNC_18 () ;
 scalar_t__ FUNC_19 (int *,int *,int ) ;
 int * FUNC_20 () ;
 int FUNC_21 (int *,int ,TYPE_2__*) ;
 int FUNC_22 (int *) ;

int FUNC_23( lua_State *VAR_8 ) {
  lnet_userdata *VAR_9 = FUNC_12(VAR_8);
  if (!VAR_9 || VAR_9->type == VAR_5)
    return FUNC_2(VAR_8, "invalid user data");
  if (VAR_9->pcb)
    return FUNC_2(VAR_8, "already listening");
  int VAR_10 = 2;
  uint16_t VAR_11 = 0;
  const char *VAR_12 = "0.0.0.0";
  if (FUNC_7(VAR_8, VAR_10))
    VAR_11 = FUNC_10(VAR_8, VAR_10++);
  if (FUNC_8(VAR_8, VAR_10)) {
    size_t VAR_13 = 0;
    VAR_12 = FUNC_1(VAR_8, VAR_10++, &VAR_13);
  }
  ip_addr_t VAR_14;
  if (!FUNC_0(VAR_12, &VAR_14))
    return FUNC_2(VAR_8, "invalid IP address");
  if (VAR_9->type == 129) {
    if (FUNC_5(VAR_8, VAR_10) || FUNC_6(VAR_8, VAR_10)) {
      FUNC_9(VAR_8, VAR_10++);
      FUNC_4(VAR_8, VAR_3, VAR_9->server.cb_accept_ref);
      VAR_9->server.cb_accept_ref = FUNC_3(VAR_8, VAR_3);
    } else {
      return FUNC_2(VAR_8, "need callback");
    }
  }
  err_t VAR_15 = VAR_1;
  switch (VAR_9->type) {
    case 129:
      VAR_9->tcp_pcb = FUNC_18();
      if (!VAR_9->tcp_pcb)
        return FUNC_2(VAR_8, "cannot allocate PCB");
      VAR_9->tcp_pcb->so_options |= VAR_4;
      VAR_15 = FUNC_15(VAR_9->tcp_pcb, &VAR_14, VAR_11);
      if (VAR_15 == VAR_1) {
        FUNC_14(VAR_9->tcp_pcb, VAR_9);
        struct tcp_pcb *VAR_16 = FUNC_17(VAR_9->tcp_pcb);
        if (!VAR_16) {
          VAR_15 = VAR_0;
        } else {
          VAR_9->tcp_pcb = VAR_16;
          FUNC_13(VAR_9->tcp_pcb, VAR_6);
        }
      }
      break;
    case 128:
      VAR_9->udp_pcb = FUNC_20();
      if (!VAR_9->udp_pcb)
        return FUNC_2(VAR_8, "cannot allocate PCB");
      FUNC_21(VAR_9->udp_pcb, VAR_7, VAR_9);
      VAR_15 = FUNC_19(VAR_9->udp_pcb, &VAR_14, VAR_11);
      break;
  }
  if (VAR_15 != VAR_1) {
    switch (VAR_9->type) {
      case 129:
        FUNC_16(VAR_9->tcp_pcb);
        VAR_9->tcp_pcb = ((void*)0);
        break;
      case 128:
        FUNC_22(VAR_9->udp_pcb);
        VAR_9->udp_pcb = ((void*)0);
        break;
    }
    return FUNC_11(VAR_8, VAR_15);
  }
  if (VAR_9->self_ref == VAR_2) {
    FUNC_9(VAR_8, 1);
    VAR_9->self_ref = FUNC_3(VAR_8, VAR_3);
  }
  return 0;
}
