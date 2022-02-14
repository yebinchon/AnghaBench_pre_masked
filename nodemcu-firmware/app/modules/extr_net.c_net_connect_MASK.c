
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int lua_State ;
struct TYPE_14__ {scalar_t__ cb_connect_ref; int wait_dns; } ;
struct TYPE_15__ {scalar_t__ type; scalar_t__ self_ref; TYPE_3__* tcp_pcb; TYPE_1__ client; scalar_t__ pcb; } ;
typedef TYPE_2__ lnet_userdata ;
typedef int ip_addr_t ;
typedef scalar_t__ err_t ;
struct TYPE_16__ {scalar_t__ remote_port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (char const*,int *,int (*) (char const*,int *,TYPE_2__*),TYPE_2__*) ;
 int FUNC_1 (int *,int,int,char*) ;
 scalar_t__ FUNC_2 (int *,int) ;
 char* FUNC_3 (int *,int,size_t*) ;
 int FUNC_4 (int *,char*) ;
 void* FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ,scalar_t__) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int *,int) ;
 scalar_t__ FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,scalar_t__) ;
 int FUNC_13 (char const*,int *,TYPE_2__*) ;
 int VAR_5 ;
 TYPE_2__* FUNC_14 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_17 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_18 () ;
 int FUNC_19 (TYPE_3__*,int ) ;
 int FUNC_20 (TYPE_3__*,int ) ;

int FUNC_21( lua_State *VAR_8 ) {
  lnet_userdata *VAR_9 = FUNC_14(VAR_8);
  if (!VAR_9 || VAR_9->type != VAR_4)
    return FUNC_4(VAR_8, "invalid user data");
  if (VAR_9->pcb)
    return FUNC_4(VAR_8, "already connected");
  uint16_t VAR_10 = FUNC_2(VAR_8, 2);
  if (VAR_10 == 0)
    return FUNC_4(VAR_8, "specify port");
  const char *VAR_11 = "127.0.0.1";
  if (FUNC_10(VAR_8, 3)) {
    size_t VAR_12 = 0;
    VAR_11 = FUNC_3(VAR_8, 3, &VAR_12);
  }
  if (FUNC_7(VAR_8) > 3) {
    FUNC_1(VAR_8, FUNC_8(VAR_8, 4) || FUNC_9(VAR_8, 4), 4, "not a function");
    FUNC_11(VAR_8, 4);
    FUNC_6(VAR_8, VAR_3, VAR_9->client.cb_connect_ref);
    VAR_9->client.cb_connect_ref = FUNC_5(VAR_8, VAR_3);
  }
  VAR_9->tcp_pcb = FUNC_18();
  if (!VAR_9->tcp_pcb)
    return FUNC_4(VAR_8, "cannot allocate PCB");
  FUNC_16(VAR_9->tcp_pcb, VAR_9);
  FUNC_17(VAR_9->tcp_pcb, VAR_5);
  FUNC_19(VAR_9->tcp_pcb, VAR_7);
  FUNC_20(VAR_9->tcp_pcb, VAR_6);
  VAR_9->tcp_pcb->remote_port = VAR_10;
  ip_addr_t VAR_13;
  VAR_9->client.wait_dns ++;
  int VAR_14 = 0;
  if (VAR_9->self_ref == VAR_2) {
    VAR_14 = 1;
    FUNC_11(VAR_8, 1);
    VAR_9->self_ref = FUNC_5(VAR_8, VAR_3);
  }
  err_t VAR_15 = FUNC_0(VAR_11, &VAR_13, FUNC_13, VAR_9);
  if (VAR_15 == VAR_1) {
    FUNC_13(VAR_11, &VAR_13, VAR_9);
  } else if (VAR_15 != VAR_0) {
    VAR_9->client.wait_dns --;
    if (VAR_14) {
      FUNC_6(VAR_8, VAR_3, VAR_9->self_ref);
      VAR_9->self_ref = VAR_2;
    }
    FUNC_15(VAR_9->tcp_pcb);
    VAR_9->tcp_pcb = ((void*)0);
    return FUNC_12(VAR_8, VAR_15);
  }
  return 0;
}
