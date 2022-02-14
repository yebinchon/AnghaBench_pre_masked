
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {struct net_device* dev; int protocol; int sk; } ;
struct rtmsg {int rtm_flags; } ;
struct nlmsghdr {int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dn_ptr; } ;
struct net {int dummy; } ;
struct flowidn {void* flowidn_oif; void* daddr; void* dst; void* saddr; void* src; void* flowidn_iif; int flowidn_proto; } ;
struct dst_entry {int dummy; } ;
struct dn_skb_cb {void* flowidn_oif; void* daddr; void* dst; void* saddr; void* src; void* flowidn_iif; int flowidn_proto; } ;
struct TYPE_3__ {int error; } ;
struct dn_route {int rt_flags; TYPE_1__ dst; } ;
typedef int fld ;
struct TYPE_4__ {int portid; } ;


 int VAR_0 ;
 struct flowidn* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__ FUNC_1 (struct sk_buff*) ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct net_device* FUNC_2 (int *,void*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct dst_entry**,struct flowidn*,int ) ;
 int FUNC_5 (struct sk_buff*,int ,int ,int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int VAR_16 ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (struct flowidn*,int ,int) ;
 int FUNC_11 (struct net*,int *) ;
 void* FUNC_12 (struct nlattr*) ;
 void* FUNC_13 (struct nlattr*) ;
 struct rtmsg* FUNC_14 (struct nlmsghdr*) ;
 struct sk_buff* FUNC_15 (int ,int ) ;
 int FUNC_16 (struct nlmsghdr*,int,struct nlattr**,int ,int ,struct netlink_ext_ack*) ;
 int VAR_17 ;
 int FUNC_17 (struct sk_buff*,int *,int ) ;
 scalar_t__ FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct sk_buff*,TYPE_1__*) ;
 int FUNC_20 (struct sk_buff*) ;
 struct net* FUNC_21 (int ) ;

__attribute__((used)) static int FUNC_22(struct sk_buff *VAR_18, struct nlmsghdr *VAR_19,
        struct netlink_ext_ack *VAR_20)
{
 struct net *VAR_21 = FUNC_21(VAR_18->sk);
 struct rtmsg *VAR_22 = FUNC_14(VAR_19);
 struct dn_route *VAR_23 = ((void*)0);
 struct dn_skb_cb *VAR_24;
 int VAR_25;
 struct sk_buff *VAR_26;
 struct flowidn VAR_27;
 struct nlattr *VAR_28[VAR_10+1];

 if (!FUNC_11(VAR_21, &VAR_16))
  return -VAR_1;

 VAR_25 = FUNC_16(VAR_19, sizeof(*VAR_22), VAR_28, VAR_10,
         VAR_17, VAR_20);
 if (VAR_25 < 0)
  return VAR_25;

 FUNC_10(&VAR_27, 0, sizeof(VAR_27));
 VAR_27.flowidn_proto = VAR_0;

 VAR_26 = FUNC_15(VAR_7, VAR_6);
 if (VAR_26 == ((void*)0))
  return -VAR_3;
 FUNC_20(VAR_26);
 VAR_24 = FUNC_0(VAR_26);

 if (VAR_28[VAR_12])
  VAR_27.saddr = FUNC_12(VAR_28[VAR_12]);

 if (VAR_28[VAR_8])
  VAR_27.daddr = FUNC_12(VAR_28[VAR_8]);

 if (VAR_28[VAR_9])
  VAR_27.flowidn_iif = FUNC_13(VAR_28[VAR_9]);

 if (VAR_27.flowidn_iif) {
  struct net_device *VAR_29;
  VAR_29 = FUNC_2(&VAR_16, VAR_27.flowidn_iif);
  if (!VAR_29 || !VAR_29->dn_ptr) {
   FUNC_7(VAR_26);
   return -VAR_4;
  }
  VAR_26->protocol = FUNC_6(VAR_5);
  VAR_26->dev = VAR_29;
  VAR_24->src = VAR_27.saddr;
  VAR_24->dst = VAR_27.daddr;
  FUNC_8();
  VAR_25 = FUNC_3(VAR_26);
  FUNC_9();
  FUNC_10(VAR_24, 0, sizeof(struct dn_skb_cb));
  VAR_23 = (struct dn_route *)FUNC_18(VAR_26);
  if (!VAR_25 && -VAR_23->dst.error)
   VAR_25 = VAR_23->dst.error;
 } else {
  if (VAR_28[VAR_11])
   VAR_27.flowidn_oif = FUNC_13(VAR_28[VAR_11]);

  VAR_25 = FUNC_4((struct dst_entry **)&VAR_23, &VAR_27, 0);
 }

 VAR_26->dev = ((void*)0);
 if (VAR_25)
  goto out_free;
 FUNC_19(VAR_26, &VAR_23->dst);
 if (VAR_22->rtm_flags & VAR_14)
  VAR_23->rt_flags |= VAR_13;

 VAR_25 = FUNC_5(VAR_26, FUNC_1(VAR_18).portid, VAR_19->nlmsg_seq, VAR_15, 0, 0);
 if (VAR_25 < 0) {
  VAR_25 = -VAR_2;
  goto out_free;
 }

 return FUNC_17(VAR_26, &VAR_16, FUNC_1(VAR_18).portid);

out_free:
 FUNC_7(VAR_26);
 return VAR_25;
}
