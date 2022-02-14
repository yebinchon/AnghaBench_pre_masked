
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct xfrm_userpolicy_id {int dir; scalar_t__ index; int sel; } ;
struct xfrm_user_sec_ctx {int dummy; } ;
struct xfrm_sec_ctx {int dummy; } ;
struct xfrm_policy {int dummy; } ;
struct xfrm_mark {int dummy; } ;
struct sk_buff {int sk; } ;
struct nlmsghdr {scalar_t__ nlmsg_type; int nlmsg_pid; int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct TYPE_4__ {int nlsk; } ;
struct net {TYPE_1__ xfrm; } ;
struct TYPE_5__ {scalar_t__ byid; } ;
struct km_event {scalar_t__ event; int portid; int seq; TYPE_2__ data; } ;
struct TYPE_6__ {int portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 TYPE_3__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,struct nlattr**) ;
 int FUNC_4 (struct xfrm_policy*,int ,struct km_event*) ;
 struct xfrm_user_sec_ctx* FUNC_5 (struct nlattr*) ;
 int FUNC_6 (struct nlattr*) ;
 struct xfrm_userpolicy_id* FUNC_7 (struct nlmsghdr*) ;
 int FUNC_8 (int ,struct sk_buff*,int ) ;
 int FUNC_9 (struct xfrm_sec_ctx**,struct xfrm_user_sec_ctx*,int ) ;
 int FUNC_10 (struct xfrm_sec_ctx*) ;
 struct net* FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct nlattr**) ;
 int FUNC_14 (struct xfrm_policy*,int,int) ;
 int FUNC_15 (struct nlattr**,struct xfrm_mark*) ;
 int FUNC_16 (struct xfrm_policy*) ;
 struct xfrm_policy* FUNC_17 (struct net*,int ,int ,int ,int ,scalar_t__,int,int*) ;
 struct xfrm_policy* FUNC_18 (struct net*,int ,int ,int ,int ,int *,struct xfrm_sec_ctx*,int,int*) ;
 struct sk_buff* FUNC_19 (struct sk_buff*,struct xfrm_policy*,int ,int ) ;

__attribute__((used)) static int FUNC_20(struct sk_buff *VAR_6, struct nlmsghdr *VAR_7,
  struct nlattr **VAR_8)
{
 struct net *VAR_9 = FUNC_11(VAR_6->sk);
 struct xfrm_policy *VAR_10;
 struct xfrm_userpolicy_id *VAR_11;
 u8 VAR_12 = VAR_5;
 int VAR_13;
 struct km_event VAR_14;
 int VAR_15;
 struct xfrm_mark VAR_16;
 u32 VAR_17 = FUNC_15(VAR_8, &VAR_16);
 u32 VAR_18 = 0;

 VAR_11 = FUNC_7(VAR_7);
 VAR_15 = VAR_7->nlmsg_type == VAR_4;

 VAR_13 = FUNC_3(&VAR_12, VAR_8);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_12(VAR_11->dir);
 if (VAR_13)
  return VAR_13;

 if (VAR_8[VAR_2])
  VAR_18 = FUNC_6(VAR_8[VAR_2]);

 if (VAR_11->index)
  VAR_10 = FUNC_17(VAR_9, VAR_17, VAR_18, VAR_12, VAR_11->dir, VAR_11->index, VAR_15, &VAR_13);
 else {
  struct nlattr *VAR_19 = VAR_8[VAR_3];
  struct xfrm_sec_ctx *VAR_20;

  VAR_13 = FUNC_13(VAR_8);
  if (VAR_13)
   return VAR_13;

  VAR_20 = ((void*)0);
  if (VAR_19) {
   struct xfrm_user_sec_ctx *VAR_21 = FUNC_5(VAR_19);

   VAR_13 = FUNC_9(&VAR_20, VAR_21, VAR_1);
   if (VAR_13)
    return VAR_13;
  }
  VAR_10 = FUNC_18(VAR_9, VAR_17, VAR_18, VAR_12, VAR_11->dir, &VAR_11->sel,
        VAR_20, VAR_15, &VAR_13);
  FUNC_10(VAR_20);
 }
 if (VAR_10 == ((void*)0))
  return -VAR_0;

 if (!VAR_15) {
  struct sk_buff *VAR_22;

  VAR_22 = FUNC_19(VAR_6, VAR_10, VAR_11->dir, VAR_7->nlmsg_seq);
  if (FUNC_0(VAR_22)) {
   VAR_13 = FUNC_2(VAR_22);
  } else {
   VAR_13 = FUNC_8(VAR_9->xfrm.nlsk, VAR_22,
         FUNC_1(VAR_6).portid);
  }
 } else {
  FUNC_14(VAR_10, VAR_13 ? 0 : 1, 1);

  if (VAR_13 != 0)
   goto out;

  VAR_14.data.byid = VAR_11->index;
  VAR_14.event = VAR_7->nlmsg_type;
  VAR_14.seq = VAR_7->nlmsg_seq;
  VAR_14.portid = VAR_7->nlmsg_pid;
  FUNC_4(VAR_10, VAR_11->dir, &VAR_14);
 }

out:
 FUNC_16(VAR_10);
 return VAR_13;
}
