
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {int mark; struct net_device* dev; int sk; } ;
struct rtmsg {int rtm_flags; int rtm_tos; } ;
struct TYPE_6__ {int error; } ;
struct rtable {int rt_type; int rt_flags; TYPE_2__ dst; } ;
struct nlmsghdr {int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct net {struct net_device* loopback_dev; } ;
struct flowi4 {int flowi4_mark; int flowi4_iif; int flowi4_tos; int flowi4_proto; void* fl4_dport; void* fl4_sport; int flowi4_uid; void* flowi4_oif; void* saddr; void* daddr; } ;
struct fib_result {size_t type; int fi; int prefixlen; int prefix; TYPE_1__* table; } ;
typedef int kuid_t ;
typedef void* __be32 ;
typedef void* __be16 ;
struct TYPE_8__ {int portid; } ;
struct TYPE_7__ {int error; } ;
struct TYPE_5__ {int tb_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct rtable*) ;
 int VAR_6 ;
 TYPE_4__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct rtable*) ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 struct net_device* FUNC_5 (struct net*,int) ;
 int FUNC_6 (struct sk_buff*,int ,int ,int ,int,int ,int ,int ,int ,int ,int ) ;
 TYPE_3__* VAR_23 ;
 struct sk_buff* FUNC_7 (void*,void*,int ,void*,void*) ;
 int FUNC_8 (struct sk_buff*,struct nlmsghdr*,struct nlattr**,struct netlink_ext_ack*) ;
 int FUNC_9 (struct sk_buff*,void*,void*,int ,struct net_device*,struct fib_result*) ;
 struct rtable* FUNC_10 (struct net*,struct flowi4*,struct fib_result*,struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (int ,void*) ;
 void* FUNC_13 (struct nlattr*) ;
 void* FUNC_14 (struct nlattr*) ;
 void* FUNC_15 (struct nlattr*) ;
 struct rtmsg* FUNC_16 (struct nlmsghdr*) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 (struct net*,void*,void*,struct rtable*,int,struct flowi4*,struct sk_buff*,int ,int ,int ) ;
 int FUNC_20 (struct nlattr*,int *,int ,struct netlink_ext_ack*) ;
 int FUNC_21 (struct sk_buff*,struct net*,int ) ;
 int FUNC_22 (struct sk_buff*,TYPE_2__*) ;
 int FUNC_23 (struct sk_buff*) ;
 int FUNC_24 (struct sk_buff*) ;
 int FUNC_25 (struct sk_buff*) ;
 struct rtable* FUNC_26 (struct sk_buff*) ;
 int FUNC_27 (struct sk_buff*,int ) ;
 struct net* FUNC_28 (int ) ;

__attribute__((used)) static int FUNC_29(struct sk_buff *VAR_24, struct nlmsghdr *VAR_25,
        struct netlink_ext_ack *VAR_26)
{
 struct net *VAR_27 = FUNC_28(VAR_24->sk);
 struct nlattr *VAR_28[VAR_12+1];
 u32 VAR_29 = VAR_22;
 __be16 VAR_30 = 0, VAR_31 = 0;
 struct fib_result VAR_32 = {};
 u8 VAR_33 = VAR_5;
 struct rtable *VAR_34 = ((void*)0);
 struct sk_buff *VAR_35;
 struct rtmsg *VAR_36;
 struct flowi4 VAR_37 = {};
 __be32 VAR_38 = 0;
 __be32 VAR_39 = 0;
 kuid_t VAR_40;
 u32 VAR_41;
 int VAR_42;
 int VAR_43;

 VAR_42 = FUNC_8(VAR_24, VAR_25, VAR_28, VAR_26);
 if (VAR_42 < 0)
  return VAR_42;

 VAR_36 = FUNC_16(VAR_25);
 VAR_39 = VAR_28[VAR_15] ? FUNC_14(VAR_28[VAR_15]) : 0;
 VAR_38 = VAR_28[VAR_8] ? FUNC_14(VAR_28[VAR_8]) : 0;
 VAR_41 = VAR_28[VAR_9] ? FUNC_15(VAR_28[VAR_9]) : 0;
 VAR_43 = VAR_28[VAR_11] ? FUNC_15(VAR_28[VAR_11]) : 0;
 if (VAR_28[VAR_16])
  VAR_40 = FUNC_12(FUNC_4(), FUNC_15(VAR_28[VAR_16]));
 else
  VAR_40 = (VAR_41 ? VAR_4 : FUNC_3());

 if (VAR_28[VAR_10]) {
  VAR_42 = FUNC_20(VAR_28[VAR_10],
        &VAR_33, VAR_0, VAR_26);
  if (VAR_42)
   return VAR_42;
 }

 if (VAR_28[VAR_14])
  VAR_30 = FUNC_13(VAR_28[VAR_14]);

 if (VAR_28[VAR_7])
  VAR_31 = FUNC_13(VAR_28[VAR_7]);

 VAR_35 = FUNC_7(VAR_39, VAR_38, VAR_33, VAR_30, VAR_31);
 if (!VAR_35)
  return -VAR_2;

 VAR_37 = VAR_38;
 VAR_37 = VAR_39;
 VAR_37 = VAR_36->rtm_tos;
 VAR_37 = VAR_28[VAR_13] ? FUNC_15(VAR_28[VAR_13]) : 0;
 VAR_37 = VAR_43;
 VAR_37 = VAR_40;
 if (VAR_30)
  VAR_37 = VAR_30;
 if (VAR_31)
  VAR_37 = VAR_31;
 VAR_37 = VAR_33;

 FUNC_17();

 if (VAR_41) {
  struct net_device *VAR_44;

  VAR_44 = FUNC_5(VAR_27, VAR_41);
  if (!VAR_44) {
   VAR_42 = -VAR_3;
   goto errout_rcu;
  }

  VAR_37 = VAR_41;
  VAR_35->dev = VAR_44;
  VAR_35->mark = VAR_43;
  VAR_42 = FUNC_9(VAR_35, VAR_38, VAR_39, VAR_36->rtm_tos,
      VAR_44, &VAR_32);

  VAR_34 = FUNC_26(VAR_35);
  if (VAR_42 == 0 && VAR_34->dst.error)
   VAR_42 = -VAR_34->dst.error;
 } else {
  VAR_37 = VAR_6;
  VAR_35->dev = VAR_27->loopback_dev;
  VAR_34 = FUNC_10(VAR_27, &VAR_37, &VAR_32, VAR_35);
  VAR_42 = 0;
  if (FUNC_0(VAR_34))
   VAR_42 = FUNC_2(VAR_34);
  else
   FUNC_22(VAR_35, &VAR_34->dst);
 }

 if (VAR_42)
  goto errout_rcu;

 if (VAR_36->rtm_flags & VAR_20)
  VAR_34->rt_flags |= VAR_17;

 if (VAR_36->rtm_flags & VAR_19)
  VAR_29 = VAR_32.table ? VAR_32.table->tb_id : 0;


 FUNC_27(VAR_35, 0);
 FUNC_24(VAR_35);
 FUNC_25(VAR_35);
 FUNC_23(VAR_35);

 if (VAR_36->rtm_flags & VAR_18) {
  if (!VAR_32.fi) {
   VAR_42 = VAR_23[VAR_32.type].error;
   if (!VAR_42)
    VAR_42 = -VAR_1;
   goto errout_rcu;
  }
  VAR_42 = FUNC_6(VAR_35, FUNC_1(VAR_24).portid,
        VAR_25->nlmsg_seq, VAR_21, VAR_29,
        VAR_34->rt_type, VAR_32.prefix, VAR_32.prefixlen,
        VAR_37, VAR_32.fi, 0);
 } else {
  VAR_42 = FUNC_19(VAR_27, VAR_38, VAR_39, VAR_34, VAR_29, &VAR_37, VAR_35,
       FUNC_1(VAR_24).portid,
       VAR_25->nlmsg_seq, 0);
 }
 if (VAR_42 < 0)
  goto errout_rcu;

 FUNC_18();

 VAR_42 = FUNC_21(VAR_35, VAR_27, FUNC_1(VAR_24).portid);

errout_free:
 return VAR_42;
errout_rcu:
 FUNC_18();
 FUNC_11(VAR_35);
 goto errout_free;
}
