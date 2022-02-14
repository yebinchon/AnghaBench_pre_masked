
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_16__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef scalar_t__ u32 ;
typedef int tcp_opt ;
struct tcphdr {int seq; int dest; int source; scalar_t__ rst; int ack; int ack_seq; } ;
struct tcp_sock {scalar_t__ window_clamp; } ;
struct tcp_request_sock {int tfo_listener; int txhash; scalar_t__ ts_off; void* snt_isn; void* rcv_isn; scalar_t__ snt_synack; } ;
struct TYPE_21__ {int s6_addr32; } ;
struct TYPE_17__ {int s6_addr32; } ;
struct tcp_options_received {int flowi6_uid; int fl6_sport; int fl6_dport; int flowi6_mark; int flowi6_oif; TYPE_2__ saddr; TYPE_10__ daddr; int flowi6_proto; int rcv_tsval; scalar_t__ saw_tstamp; int wscale_ok; int sack_ok; int snd_wscale; scalar_t__ rcv_tsecr; } ;
struct sock {int sk_uid; int sk_bound_dev_if; } ;
struct sk_buff {int users; } ;
struct request_sock {int mss; int rsk_window_clamp; int rsk_rcv_wnd; int ts_recent; scalar_t__ num_retrans; } ;
struct TYPE_23__ {scalar_t__ rxohlim; scalar_t__ rxhlim; scalar_t__ rxoinfo; scalar_t__ rxinfo; } ;
struct TYPE_24__ {TYPE_4__ bits; } ;
struct ipv6_pinfo {int opt; TYPE_5__ rxopt; } ;
struct inet_request_sock {int ecn_ok; int rcv_wscale; int wscale_ok; int ir_rmt_port; int ir_mark; int ir_iif; TYPE_2__ ir_v6_loc_addr; TYPE_10__ ir_v6_rmt_addr; scalar_t__ smc_ok; scalar_t__ tstamp_ok; int sack_ok; int snd_wscale; struct sk_buff* pktopts; int ir_num; } ;
struct in6_addr {int dummy; } ;
struct flowi6 {int flowi6_uid; int fl6_sport; int fl6_dport; int flowi6_mark; int flowi6_oif; TYPE_2__ saddr; TYPE_10__ daddr; int flowi6_proto; int rcv_tsval; scalar_t__ saw_tstamp; int wscale_ok; int sack_ok; int snd_wscale; scalar_t__ rcv_tsecr; } ;
struct dst_entry {int dummy; } ;
typedef int fl6 ;
typedef int __u8 ;
typedef void* __u32 ;
struct TYPE_26__ {TYPE_2__ daddr; TYPE_10__ saddr; } ;
struct TYPE_20__ {int sysctl_tcp_syncookies; } ;
struct TYPE_25__ {TYPE_1__ ipv4; } ;
struct TYPE_22__ {int h6; } ;
struct TYPE_19__ {TYPE_3__ header; } ;
struct TYPE_18__ {int inet_sport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct dst_entry*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_16__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (TYPE_6__*,int ) ;
 int FUNC_4 (TYPE_9__*,struct tcphdr const*,void*) ;
 int FUNC_5 (struct tcp_options_received*,TYPE_6__*,struct dst_entry*) ;
 int FUNC_6 (TYPE_6__*,struct tcp_options_received*) ;
 int FUNC_7 (struct dst_entry*,int ) ;
 struct in6_addr* FUNC_8 (struct tcp_options_received*,int ,struct in6_addr*) ;
 int FUNC_9 (struct tcp_options_received*) ;
 struct ipv6_pinfo* FUNC_10 (struct sock*) ;
 struct request_sock* FUNC_11 (int *,struct sock*,int) ;
 int FUNC_12 (struct sock*,struct sk_buff*) ;
 int FUNC_13 (struct sock*,struct sk_buff*) ;
 struct inet_request_sock* FUNC_14 (struct request_sock*) ;
 TYPE_11__* FUNC_15 (struct sock*) ;
 struct dst_entry* FUNC_16 (struct sock*,struct tcp_options_received*,struct in6_addr*) ;
 int FUNC_17 (TYPE_10__*) ;
 TYPE_9__* FUNC_18 (struct sk_buff*) ;
 scalar_t__ FUNC_19 (struct sock*,struct sk_buff*,int *) ;
 int FUNC_20 (struct tcp_options_received*,int ,int) ;
 int FUNC_21 () ;
 void* FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (struct request_sock*) ;
 scalar_t__ FUNC_27 (TYPE_6__*,int ,int ) ;
 scalar_t__ FUNC_28 (struct sock*,struct sk_buff*,struct request_sock*) ;
 int FUNC_29 (struct request_sock*,int ) ;
 TYPE_6__* FUNC_30 (struct sock*) ;
 int VAR_7 ;
 int FUNC_31 (struct sock*) ;
 struct sock* FUNC_32 (struct sock*,struct sk_buff*,struct request_sock*,struct dst_entry*,scalar_t__) ;
 struct tcphdr* FUNC_33 (struct sk_buff*) ;
 int FUNC_34 (TYPE_6__*,struct sk_buff*,struct tcp_options_received*,int ,int *) ;
 struct tcp_request_sock* FUNC_35 (struct request_sock*) ;
 int FUNC_36 (struct sock*,int ,int,int *,int *,int ,int *,int ) ;
 struct tcp_sock* FUNC_37 (struct sock*) ;
 scalar_t__ FUNC_38 (struct sock*) ;
 int FUNC_39 (struct sk_buff*) ;

struct sock *FUNC_40(struct sock *VAR_8, struct sk_buff *VAR_9)
{
 struct tcp_options_received VAR_10;
 struct inet_request_sock *VAR_11;
 struct tcp_request_sock *VAR_12;
 struct ipv6_pinfo *VAR_13 = FUNC_10(VAR_8);
 struct tcp_sock *VAR_14 = FUNC_37(VAR_8);
 const struct tcphdr *VAR_15 = FUNC_33(VAR_9);
 __u32 VAR_16 = FUNC_22(VAR_15->ack_seq) - 1;
 struct sock *VAR_17 = VAR_8;
 struct request_sock *VAR_18;
 int VAR_19;
 struct dst_entry *VAR_20;
 __u8 VAR_21;
 u32 VAR_22 = 0;

