
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sock {int sk_bound_dev_if; } ;
struct sk_buff {scalar_t__ protocol; int users; } ;
struct request_sock {int dummy; } ;
struct TYPE_5__ {scalar_t__ rxohlim; scalar_t__ rxhlim; scalar_t__ rxoinfo; scalar_t__ rxinfo; } ;
struct TYPE_6__ {TYPE_1__ bits; } ;
struct ipv6_pinfo {TYPE_2__ rxopt; } ;
struct inet_request_sock {int ir_iif; int ir_v6_rmt_addr; struct sk_buff* pktopts; int ir_mark; int ireq_family; int ir_v6_loc_addr; } ;
struct dccp_skb_cb {int dccpd_seq; int dccpd_reset_code; } ;
struct dccp_request_sock {int dreq_service; int dreq_iss; int dreq_gss; int dreq_isr; int dreq_gsr; } ;
typedef int __be32 ;
struct TYPE_8__ {int dccph_req_service; } ;
struct TYPE_7__ {int daddr; int saddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dccp_skb_cb* FUNC_0 (struct sk_buff*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct sk_buff*) ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (struct sock*,int const) ;
 TYPE_4__* FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sock*,struct dccp_request_sock*,struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct request_sock*,int ,struct sk_buff*) ;
 struct dccp_request_sock* FUNC_7 (struct request_sock*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*,struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (struct sock*,struct request_sock*) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (struct sk_buff*) ;
 struct ipv6_pinfo* FUNC_14 (struct sock*) ;
 int FUNC_15 (struct sock*,struct request_sock*,int ) ;
 scalar_t__ FUNC_16 (struct sock*) ;
 struct request_sock* FUNC_17 (int *,struct sock*,int) ;
 int FUNC_18 (struct sock*,struct sk_buff*) ;
 struct inet_request_sock* FUNC_19 (struct request_sock*) ;
 int FUNC_20 (int *) ;
 TYPE_3__* FUNC_21 (struct sk_buff*) ;
 scalar_t__ FUNC_22 (struct sock*,struct sk_buff*,int ) ;
 int FUNC_23 (struct sk_buff*) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (struct request_sock*) ;
 int FUNC_26 (struct request_sock*) ;
 scalar_t__ FUNC_27 (struct sock*,struct sk_buff*,struct request_sock*) ;
 scalar_t__ FUNC_28 (struct sock*) ;

__attribute__((used)) static int FUNC_29(struct sock *VAR_8, struct sk_buff *VAR_9)
{
 struct request_sock *VAR_10;
 struct dccp_request_sock *VAR_11;
 struct inet_request_sock *VAR_12;
 struct ipv6_pinfo *VAR_13 = FUNC_14(VAR_8);
 const __be32 VAR_14 = FUNC_4(VAR_9)->dccph_req_service;
 struct dccp_skb_cb *VAR_15 = FUNC_0(VAR_9);

 if (VAR_9->protocol == FUNC_12(VAR_5))
  return FUNC_9(VAR_8, VAR_9);

 if (!FUNC_23(VAR_9))
  return 0;

 if (FUNC_3(VAR_8, VAR_14)) {
  VAR_15->dccpd_reset_code = VAR_2;
  goto drop;
 }



 VAR_15->dccpd_reset_code = VAR_3;
 if (FUNC_16(VAR_8))
  goto drop;

 if (FUNC_28(VAR_8))
  goto drop;

 VAR_10 = FUNC_17(&VAR_7, VAR_8, 1);
 if (VAR_10 == ((void*)0))
  goto drop;

 if (FUNC_6(VAR_10, FUNC_8(VAR_8), VAR_9))
  goto drop_and_free;

 VAR_11 = FUNC_7(VAR_10);
 if (FUNC_5(VAR_8, VAR_11, VAR_9))
  goto drop_and_free;

 if (FUNC_27(VAR_8, VAR_9, VAR_10))
  goto drop_and_free;

 VAR_12 = FUNC_19(VAR_10);
 VAR_12->ir_v6_rmt_addr = FUNC_21(VAR_9)->saddr;
 VAR_12->ir_v6_loc_addr = FUNC_21(VAR_9)->daddr;
 VAR_12->ireq_family = VAR_0;
 VAR_12->ir_mark = FUNC_18(VAR_8, VAR_9);

 if (FUNC_22(VAR_8, VAR_9, FUNC_1(VAR_9)) ||
     VAR_13->rxopt.bits.rxinfo || VAR_13->rxopt.bits.rxoinfo ||
     VAR_13->rxopt.bits.rxhlim || VAR_13->rxopt.bits.rxohlim) {
  FUNC_24(&VAR_9->users);
  VAR_12->pktopts = VAR_9;
 }
 VAR_12->ir_iif = VAR_8->sk_bound_dev_if;


 if (!VAR_8->sk_bound_dev_if &&
     FUNC_20(&VAR_12->ir_v6_rmt_addr) & VAR_6)
  VAR_12->ir_iif = FUNC_13(VAR_9);
 VAR_11->dreq_isr = VAR_15->dccpd_seq;
 VAR_11->dreq_gsr = VAR_11->dreq_isr;
 VAR_11->dreq_iss = FUNC_10(VAR_9);
 VAR_11->dreq_gss = VAR_11->dreq_iss;
 VAR_11->dreq_service = VAR_14;

 if (FUNC_11(VAR_8, VAR_10))
  goto drop_and_free;

 FUNC_15(VAR_8, VAR_10, VAR_4);
 FUNC_26(VAR_10);
 return 0;

drop_and_free:
 FUNC_25(VAR_10);
drop:
 FUNC_2(VAR_1);
 return -1;
}
