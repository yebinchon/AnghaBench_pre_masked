
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union tcp_cc_info {int idiag_tmem; int idiag_fmem; struct tcp_congestion_ops* idiag_wmem; int idiag_rmem; } ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct user_namespace {int dummy; } ;
struct tcp_congestion_ops {size_t (* get_info ) (struct sock*,int,int*,union tcp_cc_info*) ;int name; } ;
struct TYPE_2__ {scalar_t__ expires; } ;
struct sock {scalar_t__ sk_state; scalar_t__ sk_type; scalar_t__ sk_priority; int sk_cgrp_data; TYPE_1__ sk_timer; int sk_protocol; int sk_forward_alloc; int sk_wmem_queued; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_type; } ;
struct nlattr {int dummy; } ;
struct inet_diag_req_v2 {int idiag_ext; size_t sdiag_protocol; } ;
struct inet_diag_msg {scalar_t__ idiag_state; int idiag_timer; void* idiag_expires; scalar_t__ idiag_retrans; } ;
struct inet_diag_meminfo {int idiag_tmem; int idiag_fmem; struct tcp_congestion_ops* idiag_wmem; int idiag_rmem; } ;
struct inet_diag_handler {scalar_t__ (* idiag_get_aux ) (struct sock*,int,struct sk_buff*) ;int (* idiag_get_info ) (struct sock*,struct inet_diag_msg*,void*) ;scalar_t__ idiag_info_size; } ;
struct inet_connection_sock {scalar_t__ icsk_pending; int icsk_ca_ops; scalar_t__ icsk_probes_out; scalar_t__ icsk_timeout; scalar_t__ icsk_retransmits; } ;
typedef int minfo ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct tcp_congestion_ops* FUNC_1 (int ) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_2 (struct sock*,struct sk_buff*,struct inet_diag_msg*,int,struct user_namespace*,int) ;
 int FUNC_3 (struct inet_diag_msg*,struct sock*) ;
 struct inet_diag_handler** VAR_15 ;
 scalar_t__ VAR_16 ;
 void* FUNC_4 (scalar_t__) ;
 void* FUNC_5 (struct nlattr*) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int,size_t,union tcp_cc_info*) ;
 int FUNC_7 (struct sk_buff*,int,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int,scalar_t__) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ,int ) ;
 struct nlattr* FUNC_10 (struct sk_buff*,int,scalar_t__,int ) ;
 int FUNC_11 (struct sk_buff*,struct nlmsghdr*) ;
 struct inet_diag_msg* FUNC_12 (struct nlmsghdr*) ;
 int FUNC_13 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_14 (struct sk_buff*,scalar_t__,scalar_t__,int ,int,int ) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (struct sock*) ;
 int FUNC_18 (struct sock*) ;
 int FUNC_19 (struct sock*) ;
 scalar_t__ FUNC_20 (int *) ;
 scalar_t__ FUNC_21 (struct sock*,struct sk_buff*,int) ;
 int FUNC_22 (struct sock*,struct inet_diag_msg*,void*) ;
 int FUNC_23 (struct sock*,struct inet_diag_msg*,void*) ;
 scalar_t__ FUNC_24 (struct sock*,int,struct sk_buff*) ;
 size_t FUNC_25 (struct sock*,int,int*,union tcp_cc_info*) ;
 scalar_t__ FUNC_26 (TYPE_1__*) ;

