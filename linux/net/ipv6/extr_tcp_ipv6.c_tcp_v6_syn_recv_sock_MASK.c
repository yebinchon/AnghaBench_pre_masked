
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef union tcp_md5_addr {int dummy; } tcp_md5_addr ;
struct tcp_sock {int advmss; int * af_specific; } ;
struct tcp_md5sig_key {int keylen; int key; } ;
typedef struct sock {int sk_v6_daddr; int sk_bound_dev_if; int sk_v6_rcv_saddr; int sk_gso_type; int sk_backlog_rcv; } const sock ;
struct sk_buff {scalar_t__ protocol; } ;
struct request_sock {int dummy; } ;
struct ipv6_txoptions {scalar_t__ opt_flen; scalar_t__ opt_nflen; } ;
struct TYPE_7__ {int all; } ;
struct ipv6_pinfo {int * pktoptions; int * opt; scalar_t__ flow_label; scalar_t__ repflow; scalar_t__ rcv_flowinfo; int mcast_hops; int mcast_oif; TYPE_1__ rxopt; int * ipv6_fl_list; int * ipv6_ac_list; int * ipv6_mc_list; int saddr; } ;
struct inet_sock {void* inet_rcv_saddr; void* inet_saddr; void* inet_daddr; int * inet_opt; void* pinet6; } ;
struct inet_request_sock {int * pktopts; struct ipv6_txoptions* ipv6_opt; int ir_iif; int ir_v6_loc_addr; int ir_v6_rmt_addr; } ;
struct flowi6 {int dummy; } ;
struct dst_entry {int dummy; } ;
struct TYPE_10__ {scalar_t__ icsk_ext_hdr_len; int icsk_pmtu_cookie; int * icsk_af_ops; } ;
struct TYPE_9__ {int ttl; } ;
struct TYPE_8__ {int hop_limit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (int *,struct ipv6_txoptions*) ;
 int VAR_6 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct sock const*,struct sock const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct dst_entry*) ;
 int FUNC_5 (struct dst_entry*) ;
 int FUNC_6 (struct dst_entry*) ;
 scalar_t__ FUNC_7 (int ) ;
 struct dst_entry* FUNC_8 (struct sock const*,struct flowi6*,struct request_sock*,int ) ;
 int FUNC_9 (struct sock const*,struct sk_buff*) ;
 TYPE_6__* FUNC_10 (struct sock const*) ;
 int FUNC_11 (struct sock const*) ;
 int FUNC_12 (struct sock const*,int ) ;
 int FUNC_13 (struct sk_buff*) ;
 struct inet_request_sock* FUNC_14 (struct request_sock*) ;
 struct inet_sock* FUNC_15 (struct sock const*) ;
 int FUNC_16 (struct sock const*,struct dst_entry*,int *,int *) ;
 scalar_t__ FUNC_17 (TYPE_2__*) ;
 scalar_t__ FUNC_18 (TYPE_2__*) ;
 TYPE_3__* FUNC_19 (struct sk_buff*) ;
 struct ipv6_txoptions* FUNC_20 (struct sock const*,struct ipv6_txoptions*) ;
 TYPE_2__* FUNC_21 (struct sk_buff*) ;
 int VAR_7 ;
 int FUNC_22 (struct ipv6_pinfo*,struct ipv6_pinfo const*,int) ;
 struct ipv6_txoptions* FUNC_23 (int *) ;
 int FUNC_24 (struct request_sock*) ;
 scalar_t__ FUNC_25 (struct sock const*) ;
 int FUNC_26 (struct sock const*,int ) ;
 int * FUNC_27 (int *,int ) ;
 int FUNC_28 (int *,struct sock const*) ;
 int FUNC_29 (struct sock const*) ;
 int FUNC_30 (struct sock const*,struct dst_entry*) ;
 struct sock const* FUNC_31 (struct sock const*,struct request_sock*,struct sk_buff*) ;
 int FUNC_32 (struct sock const*) ;
 void* FUNC_33 (struct sock const*) ;
 int FUNC_34 (struct sock const*) ;
 int FUNC_35 (struct sock const*) ;
 int FUNC_36 (struct sock const*,union tcp_md5_addr*,int ,int,int ,int ,int ) ;
 int FUNC_37 (struct tcp_sock*,struct request_sock*) ;
 int FUNC_38 (struct tcp_sock*,int ) ;
 struct tcp_sock* FUNC_39 (struct sock const*) ;
 int VAR_8 ;
 int FUNC_40 (struct sock const*,int ) ;
 int VAR_9 ;
 struct sock const* FUNC_41 (struct sock const*,struct sk_buff*,struct request_sock*,struct dst_entry*,struct request_sock*,int*) ;
 int FUNC_42 (struct sk_buff*) ;
 struct tcp_md5sig_key* FUNC_43 (struct sock const*,int *) ;
 int FUNC_44 (int *) ;

