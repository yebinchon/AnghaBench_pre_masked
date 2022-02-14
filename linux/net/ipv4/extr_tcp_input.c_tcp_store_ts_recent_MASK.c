
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ts_recent_stamp; int rcv_tsval; int ts_recent; } ;
struct tcp_sock {TYPE_1__ rx_opt; } ;


 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct tcp_sock *VAR_0)
{
 VAR_0->rx_opt.ts_recent = VAR_0->rx_opt.rcv_tsval;
 VAR_0->rx_opt.ts_recent_stamp = FUNC_0();
}
