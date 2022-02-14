
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tcp_sock {scalar_t__ packets_out; scalar_t__ max_packets_out; int is_cwnd_limited; scalar_t__ snd_cwnd_used; scalar_t__ snd_cwnd_stamp; int snd_nxt; int max_packets_seq; int snd_una; } ;
struct tcp_congestion_ops {int cong_control; } ;
struct sock {int sk_state; TYPE_2__* sk_socket; } ;
typedef scalar_t__ s32 ;
struct TYPE_8__ {scalar_t__ icsk_rto; struct tcp_congestion_ops* icsk_ca_ops; } ;
struct TYPE_5__ {scalar_t__ sysctl_tcp_slow_start_after_idle; } ;
struct TYPE_7__ {TYPE_1__ ipv4; } ;
struct TYPE_6__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 TYPE_4__* FUNC_1 (struct sock*) ;
 TYPE_3__* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,int ) ;
 int FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (struct sock*) ;
 scalar_t__ VAR_4 ;
 struct tcp_sock* FUNC_6 (struct sock*) ;
 scalar_t__ FUNC_7 (struct sock*) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static void FUNC_9(struct sock *VAR_5, bool VAR_6)
{
 const struct tcp_congestion_ops *VAR_7 = FUNC_1(VAR_5)->icsk_ca_ops;
 struct tcp_sock *VAR_8 = FUNC_6(VAR_5);




 if (!FUNC_0(VAR_8->snd_una, VAR_8->max_packets_seq) ||
     VAR_8->packets_out > VAR_8->max_packets_out) {
  VAR_8->max_packets_out = VAR_8->packets_out;
  VAR_8->max_packets_seq = VAR_8->snd_nxt;
  VAR_8->is_cwnd_limited = VAR_6;
 }

 if (FUNC_5(VAR_5)) {

  VAR_8->snd_cwnd_used = 0;
  VAR_8->snd_cwnd_stamp = VAR_4;
 } else {

  if (VAR_8->packets_out > VAR_8->snd_cwnd_used)
   VAR_8->snd_cwnd_used = VAR_8->packets_out;

  if (FUNC_2(VAR_5)->ipv4.sysctl_tcp_slow_start_after_idle &&
      (s32)(VAR_4 - VAR_8->snd_cwnd_stamp) >= FUNC_1(VAR_5)->icsk_rto &&
      !VAR_7->cong_control)
   FUNC_4(VAR_5);
  if (FUNC_7(VAR_5) && VAR_5->sk_socket &&
      FUNC_8(VAR_0, &VAR_5->sk_socket->flags) &&
      (1 << VAR_5->sk_state) & (VAR_2 | VAR_1))
   FUNC_3(VAR_5, VAR_3);
 }
}
