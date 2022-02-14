
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {int hold; } ;
struct TYPE_5__ {scalar_t__ type; TYPE_1__ client; scalar_t__ tcp_pcb; } ;
typedef TYPE_2__ lnet_userdata ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*) ;
 TYPE_2__* FUNC_1 (int *) ;

int FUNC_2( lua_State *VAR_1 ) {
  lnet_userdata *VAR_2 = FUNC_1(VAR_1);
  if (!VAR_2 || VAR_2->type != VAR_0)
    return FUNC_0(VAR_1, "invalid user data");
  if (!VAR_2->client.hold && VAR_2->tcp_pcb) {
 VAR_2->client.hold = 1;
  }
  return 0;
}
