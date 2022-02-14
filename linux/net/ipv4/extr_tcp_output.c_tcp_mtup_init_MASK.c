
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tcphdr {int dummy; } ;
struct TYPE_5__ {scalar_t__ mss_clamp; } ;
struct tcp_sock {TYPE_1__ rx_opt; } ;
struct sock {int dummy; } ;
struct TYPE_7__ {int sysctl_tcp_mtu_probing; int sysctl_tcp_base_mss; } ;
struct net {TYPE_3__ ipv4; } ;
struct TYPE_8__ {int enabled; int probe_timestamp; scalar_t__ probe_size; int search_low; scalar_t__ search_high; } ;
struct inet_connection_sock {TYPE_4__ icsk_mtup; TYPE_2__* icsk_af_ops; } ;
struct TYPE_6__ {scalar_t__ net_header_len; } ;


 struct inet_connection_sock* FUNC_0 (struct sock*) ;
 struct net* FUNC_1 (struct sock*) ;
 int VAR_0 ;
 int FUNC_2 (struct sock*,int ) ;
 struct tcp_sock* FUNC_3 (struct sock*) ;

void FUNC_4(struct sock *VAR_1)
{
 struct tcp_sock *VAR_2 = FUNC_3(VAR_1);
 struct inet_connection_sock *VAR_3 = FUNC_0(VAR_1);
 struct net *VAR_4 = FUNC_1(VAR_1);

 VAR_3->icsk_mtup.enabled = VAR_4->ipv4.sysctl_tcp_mtu_probing > 1;
 VAR_3->icsk_mtup.search_high = VAR_2->rx_opt.mss_clamp + sizeof(struct tcphdr) +
          VAR_3->icsk_af_ops->net_header_len;
 VAR_3->icsk_mtup.search_low = FUNC_2(VAR_1, VAR_4->ipv4.sysctl_tcp_base_mss);
 VAR_3->icsk_mtup.probe_size = 0;
 if (VAR_3->icsk_mtup.enabled)
  VAR_3->icsk_mtup.probe_timestamp = VAR_0;
}
