
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int reo_wnd_steps; } ;
struct tcp_sock {unsigned int app_limited; TYPE_1__ rack; scalar_t__ tsoffset; int reordering; int mss_cache; int snd_cwnd_clamp; int snd_ssthresh; int snd_cwnd; int rtt_min; int mdev_us; int tsorted_sent_queue; int tsq_node; void* out_of_order_queue; } ;
struct sock {int sk_route_forced_caps; int sk_rcvbuf; int sk_sndbuf; int sk_write_space; int sk_state; void* tcp_rtx_queue; } ;
struct inet_connection_sock {int icsk_sync_mss; int icsk_rto; } ;
struct TYPE_5__ {int * sysctl_tcp_rmem; int * sysctl_tcp_wmem; int sysctl_tcp_reordering; } ;
struct TYPE_6__ {TYPE_2__ ipv4; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ) ;
 struct inet_connection_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,unsigned int) ;
 int FUNC_5 (struct sock*) ;
 int VAR_8 ;
 TYPE_3__* FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*,int ) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;
 int VAR_9 ;
 struct tcp_sock* FUNC_10 (struct sock*) ;
 int VAR_10 ;

void FUNC_11(struct sock *VAR_11)
{
 struct inet_connection_sock *VAR_12 = FUNC_2(VAR_11);
 struct tcp_sock *VAR_13 = FUNC_10(VAR_11);

 VAR_13->out_of_order_queue = VAR_1;
 VAR_11->tcp_rtx_queue = VAR_1;
 FUNC_9(VAR_11);
 FUNC_0(&VAR_13->tsq_node);
 FUNC_0(&VAR_13->tsorted_sent_queue);

 VAR_12->icsk_rto = VAR_7;
 VAR_13->mdev_us = FUNC_3(VAR_7);
 FUNC_4(&VAR_13->rtt_min, VAR_9, ~0U);






 VAR_13->snd_cwnd = VAR_5;


 VAR_13->app_limited = ~0U;




 VAR_13->snd_ssthresh = VAR_4;
 VAR_13->snd_cwnd_clamp = ~0;
 VAR_13->mss_cache = VAR_6;

 VAR_13->reordering = FUNC_6(VAR_11)->ipv4.sysctl_tcp_reordering;
 FUNC_8(VAR_11);

 VAR_13->tsoffset = 0;
 VAR_13->rack.reo_wnd_steps = 1;

 VAR_11->sk_state = VAR_3;

 VAR_11->sk_write_space = VAR_8;
 FUNC_7(VAR_11, VAR_2);

 VAR_12->icsk_sync_mss = VAR_10;

 FUNC_1(VAR_11->sk_sndbuf, FUNC_6(VAR_11)->ipv4.sysctl_tcp_wmem[1]);
 FUNC_1(VAR_11->sk_rcvbuf, FUNC_6(VAR_11)->ipv4.sysctl_tcp_rmem[1]);

 FUNC_5(VAR_11);
 VAR_11->sk_route_forced_caps = VAR_0;
}