__attribute__((used)) static struct sock *FUNC_45(const struct sock *VAR_10, struct sk_buff *VAR_11,
      struct request_sock *VAR_12,
      struct dst_entry *VAR_13,
      struct request_sock *VAR_14,
      bool *VAR_15)
{
 struct inet_request_sock *VAR_16;
 struct ipv6_pinfo *VAR_17;
 const struct ipv6_pinfo *VAR_18 = FUNC_33(VAR_10);
 struct ipv6_txoptions *VAR_19;
 struct inet_sock *VAR_20;
 struct tcp_sock *VAR_21;
 struct sock *VAR_22;



 struct flowi6 VAR_23;

 if (VAR_11->protocol == FUNC_7(VAR_1)) {




  VAR_22 = FUNC_41(VAR_10, VAR_11, VAR_12, VAR_13,
          VAR_14, VAR_15);

  if (!VAR_22)
   return ((void*)0);

  FUNC_15(VAR_22)->pinet6 = FUNC_33(VAR_22);

  VAR_20 = FUNC_15(VAR_22);
  VAR_17 = FUNC_33(VAR_22);
  VAR_21 = FUNC_39(VAR_22);

  FUNC_22(VAR_17, VAR_18, sizeof(struct ipv6_pinfo));

  VAR_17->saddr = VAR_22->sk_v6_rcv_saddr;

  FUNC_10(VAR_22)->icsk_af_ops = &VAR_7;
  VAR_22->sk_backlog_rcv = VAR_9;




  VAR_17->ipv6_mc_list = ((void*)0);
  VAR_17->ipv6_ac_list = ((void*)0);
  VAR_17->ipv6_fl_list = ((void*)0);
  VAR_17->pktoptions = ((void*)0);
  VAR_17->opt = ((void*)0);
  VAR_17->mcast_oif = FUNC_13(VAR_11);
  VAR_17->mcast_hops = FUNC_19(VAR_11)->ttl;
  VAR_17->rcv_flowinfo = 0;
  if (VAR_18->repflow)
   VAR_17->flow_label = 0;
  FUNC_40(VAR_22, FUNC_10(VAR_22)->icsk_pmtu_cookie);

  return VAR_22;
 }

 VAR_16 = FUNC_14(VAR_12);

 if (FUNC_25(VAR_10))
  goto out_overflow;

 if (!VAR_13) {
  VAR_13 = FUNC_8(VAR_10, &VAR_23, VAR_12, VAR_3);
  if (!VAR_13)
   goto out;
 }

 VAR_22 = FUNC_31(VAR_10, VAR_12, VAR_11);
 if (!VAR_22)
  goto out_nonewsk;







 VAR_22->sk_gso_type = VAR_6;
 FUNC_16(VAR_22, VAR_13, ((void*)0), ((void*)0));
 FUNC_9(VAR_22, VAR_11);

 FUNC_15(VAR_22)->pinet6 = FUNC_33(VAR_22);

 VAR_21 = FUNC_39(VAR_22);
 VAR_20 = FUNC_15(VAR_22);
 VAR_17 = FUNC_33(VAR_22);

 FUNC_22(VAR_17, VAR_18, sizeof(struct ipv6_pinfo));

 VAR_22->sk_v6_daddr = VAR_16->ir_v6_rmt_addr;
 VAR_17->saddr = VAR_16->ir_v6_loc_addr;
 VAR_22->sk_v6_rcv_saddr = VAR_16->ir_v6_loc_addr;
 VAR_22->sk_bound_dev_if = VAR_16->ir_iif;





 VAR_20->inet_opt = ((void*)0);
 VAR_17->ipv6_mc_list = ((void*)0);
 VAR_17->ipv6_ac_list = ((void*)0);
 VAR_17->ipv6_fl_list = ((void*)0);


 VAR_17->rxopt.all = VAR_18->rxopt.all;

 VAR_17->pktoptions = ((void*)0);
 VAR_17->opt = ((void*)0);
 VAR_17->mcast_oif = FUNC_42(VAR_11);
 VAR_17->mcast_hops = FUNC_21(VAR_11)->hop_limit;
 VAR_17->rcv_flowinfo = FUNC_17(FUNC_21(VAR_11));
 if (VAR_18->repflow)
  VAR_17->flow_label = FUNC_18(FUNC_21(VAR_11));







 VAR_19 = VAR_16->ipv6_opt;
 if (!VAR_19)
  VAR_19 = FUNC_23(VAR_18->opt);
 if (VAR_19) {
  VAR_19 = FUNC_20(VAR_22, VAR_19);
  FUNC_0(VAR_17->opt, VAR_19);
 }
 FUNC_10(VAR_22)->icsk_ext_hdr_len = 0;
 if (VAR_19)
  FUNC_10(VAR_22)->icsk_ext_hdr_len = VAR_19->opt_nflen +
          VAR_19->opt_flen;

 FUNC_30(VAR_22, VAR_13);

 FUNC_40(VAR_22, FUNC_5(VAR_13));
 VAR_21->advmss = FUNC_38(FUNC_39(VAR_10), FUNC_4(VAR_13));

 FUNC_34(VAR_22);

 VAR_20->inet_daddr = VAR_20->inet_saddr = VAR_5;
 VAR_20->inet_rcv_saddr = VAR_5;
 if (FUNC_2(VAR_10, VAR_22) < 0) {
  FUNC_11(VAR_22);
  FUNC_32(VAR_22);
  goto out;
 }
 *VAR_15 = FUNC_12(VAR_22, FUNC_24(VAR_14));
 if (*VAR_15) {
  FUNC_37(VAR_21, VAR_12);


  if (VAR_16->pktopts) {
   VAR_17->pktoptions = FUNC_27(VAR_16->pktopts,
            FUNC_26(VAR_10, VAR_2));
   FUNC_3(VAR_16->pktopts);
   VAR_16->pktopts = ((void*)0);
   if (VAR_17->pktoptions) {
    FUNC_44(VAR_17->pktoptions);
    FUNC_28(VAR_17->pktoptions, VAR_22);
   }
  }
 }

 return VAR_22;

out_overflow:
 FUNC_1(FUNC_29(VAR_10), VAR_4);
out_nonewsk:
 FUNC_6(VAR_13);
out:
 FUNC_35(VAR_10);
 return ((void*)0);
}
