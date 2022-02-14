
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; } ;
struct tcp_pcb {size_t state; int remote_port; TYPE_1__ remote_ip; } ;
typedef scalar_t__ PVOID ;


 int FUNC_0 (char*,unsigned int,...) ;
 unsigned int FUNC_1 (int ) ;
 int * VAR_0 ;

void
FUNC_2(PVOID VAR_1)
{
    struct tcp_pcb *VAR_2 = (struct tcp_pcb*)VAR_1;
    unsigned int VAR_3 = FUNC_1(VAR_2->remote_ip.addr);

    FUNC_0("\tState: %s\n", VAR_0[VAR_2->state]);
    FUNC_0("\tRemote: (%d.%d.%d.%d, %d)\n",
    (VAR_3 >> 24) & 0xFF,
    (VAR_3 >> 16) & 0xFF,
    (VAR_3 >> 8) & 0xFF,
    VAR_3 & 0xFF,
    VAR_2->remote_port);
}
