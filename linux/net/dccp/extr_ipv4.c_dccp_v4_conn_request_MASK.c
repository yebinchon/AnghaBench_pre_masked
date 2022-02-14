
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int sk_bound_dev_if; } ;
struct sk_buff {int dummy; } ;
struct request_sock {int dummy; } ;
struct inet_request_sock {int ir_iif; int ireq_family; int ir_mark; } ;
struct dccp_skb_cb {int dccpd_seq; int dccpd_reset_code; } ;
struct dccp_request_sock {int dreq_service; int dreq_iss; int dreq_gss; int dreq_isr; int dreq_gsr; } ;
typedef int __be32 ;
struct TYPE_6__ {int dccph_req_service; } ;
struct TYPE_5__ {int saddr; int daddr; } ;
struct TYPE_4__ {int rt_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dccp_skb_cb* FUNC_0 (struct sk_buff*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct sock*,int const) ;
 TYPE_3__* FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sock*,struct dccp_request_sock*,struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct request_sock*,int ,struct sk_buff*) ;
 int VAR_7 ;
 struct dccp_request_sock* FUNC_6 (struct request_sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (struct sock*,struct request_sock*) ;
 int FUNC_10 (struct sock*,struct request_sock*,int ) ;
 scalar_t__ FUNC_11 (struct sock*) ;
 struct request_sock* FUNC_12 (int *,struct sock*,int) ;
 int FUNC_13 (struct sock*,struct sk_buff*) ;
 struct inet_request_sock* FUNC_14 (struct request_sock*) ;
 TYPE_2__* FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct request_sock*) ;
 int FUNC_17 (struct request_sock*) ;
 int FUNC_18 (struct request_sock*) ;
 scalar_t__ FUNC_19 (struct sock*,struct sk_buff*,struct request_sock*) ;
 scalar_t__ FUNC_20 (struct sock*) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ,int ) ;
 TYPE_1__* FUNC_23 (struct sk_buff*) ;

int FUNC_24(struct sock *VAR_8, struct sk_buff *VAR_9)
{
 struct inet_request_sock *VAR_10;
 struct request_sock *VAR_11;
 struct dccp_request_sock *VAR_12;
 const __be32 VAR_13 = FUNC_3(VAR_9)->dccph_req_service;
 struct dccp_skb_cb *VAR_14 = FUNC_0(VAR_9);


 if (FUNC_23(VAR_9)->rt_flags & (VAR_5 | VAR_6))
  return 0;

 if (FUNC_2(VAR_8, VAR_13)) {
  VAR_14->dccpd_reset_code = VAR_2;
  goto drop;
 }





 VAR_14->dccpd_reset_code = VAR_3;
 if (FUNC_11(VAR_8))
  goto drop;

 if (FUNC_20(VAR_8))
  goto drop;

 VAR_11 = FUNC_12(&VAR_7, VAR_8, 1);
 if (VAR_11 == ((void*)0))
  goto drop;

 if (FUNC_5(VAR_11, FUNC_7(VAR_8), VAR_9))
  goto drop_and_free;

 VAR_12 = FUNC_6(VAR_11);
 if (FUNC_4(VAR_8, VAR_12, VAR_9))
  goto drop_and_free;

 if (FUNC_19(VAR_8, VAR_9, VAR_11))
  goto drop_and_free;

 VAR_10 = FUNC_14(VAR_11);
 FUNC_22(FUNC_16(VAR_11), FUNC_15(VAR_9)->daddr);
 FUNC_21(FUNC_16(VAR_11), FUNC_15(VAR_9)->saddr);
 VAR_10->ir_mark = FUNC_13(VAR_8, VAR_9);
 VAR_10->ireq_family = VAR_0;
 VAR_10->ir_iif = VAR_8->sk_bound_dev_if;
 VAR_12->dreq_isr = VAR_14->dccpd_seq;
 VAR_12->dreq_gsr = VAR_12->dreq_isr;
 VAR_12->dreq_iss = FUNC_8(VAR_9);
 VAR_12->dreq_gss = VAR_12->dreq_iss;
 VAR_12->dreq_service = VAR_13;

 if (FUNC_9(VAR_8, VAR_11))
  goto drop_and_free;

 FUNC_10(VAR_8, VAR_11, VAR_4);
 FUNC_18(VAR_11);
 return 0;

drop_and_free:
 FUNC_17(VAR_11);
drop:
 FUNC_1(VAR_1);
 return -1;
}
