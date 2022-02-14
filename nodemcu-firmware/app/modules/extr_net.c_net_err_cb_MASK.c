
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int cb_reconnect_ref; int cb_disconnect_ref; scalar_t__ wait_dns; } ;
struct TYPE_4__ {scalar_t__ type; int self_ref; TYPE_1__ client; int * pcb; } ;
typedef TYPE_2__ lnet_userdata ;
typedef int err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int) ;

__attribute__((used)) static void FUNC_6(void *VAR_6, err_t VAR_7) {
  lnet_userdata *VAR_8 = (lnet_userdata*)VAR_6;
  if (!VAR_8 || VAR_8->type != VAR_5 || VAR_8->self_ref == VAR_3) return;
  VAR_8->pcb = ((void*)0);
  lua_State *VAR_9 = FUNC_3();
  int VAR_10;
  if (VAR_7 != VAR_0 && VAR_8->client.cb_reconnect_ref != VAR_3)
    VAR_10 = VAR_8->client.cb_reconnect_ref;
  else VAR_10 = VAR_8->client.cb_disconnect_ref;
  if (VAR_10 != VAR_3) {
    FUNC_5(VAR_9, VAR_4, VAR_10);
    FUNC_5(VAR_9, VAR_4, VAR_8->self_ref);
    FUNC_4(VAR_9, VAR_7);
    FUNC_1(VAR_9, 2, 0);
  }
  if (VAR_8->client.wait_dns == 0) {
    FUNC_2(VAR_9, VAR_2, 0);
    FUNC_0(VAR_9, VAR_4, VAR_8->self_ref);
    VAR_8->self_ref = VAR_3;
    FUNC_2(VAR_9, VAR_1, 0);
  }
}
