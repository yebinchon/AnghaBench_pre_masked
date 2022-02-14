
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int lua_State ;
struct TYPE_8__ {int type; TYPE_2__* udp_pcb; TYPE_1__* tcp_pcb; int pcb; } ;
typedef TYPE_3__ lnet_userdata ;
struct TYPE_9__ {int addr; } ;
typedef TYPE_4__ ip_addr_t ;
struct TYPE_7__ {scalar_t__ local_port; TYPE_4__ local_ip; } ;
struct TYPE_6__ {scalar_t__ local_port; TYPE_4__ local_ip; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;



 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;
 TYPE_3__* FUNC_7 (int *) ;

int FUNC_8( lua_State *VAR_1 ) {
  lnet_userdata *VAR_2 = FUNC_7(VAR_1);
  if (!VAR_2) return FUNC_3(VAR_1, "invalid user data");
  if (!VAR_2->pcb) {
    FUNC_5(VAR_1);
    FUNC_5(VAR_1);
    return 2;
  }
  uint16_t VAR_3;
  ip_addr_t VAR_4;
  switch (VAR_2->type) {
    case 130:
    case 129:
      VAR_4 = VAR_2->tcp_pcb->local_ip;
      VAR_3 = VAR_2->tcp_pcb->local_port;
      break;
    case 128:
      VAR_4 = VAR_2->udp_pcb->local_ip;
      VAR_3 = VAR_2->udp_pcb->local_port;
      break;
  }
  if (VAR_3 == 0) {
    FUNC_5(VAR_1);
    FUNC_5(VAR_1);
    return 2;
  }
  char VAR_5[16];
  FUNC_1(VAR_5, 16);
  FUNC_2(VAR_5, VAR_0, FUNC_0(&VAR_4.addr));
  FUNC_4(VAR_1, VAR_3);
  FUNC_6(VAR_1, VAR_5);
  return 2;
}