 if (!FUNC_30(VAR_8)->ipv4.sysctl_tcp_syncookies || !VAR_15->ack || VAR_15->rst)
  goto out;

 if (FUNC_38(VAR_8))
  goto out;

 VAR_19 = FUNC_4(FUNC_18(VAR_9), VAR_15, VAR_16);
 if (VAR_19 == 0) {
  FUNC_3(FUNC_30(VAR_8), VAR_3);
  goto out;
 }

 FUNC_3(FUNC_30(VAR_8), VAR_4);


 FUNC_20(&VAR_10, 0, sizeof(VAR_10));
 FUNC_34(FUNC_30(VAR_8), VAR_9, &VAR_10, 0, ((void*)0));

 if (VAR_10.saw_tstamp && VAR_10.rcv_tsecr) {
  VAR_22 = FUNC_27(FUNC_30(VAR_8),
         FUNC_18(VAR_9)->daddr.s6_addr32,
         FUNC_18(VAR_9)->saddr.s6_addr32);
  VAR_10.rcv_tsecr -= VAR_22;
 }

 if (!FUNC_6(FUNC_30(VAR_8), &VAR_10))
  goto out;

 VAR_17 = ((void*)0);
 VAR_18 = FUNC_11(&VAR_7, VAR_8, 0);
 if (!VAR_18)
  goto out;

 VAR_11 = FUNC_14(VAR_18);
 VAR_12 = FUNC_35(VAR_18);
 VAR_12->tfo_listener = 0;

