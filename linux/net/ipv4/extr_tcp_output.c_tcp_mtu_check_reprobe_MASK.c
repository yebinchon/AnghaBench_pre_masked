
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct tcphdr {int dummy; } ;
struct TYPE_6__ {scalar_t__ mss_clamp; } ;
struct tcp_sock {TYPE_2__ rx_opt; } ;
struct sock {int dummy; } ;
struct TYPE_5__ {int sysctl_tcp_probe_interval; } ;
struct net {TYPE_1__ ipv4; } ;
struct TYPE_8__ {void* probe_timestamp; int search_low; scalar_t__ search_high; scalar_t__ probe_size; } ;
struct inet_connection_sock {TYPE_4__ icsk_mtup; TYPE_3__* icsk_af_ops; } ;
typedef int s32 ;
struct TYPE_7__ {scalar_t__ net_header_len; } ;


 int VAR_0 ;
 struct inet_connection_sock* FUNC_0 (struct sock*) ;
 struct net* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 void* VAR_1 ;
 int FUNC_3 (struct sock*,int) ;
 struct tcp_sock* FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static inline void FUNC_6(struct sock *VAR_2)
{
 struct inet_connection_sock *VAR_3 = FUNC_0(VAR_2);
 struct tcp_sock *VAR_4 = FUNC_4(VAR_2);
 struct net *VAR_5 = FUNC_1(VAR_2);
 u32 VAR_6;
 s32 VAR_7;

 VAR_6 = VAR_5->ipv4.sysctl_tcp_probe_interval;
 VAR_7 = VAR_1 - VAR_3->icsk_mtup.probe_timestamp;
 if (FUNC_5(VAR_7 >= VAR_6 * VAR_0)) {
  int VAR_8 = FUNC_2(VAR_2);


  VAR_3->icsk_mtup.probe_size = 0;
  VAR_3->icsk_mtup.search_high = VAR_4->rx_opt.mss_clamp +
   sizeof(struct tcphdr) +
   VAR_3->icsk_af_ops->net_header_len;
  VAR_3->icsk_mtup.search_low = FUNC_3(VAR_2, VAR_8);


  VAR_3->icsk_mtup.probe_timestamp = VAR_1;
 }
}
