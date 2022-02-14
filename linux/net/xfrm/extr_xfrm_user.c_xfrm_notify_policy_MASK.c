
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_userpolicy_info {int dummy; } ;
struct xfrm_userpolicy_id {int dir; int sel; int index; } ;
struct xfrm_user_tmpl {int dummy; } ;
struct xfrm_policy {int xfrm_nr; int if_id; int mark; int type; int selector; int index; } ;
struct xfrm_mark {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {scalar_t__ byid; } ;
struct km_event {TYPE_1__ data; int event; int seq; int portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct xfrm_policy*,struct xfrm_userpolicy_info*,int) ;
 int FUNC_2 (int ,struct sk_buff*) ;
 int FUNC_3 (struct xfrm_policy*,struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (struct xfrm_userpolicy_id*,int ,int) ;
 struct xfrm_userpolicy_info* FUNC_7 (struct nlattr*) ;
 struct nlattr* FUNC_8 (struct sk_buff*,int ,int) ;
 unsigned int FUNC_9 (int) ;
 void* FUNC_10 (struct nlmsghdr*) ;
 int FUNC_11 (struct sk_buff*,struct nlmsghdr*) ;
 struct sk_buff* FUNC_12 (unsigned int,int ) ;
 struct nlmsghdr* FUNC_13 (struct sk_buff*,int ,int ,int ,unsigned int,int ) ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 (struct sk_buff*,int ) ;
 int FUNC_16 (struct sk_buff*,int *) ;
 int FUNC_17 (struct net*,struct sk_buff*,int ,int ) ;
 struct net* FUNC_18 (struct xfrm_policy*) ;

__attribute__((used)) static int FUNC_19(struct xfrm_policy *VAR_6, int VAR_7, const struct km_event *VAR_8)
{
 unsigned int VAR_9 = FUNC_9(sizeof(struct xfrm_user_tmpl) * VAR_6->xfrm_nr);
 struct net *VAR_10 = FUNC_18(VAR_6);
 struct xfrm_userpolicy_info *VAR_11;
 struct xfrm_userpolicy_id *VAR_12;
 struct nlmsghdr *VAR_13;
 struct sk_buff *VAR_14;
 unsigned int VAR_15;
 int VAR_16;

 VAR_15 = sizeof(*VAR_11);
 if (VAR_8->event == VAR_5) {
  VAR_9 += FUNC_9(VAR_15);
  VAR_15 = sizeof(*VAR_12);
 }
 VAR_9 += FUNC_14();
 VAR_9 += FUNC_9(sizeof(struct xfrm_mark));
 VAR_9 += FUNC_0(VAR_15);

 VAR_14 = FUNC_12(VAR_9, VAR_2);
 if (VAR_14 == ((void*)0))
  return -VAR_1;

 VAR_13 = FUNC_13(VAR_14, VAR_8->portid, VAR_8->seq, VAR_8->event, VAR_15, 0);
 VAR_16 = -VAR_0;
 if (VAR_13 == ((void*)0))
  goto out_free_skb;

 VAR_11 = FUNC_10(VAR_13);
 if (VAR_8->event == VAR_5) {
  struct nlattr *VAR_17;

  VAR_12 = FUNC_10(VAR_13);
  FUNC_6(VAR_12, 0, sizeof(*VAR_12));
  VAR_12->dir = VAR_7;
  if (VAR_8->data.byid)
   VAR_12->index = VAR_6->index;
  else
   FUNC_5(&VAR_12->sel, &VAR_6->selector, sizeof(VAR_12->sel));

  VAR_17 = FUNC_8(VAR_14, VAR_3, sizeof(*VAR_11));
  VAR_16 = -VAR_0;
  if (VAR_17 == ((void*)0))
   goto out_free_skb;

  VAR_11 = FUNC_7(VAR_17);
 }

 FUNC_1(VAR_6, VAR_11, VAR_7);
 VAR_16 = FUNC_3(VAR_6, VAR_14);
 if (!VAR_16)
  VAR_16 = FUNC_2(VAR_6->type, VAR_14);
 if (!VAR_16)
  VAR_16 = FUNC_16(VAR_14, &VAR_6->mark);
 if (!VAR_16)
  VAR_16 = FUNC_15(VAR_14, VAR_6->if_id);
 if (VAR_16)
  goto out_free_skb;

 FUNC_11(VAR_14, VAR_13);

 return FUNC_17(VAR_10, VAR_14, 0, VAR_4);

out_free_skb:
 FUNC_4(VAR_14);
 return VAR_16;
}
