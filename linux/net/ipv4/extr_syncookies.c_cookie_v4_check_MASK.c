
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_18__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;


typedef scalar_t__ u32 ;
typedef int tcp_opt ;
struct tcphdr {int dest; int source; int seq; scalar_t__ rst; int ack; int ack_seq; } ;
struct tcp_sock {scalar_t__ window_clamp; } ;
struct tcp_request_sock {int tfo_listener; scalar_t__ snt_synack; int txhash; scalar_t__ ts_off; void* snt_isn; void* rcv_isn; } ;
struct tcp_options_received {int rcv_tsval; scalar_t__ saw_tstamp; int wscale_ok; int sack_ok; int snd_wscale; scalar_t__ rcv_tsecr; } ;
struct sock {int sk_uid; } ;
struct sk_buff {int dummy; } ;
struct rtable {int dst; } ;
struct request_sock {int mss; int rsk_window_clamp; int rsk_rcv_wnd; scalar_t__ num_retrans; int ts_recent; } ;
struct ip_options {int faddr; scalar_t__ srr; } ;
struct inet_request_sock {int ecn_ok; int rcv_wscale; int wscale_ok; int ir_loc_addr; int ir_rmt_addr; int ir_mark; int ir_iif; int ireq_opt; scalar_t__ smc_ok; scalar_t__ tstamp_ok; int sack_ok; int snd_wscale; int ir_rmt_port; int ir_num; } ;
struct flowi4 {int dummy; } ;
typedef int __u8 ;
typedef void* __u32 ;
struct TYPE_26__ {int sysctl_tcp_syncookies; } ;
struct TYPE_28__ {TYPE_5__ ipv4; } ;
struct TYPE_27__ {struct flowi4 ip4; } ;
struct TYPE_24__ {struct ip_options opt; } ;
struct TYPE_25__ {TYPE_3__ h4; } ;
struct TYPE_22__ {TYPE_6__ u; } ;
struct TYPE_23__ {TYPE_1__ fl; } ;
struct TYPE_21__ {TYPE_4__ header; } ;
struct TYPE_20__ {TYPE_2__ cork; } ;
struct TYPE_19__ {int saddr; int daddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct rtable*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct sock*) ;
 int VAR_6 ;
 TYPE_18__* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (TYPE_7__*,int ) ;
 int FUNC_6 (TYPE_12__*,struct tcphdr const*,void*) ;
 int FUNC_7 (struct tcp_options_received*,TYPE_7__*,int *) ;
 int FUNC_8 (TYPE_7__*,struct tcp_options_received*) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (struct flowi4*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_11 (struct flowi4*) ;
 struct request_sock* FUNC_12 (int *,struct sock*,int) ;
 int FUNC_13 (struct sock*,struct sk_buff*) ;
 int FUNC_14 (struct sock*,struct sk_buff*) ;
 struct inet_request_sock* FUNC_15 (struct request_sock*) ;
 TYPE_13__* FUNC_16 (struct sock*) ;
 int FUNC_17 (struct sock*) ;
 TYPE_12__* FUNC_18 (struct sk_buff*) ;
 struct rtable* FUNC_19 (TYPE_7__*,struct flowi4*) ;
 int FUNC_20 (struct tcp_options_received*,int ,int) ;
 int FUNC_21 () ;
 void* FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (struct request_sock*) ;
 int FUNC_25 (struct request_sock*) ;
 scalar_t__ FUNC_26 (TYPE_7__*,int ,int ) ;
 scalar_t__ FUNC_27 (struct sock*,struct sk_buff*,struct request_sock*) ;
 int FUNC_28 (struct request_sock*,int ) ;
 int FUNC_29 (int ,int ) ;
 int FUNC_30 (int ,int ) ;
 TYPE_7__* FUNC_31 (struct sock*) ;
 int FUNC_32 (struct sock*) ;
 struct sock* FUNC_33 (struct sock*,struct sk_buff*,struct request_sock*,int *,scalar_t__) ;
 struct tcphdr* FUNC_34 (struct sk_buff*) ;
 int FUNC_35 (TYPE_7__*,struct sk_buff*,struct tcp_options_received*,int ,int *) ;
 int VAR_7 ;
 struct tcp_request_sock* FUNC_36 (struct request_sock*) ;
 int FUNC_37 (struct sock*,int ,int,int *,int *,int ,int *,int ) ;
 struct tcp_sock* FUNC_38 (struct sock*) ;
 scalar_t__ FUNC_39 (struct sock*) ;
 int FUNC_40 (TYPE_7__*,struct sk_buff*) ;

struct sock *FUNC_41(struct sock *VAR_8, struct sk_buff *VAR_9)
{
 struct ip_options *VAR_10 = &FUNC_4(VAR_9)->header.h4.opt;
 struct tcp_options_received VAR_11;
 struct inet_request_sock *VAR_12;
 struct tcp_request_sock *VAR_13;
 struct tcp_sock *VAR_14 = FUNC_38(VAR_8);
 const struct tcphdr *VAR_15 = FUNC_34(VAR_9);
 __u32 VAR_16 = FUNC_22(VAR_15->ack_seq) - 1;
 struct sock *VAR_17 = VAR_8;
 struct request_sock *VAR_18;
 int VAR_19;
 struct rtable *VAR_20;
 __u8 VAR_21;
 struct flowi4 VAR_22;
 u32 VAR_23 = 0;

 if (!FUNC_31(VAR_8)->ipv4.sysctl_tcp_syncookies || !VAR_15->ack || VAR_15->rst)
  goto out;

 if (FUNC_39(VAR_8))
  goto out;

 VAR_19 = FUNC_6(FUNC_18(VAR_9), VAR_15, VAR_16);
 if (VAR_19 == 0) {
  FUNC_5(FUNC_31(VAR_8), VAR_2);
  goto out;
 }

 FUNC_5(FUNC_31(VAR_8), VAR_3);


 FUNC_20(&VAR_11, 0, sizeof(VAR_11));
 FUNC_35(FUNC_31(VAR_8), VAR_9, &VAR_11, 0, ((void*)0));

 if (VAR_11.saw_tstamp && VAR_11.rcv_tsecr) {
  VAR_23 = FUNC_26(FUNC_31(VAR_8),
       FUNC_18(VAR_9)->daddr,
       FUNC_18(VAR_9)->saddr);
  VAR_11.rcv_tsecr -= VAR_23;
 }

 if (!FUNC_8(FUNC_31(VAR_8), &VAR_11))
  goto out;

 VAR_17 = ((void*)0);
 VAR_18 = FUNC_12(&VAR_7, VAR_8, 0);
 if (!VAR_18)
  goto out;

 VAR_12 = FUNC_15(VAR_18);
 VAR_13 = FUNC_36(VAR_18);
 VAR_13->rcv_isn = FUNC_22(VAR_15->seq) - 1;
 VAR_13->snt_isn = VAR_16;
 VAR_13->ts_off = 0;
 VAR_13->txhash = FUNC_21();
 VAR_18->mss = VAR_19;
 VAR_12->ir_num = FUNC_23(VAR_15->dest);
 VAR_12->ir_rmt_port = VAR_15->source;
 FUNC_30(FUNC_24(VAR_18), FUNC_18(VAR_9)->daddr);
 FUNC_29(FUNC_24(VAR_18), FUNC_18(VAR_9)->saddr);
 VAR_12->ir_mark = FUNC_14(VAR_8, VAR_9);
 VAR_12->snd_wscale = VAR_11.snd_wscale;
 VAR_12->sack_ok = VAR_11.sack_ok;
 VAR_12->wscale_ok = VAR_11.wscale_ok;
 VAR_12->tstamp_ok = VAR_11.saw_tstamp;
 VAR_18->ts_recent = VAR_11.saw_tstamp ? VAR_11.rcv_tsval : 0;
 VAR_13->snt_synack = 0;
 VAR_13->tfo_listener = 0;
 if (FUNC_0(VAR_0))
  VAR_12->smc_ok = 0;

 VAR_12->ir_iif = FUNC_13(VAR_8, VAR_9);




 FUNC_2(VAR_12->ireq_opt, FUNC_40(FUNC_31(VAR_8), VAR_9));

 if (FUNC_27(VAR_8, VAR_9, VAR_18)) {
  FUNC_25(VAR_18);
  goto out;
 }

 VAR_18->num_retrans = 0;







 FUNC_10(&VAR_22, VAR_12->ir_iif, VAR_12->ir_mark,
      FUNC_3(VAR_8), VAR_6, VAR_1,
      FUNC_17(VAR_8),
      VAR_10->srr ? VAR_10->faddr : VAR_12->ir_rmt_addr,
      VAR_12->ir_loc_addr, VAR_15->source, VAR_15->dest, VAR_8->sk_uid);
 FUNC_28(VAR_18, FUNC_11(&VAR_22));
 VAR_20 = FUNC_19(FUNC_31(VAR_8), &VAR_22);
 if (FUNC_1(VAR_20)) {
  FUNC_25(VAR_18);
  goto out;
 }


 VAR_18->rsk_window_clamp = VAR_14->window_clamp ? :FUNC_9(&VAR_20->dst, VAR_5);

 FUNC_37(VAR_8, FUNC_32(VAR_8), VAR_18->mss,
      &VAR_18->rsk_rcv_wnd, &VAR_18->rsk_window_clamp,
      VAR_12->wscale_ok, &VAR_21,
      FUNC_9(&VAR_20->dst, VAR_4));

 VAR_12->rcv_wscale = VAR_21;
 VAR_12->ecn_ok = FUNC_7(&VAR_11, FUNC_31(VAR_8), &VAR_20->dst);

 VAR_17 = FUNC_33(VAR_8, VAR_9, VAR_18, &VAR_20->dst, VAR_23);



 if (VAR_17)
  FUNC_16(VAR_17)->cork.fl.u.ip4 = VAR_22;
out: return VAR_17;
}
