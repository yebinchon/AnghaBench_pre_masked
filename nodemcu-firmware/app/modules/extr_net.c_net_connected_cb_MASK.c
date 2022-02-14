
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcp_pcb {int dummy; } ;
typedef int lua_State ;
struct TYPE_3__ {scalar_t__ cb_connect_ref; } ;
struct TYPE_4__ {scalar_t__ self_ref; TYPE_1__ client; struct tcp_pcb* pcb; } ;
typedef TYPE_2__ lnet_userdata ;
typedef scalar_t__ err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,int ) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int ,scalar_t__) ;
 int FUNC_3 (void*,scalar_t__) ;

__attribute__((used)) static err_t FUNC_4(void *VAR_4, struct tcp_pcb *VAR_5, err_t VAR_6) {
  lnet_userdata *VAR_7 = (lnet_userdata*)VAR_4;
  if (!VAR_7 || VAR_7->pcb != VAR_5) return VAR_0;
  if (VAR_6 != VAR_1) {
    FUNC_3(VAR_4, VAR_6);
    return VAR_0;
  }
  lua_State *VAR_8 = FUNC_1();
  if (VAR_7->self_ref != VAR_2 && VAR_7->client.cb_connect_ref != VAR_2) {
    FUNC_2(VAR_8, VAR_3, VAR_7->client.cb_connect_ref);
    FUNC_2(VAR_8, VAR_3, VAR_7->self_ref);
    FUNC_0(VAR_8, 1, 0);
  }
  return VAR_1;
}
