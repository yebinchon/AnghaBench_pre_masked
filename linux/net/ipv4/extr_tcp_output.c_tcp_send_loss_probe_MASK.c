
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {int packets_out; scalar_t__ snd_nxt; scalar_t__ tlp_high_seq; int snd_cwnd; } ;
struct sock {int sk_state; int tcp_rtx_queue; } ;
struct sk_buff {int len; } ;
struct TYPE_2__ {scalar_t__ icsk_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,char*,int,int ,int ,int) ;
 scalar_t__ FUNC_3 (struct sock*,struct sk_buff*,int) ;
 TYPE_1__* FUNC_4 (struct sock*) ;
 struct sk_buff* FUNC_5 (int *) ;
 struct sk_buff* FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sock*,struct sk_buff*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*,int ,struct sk_buff*,int,int,int ) ;
 int FUNC_11 (struct sock*) ;
 struct sk_buff* FUNC_12 (struct sock*) ;
 struct tcp_sock* FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sk_buff*) ;
 scalar_t__ FUNC_15 (struct tcp_sock*,struct sk_buff*,int) ;
 int FUNC_16 (struct sock*,int,int ,int,int ) ;
 scalar_t__ FUNC_17 (int) ;

void FUNC_18(struct sock *VAR_4)
{
 struct tcp_sock *VAR_5 = FUNC_13(VAR_4);
 struct sk_buff *VAR_6;
 int VAR_7;
 int VAR_8 = FUNC_9(VAR_4);

 VAR_6 = FUNC_12(VAR_4);
 if (VAR_6 && FUNC_15(VAR_5, VAR_6, VAR_8)) {
  VAR_7 = VAR_5->packets_out;
  FUNC_16(VAR_4, VAR_8, VAR_3, 2, VAR_0);
  if (VAR_5->packets_out > VAR_7)
   goto probe_sent;
  goto rearm_timer;
 }
 VAR_6 = FUNC_5(&VAR_4->tcp_rtx_queue);
 if (FUNC_17(!VAR_6)) {
  FUNC_2(VAR_5->packets_out,
     "invalid inflight: %u state %u cwnd %u mss %d\n",
     VAR_5->packets_out, VAR_4->sk_state, VAR_5->snd_cwnd, VAR_8);
  FUNC_4(VAR_4)->icsk_pending = 0;
  return;
 }


 if (VAR_5->tlp_high_seq)
  goto rearm_timer;

 if (FUNC_7(VAR_4, VAR_6))
  goto rearm_timer;

 VAR_7 = FUNC_14(VAR_6);
 if (FUNC_1(!VAR_7))
  goto rearm_timer;

 if ((VAR_7 > 1) && (VAR_6->len > (VAR_7 - 1) * VAR_8)) {
  if (FUNC_17(FUNC_10(VAR_4, VAR_2, VAR_6,
       (VAR_7 - 1) * VAR_8, VAR_8,
       VAR_0)))
   goto rearm_timer;
  VAR_6 = FUNC_6(VAR_6);
 }

 if (FUNC_1(!VAR_6 || !FUNC_14(VAR_6)))
  goto rearm_timer;

 if (FUNC_3(VAR_4, VAR_6, 1))
  goto rearm_timer;


 VAR_5->tlp_high_seq = VAR_5->snd_nxt;

probe_sent:
 FUNC_0(FUNC_8(VAR_4), VAR_1);

 FUNC_4(VAR_4)->icsk_pending = 0;
rearm_timer:
 FUNC_11(VAR_4);
}
