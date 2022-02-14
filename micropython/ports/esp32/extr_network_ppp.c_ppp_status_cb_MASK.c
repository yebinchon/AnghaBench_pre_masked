
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int addr; } ;
struct TYPE_6__ {TYPE_1__ ip4; } ;
struct TYPE_7__ {TYPE_2__ u_addr; } ;
struct netif {TYPE_3__ ip_addr; } ;
typedef int ppp_pcb ;
struct TYPE_8__ {int connected; int clean_close; int pcb; } ;
typedef TYPE_4__ ppp_if_obj_t ;





 struct netif* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(ppp_pcb *VAR_0, int VAR_1, void *VAR_2) {
    ppp_if_obj_t* VAR_3 = VAR_2;
    struct netif *VAR_4 = FUNC_0(VAR_3->pcb);

    switch (VAR_1) {
        case 129:
            VAR_3->connected = (VAR_4->ip_addr.u_addr.ip4.addr != 0);
            break;
        case 128:
            VAR_3->clean_close = 1;
            break;
        case 130:
            VAR_3->connected = 0;
            break;
        default:
            break;
    }
}
