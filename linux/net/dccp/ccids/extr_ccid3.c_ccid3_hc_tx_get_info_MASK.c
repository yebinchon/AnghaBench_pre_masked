
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_info {int tcpi_rtt; int tcpi_rto; } ;
struct sock {int dummy; } ;
struct TYPE_2__ {int tx_rtt; int tx_t_rto; } ;


 TYPE_1__* FUNC_0 (struct sock*) ;

__attribute__((used)) static void FUNC_1(struct sock *VAR_0, struct tcp_info *VAR_1)
{
 VAR_1->tcpi_rto = FUNC_0(VAR_0)->tx_t_rto;
 VAR_1->tcpi_rtt = FUNC_0(VAR_0)->tx_rtt;
}
