
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct pbuf {int dummy; } ;
typedef int lua_State ;
struct TYPE_9__ {scalar_t__ cb_sent_ref; } ;
struct TYPE_10__ {scalar_t__ type; scalar_t__ self_ref; int tcp_pcb; TYPE_1__ client; int * udp_pcb; int pcb; } ;
typedef TYPE_2__ lnet_userdata ;
struct TYPE_11__ {int member_0; } ;
typedef TYPE_3__ ip_addr_t ;
typedef scalar_t__ err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (char const*,TYPE_3__*) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 char* FUNC_2 (int *,int ,size_t*) ;
 int FUNC_3 (int *,char*) ;
 void* FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,scalar_t__) ;
 int FUNC_6 (int *,int,int ) ;
 scalar_t__ FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int ,scalar_t__) ;
 int FUNC_11 (int *,scalar_t__) ;
 TYPE_2__* FUNC_12 (int *) ;
 int VAR_9 ;
 struct pbuf* FUNC_13 (int ,size_t,int ) ;
 int FUNC_14 (struct pbuf*) ;
 int FUNC_15 (struct pbuf*,char const*,size_t) ;
 scalar_t__ FUNC_16 (int ,char const*,size_t,int ) ;
 scalar_t__ FUNC_17 (int *,TYPE_3__*,int ) ;
 int * FUNC_18 () ;
 int FUNC_19 (int *,int ,TYPE_2__*) ;
 int FUNC_20 (int *) ;
 scalar_t__ FUNC_21 (int *,struct pbuf*,TYPE_3__*,scalar_t__) ;

int FUNC_22( lua_State *VAR_10 ) {
  lnet_userdata *VAR_11 = FUNC_12(VAR_10);
  if (!VAR_11 || VAR_11->type == VAR_7)
    return FUNC_3(VAR_10, "invalid user data");
  ip_addr_t VAR_12;
  uint16_t VAR_13;
  const char *VAR_14;
  size_t VAR_15 = 0;
  int VAR_16 = 2;
  if (VAR_11->type == VAR_8) {
    size_t VAR_17 = 0;
    VAR_13 = FUNC_1(VAR_10, VAR_16++);
    if (VAR_13 == 0) return FUNC_3(VAR_10, "need port");
    const char *VAR_18 = FUNC_2(VAR_10, VAR_16++, &VAR_17);
    if (!VAR_18) return FUNC_3(VAR_10, "need IP address");
    if (!FUNC_0(VAR_18, &VAR_12)) return FUNC_3(VAR_10, "invalid IP address");
  }
  VAR_14 = FUNC_2(VAR_10, VAR_16++, &VAR_15);
  if (!VAR_14 || VAR_15 == 0) return FUNC_3(VAR_10, "no data to send");
  if (FUNC_7(VAR_10, VAR_16) || FUNC_8(VAR_10, VAR_16)) {
    FUNC_9(VAR_10, VAR_16++);
    FUNC_5(VAR_10, VAR_2, VAR_11->client.cb_sent_ref);
    VAR_11->client.cb_sent_ref = FUNC_4(VAR_10, VAR_2);
  }
  if (VAR_11->type == VAR_8 && !VAR_11->pcb) {
    VAR_11->udp_pcb = FUNC_18();
    if (!VAR_11->udp_pcb)
      return FUNC_3(VAR_10, "cannot allocate PCB");
    FUNC_19(VAR_11->udp_pcb, VAR_9, VAR_11);
    ip_addr_t VAR_19 = {0};
    err_t VAR_20 = FUNC_17(VAR_11->udp_pcb, &VAR_19, 0);
    if (VAR_20 != VAR_0) {
      FUNC_20(VAR_11->udp_pcb);
      VAR_11->udp_pcb = ((void*)0);
      return FUNC_11(VAR_10, VAR_20);
    }
    if (VAR_11->self_ref == VAR_1) {
      FUNC_9(VAR_10, 1);
      VAR_11->self_ref = FUNC_4(VAR_10, VAR_2);
    }
  }
  if (!VAR_11->pcb || VAR_11->self_ref == VAR_1)
    return FUNC_3(VAR_10, "not connected");
  err_t VAR_21;
  if (VAR_11->type == VAR_8) {
    struct pbuf *VAR_22 = FUNC_13(VAR_4, VAR_15, VAR_3);
    if (!VAR_22)
      return FUNC_3(VAR_10, "cannot allocate message buffer");
    FUNC_15(VAR_22, VAR_14, VAR_15);
    VAR_21 = FUNC_21(VAR_11->udp_pcb, VAR_22, &VAR_12, VAR_13);
    FUNC_14(VAR_22);
    if (VAR_11->client.cb_sent_ref != VAR_1) {
      FUNC_10(VAR_10, VAR_2, VAR_11->client.cb_sent_ref);
      FUNC_10(VAR_10, VAR_2, VAR_11->self_ref);
      FUNC_6(VAR_10, 1, 0);
    }
  } else if (VAR_11->type == VAR_6) {
    VAR_21 = FUNC_16(VAR_11->tcp_pcb, VAR_14, VAR_15, VAR_5);
  }
  return FUNC_11(VAR_10, VAR_21);
}
