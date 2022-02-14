
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_5__ {scalar_t__ hold; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_3__* tcp_pcb; TYPE_1__ client; } ;
typedef TYPE_2__ lnet_userdata ;
struct TYPE_7__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*,int ) ;

int FUNC_3( lua_State *VAR_3 ) {
  lnet_userdata *VAR_4 = FUNC_1(VAR_3);
  if (!VAR_4 || VAR_4->type != VAR_2)
    return FUNC_0(VAR_3, "invalid user data");
  if (VAR_4->client.hold && VAR_4->tcp_pcb) {
 VAR_4->client.hold = 0;
 VAR_4->tcp_pcb->flags |= VAR_1;
    FUNC_2(VAR_4->tcp_pcb, VAR_0);
  }
  return 0;
}
