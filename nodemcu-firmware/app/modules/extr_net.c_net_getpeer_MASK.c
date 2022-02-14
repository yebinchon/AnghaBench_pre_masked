
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int lua_State ;
struct TYPE_6__ {scalar_t__ type; TYPE_1__* tcp_pcb; int pcb; } ;
typedef TYPE_2__ lnet_userdata ;
struct TYPE_7__ {int addr; } ;
typedef TYPE_3__ ip_addr_t ;
struct TYPE_5__ {scalar_t__ remote_port; TYPE_3__ remote_ip; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;
 TYPE_2__* FUNC_7 (int *) ;

int FUNC_8( lua_State *VAR_2 ) {
  lnet_userdata *VAR_3 = FUNC_7(VAR_2);
  if (!VAR_3 || VAR_3->type != VAR_1)
    return FUNC_3(VAR_2, "invalid user data");
  if (!VAR_3->pcb) {
    FUNC_5(VAR_2);
    FUNC_5(VAR_2);
    return 2;
  }
  uint16_t VAR_4 = VAR_3->tcp_pcb->remote_port;
  ip_addr_t VAR_5 = VAR_3->tcp_pcb->remote_ip;
  if (VAR_4 == 0) {
    FUNC_5(VAR_2);
    FUNC_5(VAR_2);
    return 2;
  }
  char VAR_6[16];
  FUNC_1(VAR_6, 16);
  FUNC_2(VAR_6, VAR_0, FUNC_0(&VAR_5.addr));
  FUNC_4(VAR_2, VAR_4);
  FUNC_6(VAR_2, VAR_6);
  return 2;
}
