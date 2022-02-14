
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_timewait_sock {int tw_rcv_wnd; int tw_ts_recent; scalar_t__ tw_ts_offset; int tw_rcv_nxt; int tw_snd_nxt; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct inet_timewait_sock {int tw_rcv_wscale; int tw_priority; int tw_flowlabel; int tw_tclass; int tw_bound_dev_if; } ;


 int FUNC_0 (int ) ;
 struct inet_timewait_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct inet_timewait_sock*) ;
 scalar_t__ FUNC_3 () ;
 struct tcp_timewait_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct tcp_timewait_sock*) ;
 int FUNC_6 (struct sock*,struct sk_buff*,int ,int ,int,scalar_t__,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 struct inet_timewait_sock *VAR_2 = FUNC_1(VAR_0);
 struct tcp_timewait_sock *VAR_3 = FUNC_4(VAR_0);

 FUNC_6(VAR_0, VAR_1, VAR_3->tw_snd_nxt, VAR_3->tw_rcv_nxt,
   VAR_3->tw_rcv_wnd >> VAR_2->tw_rcv_wscale,
   FUNC_3() + VAR_3->tw_ts_offset,
   VAR_3->tw_ts_recent, VAR_2->tw_bound_dev_if, FUNC_5(VAR_3),
   VAR_2->tw_tclass, FUNC_0(VAR_2->tw_flowlabel), VAR_2->tw_priority);

 FUNC_2(VAR_2);
}
