
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_7__ {scalar_t__ cb_dns_ref; scalar_t__ wait_dns; } ;
struct TYPE_8__ {scalar_t__ self_ref; scalar_t__ type; TYPE_1__ client; scalar_t__ pcb; TYPE_4__* tcp_pcb; } ;
typedef TYPE_2__ lnet_userdata ;
struct TYPE_9__ {int addr; } ;
typedef TYPE_3__ ip_addr_t ;
struct TYPE_10__ {scalar_t__ state; int remote_port; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 int FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,int ,scalar_t__) ;
 int VAR_7 ;
 int FUNC_10 (TYPE_4__*,TYPE_3__*,int ,int ) ;

__attribute__((used)) static void FUNC_11(const char *VAR_8, ip_addr_t *VAR_9, void *VAR_10) {
  ip_addr_t VAR_11;
  if (VAR_9 != ((void*)0)) VAR_11 = *VAR_9;
  else VAR_11.addr = 0xFFFFFFFF;
  lnet_userdata *VAR_12 = (lnet_userdata*)VAR_10;
  if (!VAR_12) return;
  lua_State *VAR_13 = FUNC_6();
  if (VAR_12->self_ref != VAR_4 && VAR_12->client.cb_dns_ref != VAR_4) {
    FUNC_9(VAR_13, VAR_5, VAR_12->client.cb_dns_ref);
    FUNC_9(VAR_13, VAR_5, VAR_12->self_ref);
    if (VAR_11.addr != 0xFFFFFFFF) {
      char VAR_14[16];
      FUNC_1(VAR_14, 16);
      FUNC_2(VAR_14, VAR_1, FUNC_0(&VAR_11.addr));
      FUNC_8(VAR_13, VAR_14);
    } else {
      FUNC_7(VAR_13);
    }
    FUNC_4(VAR_13, 2, 0);
  }
  VAR_12->client.wait_dns --;
  if (VAR_12->pcb && VAR_12->type == VAR_6 && VAR_12->tcp_pcb->state == VAR_0) {
    FUNC_10(VAR_12->tcp_pcb, &VAR_11, VAR_12->tcp_pcb->remote_port, VAR_7);
  } else if (!VAR_12->pcb && VAR_12->client.wait_dns == 0) {
    FUNC_5(VAR_13, VAR_3, 0);
    FUNC_3(VAR_13, VAR_5, VAR_12->self_ref);
    VAR_12->self_ref = VAR_4;
    FUNC_5(VAR_13, VAR_2, 0);
  }
}
