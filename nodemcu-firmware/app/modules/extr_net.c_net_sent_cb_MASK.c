
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16_t ;
struct tcp_pcb {int dummy; } ;
typedef int lua_State ;
struct TYPE_3__ {scalar_t__ cb_sent_ref; } ;
struct TYPE_4__ {scalar_t__ type; scalar_t__ self_ref; TYPE_1__ client; int pcb; } ;
typedef TYPE_2__ lnet_userdata ;
typedef int err_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int,int ) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int ,scalar_t__) ;

__attribute__((used)) static err_t FUNC_3(void *VAR_5, struct tcp_pcb *VAR_6, u16_t VAR_7) {
  lnet_userdata *VAR_8 = (lnet_userdata*)VAR_5;
  if (!VAR_8 || !VAR_8->pcb || VAR_8->type != VAR_4 || VAR_8->self_ref == VAR_2) return VAR_0;
  if (VAR_8->client.cb_sent_ref == VAR_2) return VAR_1;
  lua_State *VAR_9 = FUNC_1();
  FUNC_2(VAR_9, VAR_3, VAR_8->client.cb_sent_ref);
  FUNC_2(VAR_9, VAR_3, VAR_8->self_ref);
  FUNC_0(VAR_9, 1, 0);
  return VAR_1;
}
