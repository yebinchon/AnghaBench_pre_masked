
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u64 ;
struct tcphdr {int syn; int ack; int doff; int hash_location; void* window; void* ack_seq; void* seq; int dest; void* source; } ;
struct tcp_sock {int dummy; } ;
struct tcp_out_options {int syn; int ack; int doff; int hash_location; void* window; void* ack_seq; void* seq; int dest; void* source; } ;
struct tcp_md5sig_key {int dummy; } ;
struct tcp_fastopen_cookie {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {void* skb_mstamp_ns; int ip_summed; int mark; scalar_t__ data; } ;
struct request_sock {int cookie_ts; int rsk_rcv_wnd; } ;
struct inet_request_sock {int ir_mark; int ir_rmt_port; int ir_num; } ;
struct dst_entry {int dummy; } ;
typedef int opts ;
typedef enum tcp_synack_type { ____Placeholder_tcp_synack_type } tcp_synack_type ;
typedef int __be32 ;
struct TYPE_4__ {TYPE_1__* af_specific; int rcv_nxt; int snt_isn; int txhash; scalar_t__ snt_synack; } ;
struct TYPE_3__ {int (* calc_md5_hash ) (int ,struct tcp_md5sig_key*,struct sock*,struct sk_buff*) ;struct tcp_md5sig_key* (* req_md5_lookup ) (struct sock const*,struct sock*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (int ,int ) ;
 struct sk_buff* FUNC_1 (int ,int ) ;
 void* FUNC_2 (struct request_sock*) ;
 int FUNC_3 (struct dst_entry*) ;
 int FUNC_4 (struct dst_entry*) ;
 void* FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;
 struct inet_request_sock* FUNC_7 (struct request_sock*) ;
 int FUNC_8 (struct tcphdr*,int ,int) ;
 int FUNC_9 (int ,unsigned int) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 struct sock* FUNC_12 (struct request_sock*) ;
 int FUNC_13 (struct sk_buff*,struct dst_entry*) ;
 int FUNC_14 (struct sk_buff*,int) ;
 int FUNC_15 (struct sk_buff*,int ) ;
 int FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*,int ,int ) ;
 int FUNC_18 (struct sk_buff*,struct sock*) ;
 int FUNC_19 (struct sock const*) ;
 struct tcp_md5sig_key* FUNC_20 (struct sock const*,struct sock*) ;
 int FUNC_21 (int ,struct tcp_md5sig_key*,struct sock*,struct sk_buff*) ;
 int FUNC_22 (struct sk_buff*,struct tcp_sock const*) ;
 void* FUNC_23 () ;
 int FUNC_24 (struct request_sock*,struct tcphdr*) ;
 int FUNC_25 (struct tcp_sock const*,int ) ;
 int FUNC_26 (int *,int *,struct tcphdr*) ;
 TYPE_2__* FUNC_27 (struct request_sock*) ;
 struct tcp_sock* FUNC_28 (struct sock const*) ;
 scalar_t__ FUNC_29 (struct sk_buff*) ;
 int FUNC_30 (struct sock const*,struct request_sock*,int,struct sk_buff*,struct tcphdr*,struct tcp_md5sig_key*,struct tcp_fastopen_cookie*) ;
 scalar_t__ FUNC_31 (int) ;

struct sk_buff *FUNC_32(const struct sock *VAR_5, struct dst_entry *VAR_6,
    struct request_sock *VAR_7,
    struct tcp_fastopen_cookie *VAR_8,
    enum tcp_synack_type VAR_9)
{
 struct inet_request_sock *VAR_10 = FUNC_7(VAR_7);
 const struct tcp_sock *VAR_11 = FUNC_28(VAR_5);
 struct tcp_md5sig_key *VAR_12 = ((void*)0);
 struct tcp_out_options VAR_13;
 struct sk_buff *VAR_14;
 int VAR_15;
 struct tcphdr *VAR_16;
 int VAR_17;
 u64 VAR_18;

 VAR_14 = FUNC_1(VAR_2, VAR_1);
 if (FUNC_31(!VAR_14)) {
  FUNC_4(VAR_6);
  return ((void*)0);
 }

 FUNC_15(VAR_14, VAR_2);

 switch (VAR_9) {
 case 128:
  FUNC_18(VAR_14, FUNC_12(VAR_7));
  break;
 case 130:



  break;
 case 129:




  FUNC_18(VAR_14, (struct sock *)VAR_5);
  break;
 }
 FUNC_13(VAR_14, VAR_6);

 VAR_17 = FUNC_25(VAR_11, FUNC_3(VAR_6));

 FUNC_8(&VAR_13, 0, sizeof(VAR_13));
 VAR_18 = FUNC_23();





 {
  VAR_14->skb_mstamp_ns = VAR_18;
  if (!FUNC_27(VAR_7)->snt_synack)
   FUNC_27(VAR_7)->snt_synack = FUNC_29(VAR_14);
 }





 FUNC_17(VAR_14, FUNC_27(VAR_7)->txhash, VAR_3);
 VAR_15 = FUNC_30(VAR_5, VAR_7, VAR_17, VAR_14, &VAR_13, VAR_12,
          VAR_8) + sizeof(*VAR_16);

 FUNC_14(VAR_14, VAR_15);
 FUNC_16(VAR_14);

 VAR_16 = (struct tcphdr *)VAR_14->data;
 FUNC_8(VAR_16, 0, sizeof(struct tcphdr));
 VAR_16->syn = 1;
 VAR_16->ack = 1;
 FUNC_24(VAR_7, VAR_16);
 VAR_16->source = FUNC_6(VAR_10->ir_num);
 VAR_16->dest = VAR_10->ir_rmt_port;
 VAR_14->mark = VAR_10->ir_mark;
 VAR_14->ip_summed = VAR_0;
 VAR_16->seq = FUNC_5(FUNC_27(VAR_7)->snt_isn);

 VAR_16->ack_seq = FUNC_5(FUNC_27(VAR_7)->rcv_nxt);


 VAR_16->window = FUNC_6(FUNC_9(VAR_7->rsk_rcv_wnd, 65535U));
 FUNC_26((__be32 *)(VAR_16 + 1), ((void*)0), &VAR_13);
 VAR_16->doff = (VAR_15 >> 2);
 FUNC_0(FUNC_19(VAR_5), VAR_4);
 VAR_14->skb_mstamp_ns = VAR_18;
 FUNC_22(VAR_14, VAR_11);

 return VAR_14;
}
