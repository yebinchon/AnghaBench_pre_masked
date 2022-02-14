
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_5__ {scalar_t__ type; TYPE_1__* udp_pcb; int pcb; } ;
typedef TYPE_2__ lnet_userdata ;
struct TYPE_4__ {int ttl; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int) ;
 TYPE_2__* FUNC_3 (int *) ;

int FUNC_4( lua_State *VAR_1 ) {
  lnet_userdata *VAR_2 = FUNC_3(VAR_1);
  if (!VAR_2 || VAR_2->type == VAR_0)
    return FUNC_0(VAR_1, "invalid user data");
  if (!VAR_2->pcb)
    return FUNC_0(VAR_1, "socket is not open/bound yet");
  int VAR_3 = FUNC_1(VAR_1, 2, -1);




  if (VAR_3 == -1) {
    VAR_3 = VAR_2->udp_pcb->ttl;
  } else {
    VAR_2->udp_pcb->ttl = VAR_3;
  }
  FUNC_2(VAR_1, VAR_3);
  return 1;
}
