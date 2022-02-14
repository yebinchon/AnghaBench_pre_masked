
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tcp_pcb {int keep_idle; int keep_cnt; int so_options; } ;
typedef int lua_State ;
struct TYPE_6__ {scalar_t__ cb_accept_ref; int timeout; } ;
struct TYPE_7__ {scalar_t__ type; scalar_t__ self_ref; struct tcp_pcb* tcp_pcb; TYPE_1__ server; int pcb; } ;
typedef TYPE_2__ lnet_userdata ;
typedef int err_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int,int ) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ,scalar_t__) ;
 int FUNC_5 (TYPE_2__*,struct tcp_pcb*,int ) ;
 TYPE_2__* FUNC_6 (int *,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (struct tcp_pcb*) ;
 int FUNC_8 (struct tcp_pcb*,TYPE_2__*) ;
 int FUNC_9 (struct tcp_pcb*,int ) ;
 int FUNC_10 (struct tcp_pcb*,int ) ;
 int FUNC_11 (struct tcp_pcb*,int ) ;

__attribute__((used)) static err_t FUNC_12(void *VAR_10, struct tcp_pcb *VAR_11, err_t VAR_12) {
  lnet_userdata *VAR_13 = (lnet_userdata*)VAR_10;
  if (!VAR_13 || VAR_13->type != VAR_6 || !VAR_13->pcb) return VAR_0;
  if (VAR_13->self_ref == VAR_2 || VAR_13->server.cb_accept_ref == VAR_2) return VAR_0;

  lua_State *VAR_14 = FUNC_2();
  FUNC_4(VAR_14, VAR_3, VAR_13->server.cb_accept_ref);

  lnet_userdata *VAR_15 = FUNC_6(VAR_14, VAR_5);
  FUNC_3(VAR_14, 2);
  VAR_15->self_ref = FUNC_0(VAR_14, VAR_3);
  VAR_15->tcp_pcb = VAR_11;
  FUNC_8(VAR_15->tcp_pcb, VAR_15);
  FUNC_9(VAR_15->tcp_pcb, VAR_7);
  FUNC_10(VAR_15->tcp_pcb, VAR_9);
  FUNC_11(VAR_15->tcp_pcb, VAR_8);
  VAR_15->tcp_pcb->so_options |= VAR_4;
  VAR_15->tcp_pcb->keep_idle = VAR_13->server.timeout * 1000;
  VAR_15->tcp_pcb->keep_cnt = 1;
  FUNC_7(VAR_13->tcp_pcb);

  FUNC_1(VAR_14, 1, 0);

  return FUNC_5(VAR_15, VAR_15->tcp_pcb, VAR_1);
}
