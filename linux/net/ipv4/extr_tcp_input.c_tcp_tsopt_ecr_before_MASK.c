
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ rcv_tsecr; scalar_t__ saw_tstamp; } ;
struct tcp_sock {TYPE_1__ rx_opt; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static bool FUNC_1(const struct tcp_sock *VAR_0, u32 VAR_1)
{
 return VAR_0->rx_opt.saw_tstamp && VAR_0->rx_opt.rcv_tsecr &&
        FUNC_0(VAR_0->rx_opt.rcv_tsecr, VAR_1);
}
