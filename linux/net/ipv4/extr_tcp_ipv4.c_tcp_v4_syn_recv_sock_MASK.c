
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union tcp_md5_addr {int dummy; } tcp_md5_addr ;
struct tcp_sock {int advmss; } ;
struct tcp_md5sig_key {int keylen; int key; } ;
typedef struct sock {int sk_bound_dev_if; int sk_gso_type; } const sock ;
struct sk_buff {int dummy; } ;
struct request_sock {int dummy; } ;
struct TYPE_4__ {scalar_t__ optlen; } ;
struct ip_options_rcu {TYPE_1__ opt; } ;
struct inet_sock {int * inet_opt; int inet_daddr; int inet_id; int rcv_tos; int mc_ttl; int mc_index; int inet_saddr; } ;
struct inet_request_sock {int * ireq_opt; int ir_loc_addr; int ir_iif; int ir_rmt_addr; } ;
struct dst_entry {int dummy; } ;
struct TYPE_6__ {scalar_t__ icsk_ext_hdr_len; } ;
struct TYPE_5__ {int tos; int ttl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,struct ip_options_rcu*) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct sock const*,struct sock const*) ;
 int FUNC_3 (struct dst_entry*) ;
 int FUNC_4 (struct dst_entry*) ;
 int FUNC_5 (struct dst_entry*) ;
 TYPE_3__* FUNC_6 (struct sock const*) ;
 int FUNC_7 (struct sock const*) ;
 struct dst_entry* FUNC_8 (struct sock const*,struct sock const*,struct request_sock*) ;
 int FUNC_9 (struct sock const*,int ) ;
 int FUNC_10 (struct sk_buff*) ;
 struct inet_request_sock* FUNC_11 (struct request_sock*) ;
 struct inet_sock* FUNC_12 (struct sock const*) ;
 int FUNC_13 (struct sock const*,struct sk_buff*) ;
 TYPE_2__* FUNC_14 (struct sk_buff*) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 () ;
 struct ip_options_rcu* FUNC_17 (int *) ;
 int FUNC_18 (struct request_sock*) ;
 scalar_t__ FUNC_19 (struct sock const*) ;
 int FUNC_20 (struct sock const*,int ) ;
 int FUNC_21 (struct sock const*,int ) ;
 int FUNC_22 (struct sock const*,int ) ;
 int FUNC_23 (struct sock const*,struct dst_entry*) ;
 int FUNC_24 (struct sock const*) ;
 int FUNC_25 (struct sock const*,struct dst_entry*) ;
 struct sock const* FUNC_26 (struct sock const*,struct request_sock*,struct sk_buff*) ;
 int FUNC_27 (struct sock const*) ;
 int FUNC_28 (struct sock const*) ;
 int FUNC_29 (struct sock const*) ;
 int FUNC_30 (struct sock const*,union tcp_md5_addr*,int ,int,int ,int ,int ) ;
 struct tcp_md5sig_key* FUNC_31 (struct sock const*,union tcp_md5_addr*,int ) ;
 int FUNC_32 (struct tcp_sock*,struct request_sock*) ;
 int FUNC_33 (struct tcp_sock*,int ) ;
 struct tcp_sock* FUNC_34 (struct sock const*) ;
 int FUNC_35 (struct sock const*,int ) ;

struct sock *FUNC_36(const struct sock *VAR_5, struct sk_buff *VAR_6,
      struct request_sock *VAR_7,
      struct dst_entry *VAR_8,
      struct request_sock *VAR_9,
      bool *VAR_10)
{
 struct inet_request_sock *VAR_11;
 struct inet_sock *VAR_12;
 struct tcp_sock *VAR_13;
 struct sock *VAR_14;



 struct ip_options_rcu *VAR_15;

 if (FUNC_19(VAR_5))
  goto exit_overflow;

 VAR_14 = FUNC_26(VAR_5, VAR_7, VAR_6);
 if (!VAR_14)
  goto exit_nonewsk;

 VAR_14->sk_gso_type = VAR_4;
 FUNC_13(VAR_14, VAR_6);

 VAR_13 = FUNC_34(VAR_14);
 VAR_12 = FUNC_12(VAR_14);
 VAR_11 = FUNC_11(VAR_7);
 FUNC_20(VAR_14, VAR_11->ir_rmt_addr);
 FUNC_22(VAR_14, VAR_11->ir_loc_addr);
 VAR_14->sk_bound_dev_if = VAR_11->ir_iif;
 VAR_12->inet_saddr = VAR_11->ir_loc_addr;
 VAR_15 = FUNC_17(VAR_11->ireq_opt);
 FUNC_1(VAR_12->inet_opt, VAR_15);
 VAR_12->mc_index = FUNC_10(VAR_6);
 VAR_12->mc_ttl = FUNC_14(VAR_6)->ttl;
 VAR_12->rcv_tos = FUNC_14(VAR_6)->tos;
 FUNC_6(VAR_14)->icsk_ext_hdr_len = 0;
 if (VAR_15)
  FUNC_6(VAR_14)->icsk_ext_hdr_len = VAR_15->opt.optlen;
 VAR_12->inet_id = FUNC_16();

 if (!VAR_8) {
  VAR_8 = FUNC_8(VAR_5, VAR_14, VAR_7);
  if (!VAR_8)
   goto put_and_exit;
 } else {

 }
 FUNC_23(VAR_14, VAR_8);

 FUNC_25(VAR_14, VAR_8);

 FUNC_35(VAR_14, FUNC_4(VAR_8));
 VAR_13->advmss = FUNC_33(FUNC_34(VAR_5), FUNC_3(VAR_8));

 FUNC_28(VAR_14);
 if (FUNC_2(VAR_5, VAR_14) < 0)
  goto put_and_exit;
 *VAR_10 = FUNC_9(VAR_14, FUNC_18(VAR_9));
 if (FUNC_15(*VAR_10)) {
  FUNC_32(VAR_13, VAR_7);
  VAR_11->ireq_opt = ((void*)0);
 } else {
  VAR_12->inet_opt = ((void*)0);
 }
 return VAR_14;

exit_overflow:
 FUNC_0(FUNC_24(VAR_5), VAR_2);
exit_nonewsk:
 FUNC_5(VAR_8);
exit:
 FUNC_29(VAR_5);
 return ((void*)0);
put_and_exit:
 VAR_12->inet_opt = ((void*)0);
 FUNC_7(VAR_14);
 FUNC_27(VAR_14);
 goto exit;
}
