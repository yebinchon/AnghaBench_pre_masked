
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct user_namespace {int dummy; } ;
struct TYPE_9__ {int len; } ;
struct sock {int sk_rcvbuf; int sk_sndbuf; int sk_forward_alloc; int sk_wmem_queued; int sk_drops; TYPE_2__ sk_backlog; int sk_omem_alloc; int sk_state; } ;
struct sk_buff {int dummy; } ;
struct sctp_infox {struct sctp_association* asoc; struct sctp_info* sctpinfo; } ;
struct sctp_info {int dummy; } ;
struct list_head {int dummy; } ;
struct TYPE_12__ {struct list_head address_list; } ;
struct TYPE_13__ {TYPE_5__ bind_addr; } ;
struct sctp_endpoint {TYPE_6__ base; } ;
struct TYPE_10__ {struct list_head address_list; } ;
struct TYPE_11__ {TYPE_3__ bind_addr; } ;
struct sctp_association {int sndbuf_used; TYPE_4__ base; int rmem_alloc; TYPE_1__* ep; } ;
struct nlmsghdr {int nlmsg_type; } ;
struct nlattr {int dummy; } ;
struct inet_diag_req_v2 {int idiag_ext; } ;
struct inet_diag_msg {scalar_t__ idiag_retrans; scalar_t__ idiag_timer; int idiag_state; } ;
typedef int mem ;
struct TYPE_14__ {struct sctp_endpoint* ep; } ;
struct TYPE_8__ {scalar_t__ rcvbuf_policy; scalar_t__ sndbuf_policy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 void* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct sock*,struct sk_buff*,struct inet_diag_msg*,int,struct user_namespace*,int) ;
 int FUNC_4 (struct inet_diag_msg*,struct sock*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,struct sctp_association*) ;
 int FUNC_6 (struct inet_diag_msg*,struct sock*,struct sctp_association*) ;
 scalar_t__ FUNC_7 (struct sk_buff*,struct list_head*) ;
 void* FUNC_8 (struct nlattr*) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int,int,int**) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int,char*) ;
 struct nlattr* FUNC_11 (struct sk_buff*,int,int,int ) ;
 int FUNC_12 (struct sk_buff*,struct nlmsghdr*) ;
 struct inet_diag_msg* FUNC_13 (struct nlmsghdr*) ;
 int FUNC_14 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_15 (struct sk_buff*,int,int,int ,int,int ) ;
 int FUNC_16 (struct sock*,struct inet_diag_msg*,struct sctp_infox*) ;
 TYPE_7__* FUNC_17 (struct sock*) ;
 int FUNC_18 (struct sock*) ;
 int FUNC_19 (struct sock*) ;
 int FUNC_20 (struct sock*) ;

__attribute__((used)) static int FUNC_21(struct sock *VAR_15, struct sctp_association *VAR_16,
          struct sk_buff *VAR_17,
          const struct inet_diag_req_v2 *VAR_18,
          struct user_namespace *VAR_19,
          int VAR_20, u32 VAR_21, u16 VAR_22,
          const struct nlmsghdr *VAR_23,
          bool VAR_24)
{
 struct sctp_endpoint *VAR_25 = FUNC_17(VAR_15)->ep;
 struct list_head *VAR_26;
 struct inet_diag_msg *VAR_27;
 struct nlmsghdr *VAR_28;
 int VAR_29 = VAR_18->idiag_ext;
 struct sctp_infox VAR_30;
 void *VAR_31 = ((void*)0);

 VAR_28 = FUNC_15(VAR_17, VAR_20, VAR_21, VAR_23->nlmsg_type, sizeof(*VAR_27),
   VAR_22);
 if (!VAR_28)
  return -VAR_0;

 VAR_27 = FUNC_13(VAR_28);
 FUNC_0(!FUNC_18(VAR_15));

 if (VAR_16) {
  FUNC_6(VAR_27, VAR_15, VAR_16);
 } else {
  FUNC_4(VAR_27, VAR_15);
  VAR_27->idiag_state = VAR_15->sk_state;
  VAR_27->idiag_timer = 0;
  VAR_27->idiag_retrans = 0;
 }

 if (FUNC_3(VAR_15, VAR_17, VAR_27, VAR_29, VAR_19, VAR_24))
  goto errout;

 if (VAR_29 & (1 << (VAR_4 - 1))) {
  u32 VAR_32[VAR_12];
  int VAR_33;

  if (VAR_16 && VAR_16->ep->sndbuf_policy)
   VAR_33 = VAR_16->sndbuf_used;
  else
   VAR_33 = FUNC_20(VAR_15);
  VAR_32[VAR_13] = VAR_33;
  if (VAR_16 && VAR_16->ep->rcvbuf_policy)
   VAR_33 = FUNC_2(&VAR_16->rmem_alloc);
  else
   VAR_33 = FUNC_19(VAR_15);
  VAR_32[VAR_10] = VAR_33;
  VAR_32[VAR_9] = VAR_15->sk_rcvbuf;
  VAR_32[VAR_11] = VAR_15->sk_sndbuf;
  VAR_32[VAR_7] = VAR_15->sk_forward_alloc;
  VAR_32[VAR_14] = VAR_15->sk_wmem_queued;
  VAR_32[VAR_8] = FUNC_2(&VAR_15->sk_omem_alloc);
  VAR_32[VAR_5] = FUNC_1(VAR_15->sk_backlog.len);
  VAR_32[VAR_6] = FUNC_2(&VAR_15->sk_drops);

  if (FUNC_9(VAR_17, VAR_4, sizeof(VAR_32), &VAR_32) < 0)
   goto errout;
 }

 if (VAR_29 & (1 << (VAR_2 - 1))) {
  struct nlattr *VAR_34;

  VAR_34 = FUNC_11(VAR_17, VAR_2,
      sizeof(struct sctp_info),
      VAR_3);
  if (!VAR_34)
   goto errout;

  VAR_31 = FUNC_8(VAR_34);
 }
 VAR_30.sctpinfo = (struct sctp_info *)VAR_31;
 VAR_30.asoc = VAR_16;
 FUNC_16(VAR_15, VAR_27, &VAR_30);

 VAR_26 = VAR_16 ? &VAR_16->base.bind_addr.address_list
    : &VAR_25->base.bind_addr.address_list;
 if (FUNC_7(VAR_17, VAR_26))
  goto errout;

 if (VAR_16 && (VAR_29 & (1 << (VAR_1 - 1))))
  if (FUNC_10(VAR_17, VAR_1, "reno") < 0)
   goto errout;

 if (VAR_16 && FUNC_5(VAR_17, VAR_16))
  goto errout;

 FUNC_14(VAR_17, VAR_28);
 return 0;

errout:
 FUNC_12(VAR_17, VAR_28);
 return -VAR_0;
}