int FUNC_27(struct sock *VAR_17, struct inet_connection_sock *VAR_18,
        struct sk_buff *VAR_19, const struct inet_diag_req_v2 *VAR_20,
        struct user_namespace *VAR_21,
        u32 VAR_22, u32 VAR_23, u16 VAR_24,
        const struct nlmsghdr *VAR_25,
        bool VAR_26)
{
 const struct tcp_congestion_ops *VAR_27;
 const struct inet_diag_handler *VAR_28;
 int VAR_29 = VAR_20->idiag_ext;
 struct inet_diag_msg *VAR_30;
 struct nlmsghdr *VAR_31;
 struct nlattr *VAR_32;
 void *VAR_33 = ((void*)0);

 VAR_28 = VAR_15[VAR_20->sdiag_protocol];
 FUNC_0(!VAR_28);

 VAR_31 = FUNC_14(VAR_19, VAR_22, VAR_23, VAR_25->nlmsg_type, sizeof(*VAR_30),
   VAR_24);
 if (!VAR_31)
  return -VAR_0;

 VAR_30 = FUNC_12(VAR_31);
 FUNC_0(!FUNC_17(VAR_17));

 FUNC_3(VAR_30, VAR_17);
 VAR_30->idiag_state = VAR_17->sk_state;
 VAR_30->idiag_timer = 0;
 VAR_30->idiag_retrans = 0;

 if (FUNC_2(VAR_17, VAR_19, VAR_30, VAR_29, VAR_21, VAR_26))
  goto errout;

 if (VAR_29 & (1 << (VAR_8 - 1))) {
  struct inet_diag_meminfo VAR_34 = {
   .idiag_rmem = FUNC_18(VAR_17),
   .idiag_wmem = FUNC_1(VAR_17->sk_wmem_queued),
   .idiag_fmem = VAR_17->sk_forward_alloc,
   .idiag_tmem = FUNC_19(VAR_17),
  };

  if (FUNC_6(VAR_19, VAR_8, sizeof(VAR_34), &VAR_34) < 0)
   goto errout;
 }

 if (VAR_29 & (1 << (VAR_11 - 1)))
  if (FUNC_21(VAR_17, VAR_19, VAR_11))
   goto errout;





 if (VAR_17->sk_type == VAR_13) {
  if (FUNC_9(VAR_19, VAR_10, VAR_17->sk_protocol))
   goto errout;
 }

 if (!VAR_18) {
  VAR_28->idiag_get_info(VAR_17, VAR_30, ((void*)0));
  goto out;
 }

 if (VAR_18->icsk_pending == VAR_4 ||
     VAR_18->icsk_pending == VAR_3 ||
     VAR_18->icsk_pending == VAR_1) {
  VAR_30->idiag_timer = 1;
  VAR_30->idiag_retrans = VAR_18->icsk_retransmits;
  VAR_30->idiag_expires =
   FUNC_4(VAR_18->icsk_timeout - VAR_16);
 } else if (VAR_18->icsk_pending == VAR_2) {
  VAR_30->idiag_timer = 4;
  VAR_30->idiag_retrans = VAR_18->icsk_probes_out;
  VAR_30->idiag_expires =
   FUNC_4(VAR_18->icsk_timeout - VAR_16);
 } else if (FUNC_26(&VAR_17->sk_timer)) {
  VAR_30->idiag_timer = 2;
  VAR_30->idiag_retrans = VAR_18->icsk_probes_out;
  VAR_30->idiag_expires =
   FUNC_4(VAR_17->sk_timer.expires - VAR_16);
 } else {
  VAR_30->idiag_timer = 0;
  VAR_30->idiag_expires = 0;
 }

 if ((VAR_29 & (1 << (VAR_7 - 1))) && VAR_28->idiag_info_size) {
  VAR_32 = FUNC_10(VAR_19, VAR_7,
      VAR_28->idiag_info_size,
      VAR_9);
  if (!VAR_32)
   goto errout;

  VAR_33 = FUNC_5(VAR_32);
 }

 if (VAR_29 & (1 << (VAR_6 - 1))) {
  int VAR_35 = 0;

  FUNC_15();
  VAR_27 = FUNC_1(VAR_18->icsk_ca_ops);
  if (VAR_27)
   VAR_35 = FUNC_7(VAR_19, VAR_6, VAR_27->name);
  FUNC_16();
  if (VAR_35 < 0)
   goto errout;
 }

 VAR_28->idiag_get_info(VAR_17, VAR_30, VAR_33);

 if (VAR_29 & (1 << (VAR_7 - 1)) && VAR_28->idiag_get_aux)
  if (VAR_28->idiag_get_aux(VAR_17, VAR_26, VAR_19) < 0)
   goto errout;

 if (VAR_17->sk_state < VAR_14) {
  union tcp_cc_info VAR_36;
  size_t VAR_37 = 0;
  int VAR_38;

  FUNC_15();
  VAR_27 = FUNC_1(VAR_18->icsk_ca_ops);
  if (VAR_27 && VAR_27->get_info)
   VAR_37 = VAR_27->get_info(VAR_17, VAR_29, &VAR_38, &VAR_36);
  FUNC_16();
  if (VAR_37 && FUNC_6(VAR_19, VAR_38, VAR_37, &VAR_36) < 0)
   goto errout;
 }

 if (VAR_29 & (1 << (VAR_5 - 1)) ||
     VAR_29 & (1 << (VAR_12 - 1))) {
  u32 VAR_39 = 0;
  if (!VAR_39)
   VAR_39 = VAR_17->sk_priority;

  if (FUNC_8(VAR_19, VAR_5, VAR_39))
   goto errout;
 }

out:
 FUNC_13(VAR_19, VAR_31);
 return 0;

errout:
 FUNC_11(VAR_19, VAR_31);
 return -VAR_0;
}
