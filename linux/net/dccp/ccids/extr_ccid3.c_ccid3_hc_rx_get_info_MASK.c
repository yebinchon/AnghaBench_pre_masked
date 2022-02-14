
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_info {int tcpi_rcv_rtt; int tcpi_options; int tcpi_ca_state; } ;
struct sock {int dummy; } ;
struct TYPE_2__ {int rx_rtt; int rx_state; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct sock*) ;

__attribute__((used)) static void FUNC_1(struct sock *VAR_1, struct tcp_info *VAR_2)
{
 VAR_2->tcpi_ca_state = FUNC_0(VAR_1)->rx_state;
 VAR_2->tcpi_options |= VAR_0;
 VAR_2->tcpi_rcv_rtt = FUNC_0(VAR_1)->rx_rtt;
}
