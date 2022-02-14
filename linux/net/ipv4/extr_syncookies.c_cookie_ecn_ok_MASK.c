
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_options_received {int rcv_tsecr; } ;
struct TYPE_2__ {scalar_t__ sysctl_tcp_ecn; } ;
struct net {TYPE_1__ ipv4; } ;
struct dst_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dst_entry const*,int ) ;

bool FUNC_1(const struct tcp_options_received *VAR_2,
     const struct net *VAR_3, const struct dst_entry *VAR_4)
{
 bool VAR_5 = VAR_2->rcv_tsecr & VAR_1;

 if (!VAR_5)
  return 0;

 if (VAR_3->ipv4.sysctl_tcp_ecn)
  return 1;

 return FUNC_0(VAR_4, VAR_0);
}
