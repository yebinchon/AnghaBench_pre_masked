
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcphdr {int dummy; } ;
struct TYPE_2__ {int saw_tstamp; void* rcv_tsecr; void* rcv_tsval; } ;
struct tcp_sock {void* tsoffset; TYPE_1__ rx_opt; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ const FUNC_0 (int) ;
 void* FUNC_1 (scalar_t__ const) ;

__attribute__((used)) static bool FUNC_2(struct tcp_sock *VAR_3, const struct tcphdr *VAR_4)
{
 const __be32 *VAR_5 = (const __be32 *)(VAR_4 + 1);

 if (*VAR_5 == FUNC_0((VAR_1 << 24) | (VAR_1 << 16)
     | (VAR_2 << 8) | VAR_0)) {
  VAR_3->rx_opt.saw_tstamp = 1;
  ++VAR_5;
  VAR_3->rx_opt.rcv_tsval = FUNC_1(*VAR_5);
  ++VAR_5;
  if (*VAR_5)
   VAR_3->rx_opt.rcv_tsecr = FUNC_1(*VAR_5) - VAR_3->tsoffset;
  else
   VAR_3->rx_opt.rcv_tsecr = 0;
  return 1;
 }
 return 0;
}