 if (FUNC_28(VAR_8, VAR_9, VAR_18))
  goto out_free;

 VAR_18->mss = VAR_19;
 VAR_11->ir_rmt_port = VAR_15->source;
 VAR_11->ir_num = FUNC_23(VAR_15->dest);
 VAR_11->ir_v6_rmt_addr = FUNC_18(VAR_9)->saddr;
 VAR_11->ir_v6_loc_addr = FUNC_18(VAR_9)->daddr;
 if (FUNC_19(VAR_8, VAR_9, &FUNC_2(VAR_9)->header.h6) ||
     VAR_13->rxopt.bits.rxinfo || VAR_13->rxopt.bits.rxoinfo ||
     VAR_13->rxopt.bits.rxhlim || VAR_13->rxopt.bits.rxohlim) {
  FUNC_25(&VAR_9->users);
  VAR_11->pktopts = VAR_9;
 }

 VAR_11->ir_iif = FUNC_12(VAR_8, VAR_9);

 if (!VAR_8->sk_bound_dev_if &&
     FUNC_17(&VAR_11->ir_v6_rmt_addr) & VAR_2)
  VAR_11->ir_iif = FUNC_39(VAR_9);

 VAR_11->ir_mark = FUNC_13(VAR_8, VAR_9);

 VAR_18->num_retrans = 0;
 VAR_11->snd_wscale = VAR_10.snd_wscale;
 VAR_11->sack_ok = VAR_10.sack_ok;
 VAR_11->wscale_ok = VAR_10.wscale_ok;
 VAR_11->tstamp_ok = VAR_10.saw_tstamp;
 VAR_18->ts_recent = VAR_10.saw_tstamp ? VAR_10.rcv_tsval : 0;
 VAR_12->snt_synack = 0;
 VAR_12->rcv_isn = FUNC_22(VAR_15->seq) - 1;
 VAR_12->snt_isn = VAR_16;
 VAR_12->ts_off = 0;
 VAR_12->txhash = FUNC_21();
 if (FUNC_0(VAR_0))
  VAR_11->smc_ok = 0;






 {
  struct in6_addr *VAR_23, VAR_24;
  struct flowi6 VAR_25;
  FUNC_20(&VAR_25, 0, sizeof(VAR_25));
  VAR_25 = VAR_1;
  VAR_25 = VAR_11->ir_v6_rmt_addr;
  VAR_23 = FUNC_8(&VAR_25, FUNC_24(VAR_13->opt), &VAR_24);
  VAR_25 = VAR_11->ir_v6_loc_addr;
  VAR_25 = VAR_11->ir_iif;
  VAR_25 = VAR_11->ir_mark;
  VAR_25 = VAR_11->ir_rmt_port;
  VAR_25 = FUNC_15(VAR_8)->inet_sport;
  VAR_25 = VAR_8->sk_uid;
  FUNC_29(VAR_18, FUNC_9(&VAR_25));

  VAR_20 = FUNC_16(VAR_8, &VAR_25, VAR_23);
  if (FUNC_1(VAR_20))
   goto out_free;
 }

 VAR_18->rsk_window_clamp = VAR_14->window_clamp ? :FUNC_7(VAR_20, VAR_6);
 FUNC_36(VAR_8, FUNC_31(VAR_8), VAR_18->mss,
      &VAR_18->rsk_rcv_wnd, &VAR_18->rsk_window_clamp,
      VAR_11->wscale_ok, &VAR_21,
      FUNC_7(VAR_20, VAR_5));

 VAR_11->rcv_wscale = VAR_21;
 VAR_11->ecn_ok = FUNC_5(&VAR_10, FUNC_30(VAR_8), VAR_20);

 VAR_17 = FUNC_32(VAR_8, VAR_9, VAR_18, VAR_20, VAR_22);
out:
 return VAR_17;
out_free:
 FUNC_26(VAR_18);
 return ((void*)0);
}
