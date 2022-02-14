
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* u16_t ;
struct TYPE_8__ {int addr; } ;
struct TYPE_7__ {int addr; } ;
struct tcp_pcb {int state; void* remote_port; TYPE_2__ remote_ip; void* local_port; TYPE_1__ local_ip; } ;
struct TYPE_9__ {int addr; } ;
typedef TYPE_3__ ip_addr_t ;
typedef enum tcp_state { ____Placeholder_tcp_state } tcp_state ;
struct TYPE_10__ {int pcbs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct tcp_pcb*) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 TYPE_6__ VAR_4 ;
 int VAR_5 ;

void
FUNC_2(struct tcp_pcb* VAR_6, enum tcp_state VAR_7, ip_addr_t* VAR_8,
                   ip_addr_t* VAR_9, u16_t VAR_10, u16_t VAR_11)
{


  VAR_6->state = VAR_7;
  if (VAR_7 == VAR_0) {
    FUNC_0(&VAR_3, VAR_6);
    VAR_6->local_ip.addr = VAR_8->addr;
    VAR_6->local_port = VAR_10;
    VAR_6->remote_ip.addr = VAR_9->addr;
    VAR_6->remote_port = VAR_11;
  } else if(VAR_7 == VAR_1) {
    FUNC_0(&VAR_4.pcbs, VAR_6);
    VAR_6->local_ip.addr = VAR_8->addr;
    VAR_6->local_port = VAR_10;
  } else if(VAR_7 == VAR_2) {
    FUNC_0(&VAR_5, VAR_6);
    VAR_6->local_ip.addr = VAR_8->addr;
    VAR_6->local_port = VAR_10;
    VAR_6->remote_ip.addr = VAR_9->addr;
    VAR_6->remote_port = VAR_11;
  } else {
    FUNC_1();
  }
}
