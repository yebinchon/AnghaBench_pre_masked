
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {int protocol; int sk; } ;
struct rtmsg {int rtm_flags; int rtm_dst_len; int rtm_protocol; int rtm_scope; int rtm_type; int rtm_table; scalar_t__ rtm_src_len; int rtm_family; } ;
struct nlmsghdr {int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int ifindex; } ;
struct net {int dummy; } ;
struct mpls_shim_hdr {int dummy; } ;
struct mpls_route {int rt_protocol; } ;
struct mpls_nh {int nh_labels; scalar_t__ nh_via_table; int nh_dev; int nh_via_alen; int * nh_label; } ;
struct TYPE_2__ {int portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (int) ;
 struct sk_buff* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct mpls_route*) ;
 int FUNC_6 (struct sk_buff*,int ,int ,int ,int ,struct mpls_route*,int ) ;
 struct mpls_shim_hdr FUNC_7 (int ,int,int ,int) ;
 struct mpls_shim_hdr* FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct net*,int *,struct netlink_ext_ack*) ;
 int FUNC_10 (struct mpls_route*,struct mpls_nh*) ;
 struct mpls_route* FUNC_11 (struct net*,int ) ;
 struct mpls_nh* FUNC_12 (struct mpls_route*,struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*,struct nlmsghdr*,struct nlattr**,struct netlink_ext_ack*) ;
 scalar_t__ FUNC_14 (struct nlattr*,int,int*,int *,struct netlink_ext_ack*) ;
 scalar_t__ FUNC_15 (struct sk_buff*,size_t,int,int *) ;
 scalar_t__ FUNC_16 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_17 (struct sk_buff*,scalar_t__,int ,int ) ;
 int FUNC_18 (struct sk_buff*,struct nlmsghdr*) ;
 struct rtmsg* FUNC_19 (struct nlmsghdr*) ;
 int FUNC_20 (struct sk_buff*,struct nlmsghdr*) ;
 struct sk_buff* FUNC_21 (int ,int ) ;
 struct nlmsghdr* FUNC_22 (struct sk_buff*,int ,int ,int ,int,int ) ;
 struct net_device* FUNC_23 (int ) ;
 int FUNC_24 (struct sk_buff*,struct net*,int ) ;
 scalar_t__ FUNC_25 (struct sk_buff*,unsigned int) ;
 int FUNC_26 (struct sk_buff*,unsigned int) ;
 int FUNC_27 (struct sk_buff*,unsigned int) ;
 int FUNC_28 (struct sk_buff*,unsigned int) ;
 int FUNC_29 (struct sk_buff*) ;
 struct net* FUNC_30 (int ) ;

__attribute__((used)) static int FUNC_31(struct sk_buff *VAR_20, struct nlmsghdr *VAR_21,
    struct netlink_ext_ack *VAR_22)
{
 struct net *VAR_23 = FUNC_30(VAR_20->sk);
 u32 VAR_24 = FUNC_0(VAR_20).portid;
 u32 VAR_25 = VAR_7;
 struct nlattr *VAR_26[VAR_12 + 1];
 u32 VAR_27[VAR_8];
 struct mpls_shim_hdr *VAR_28;
 unsigned int VAR_29 = 0;
 struct net_device *VAR_30;
 struct mpls_route *VAR_31;
 struct rtmsg *VAR_32, *VAR_33;
 struct nlmsghdr *VAR_34;
 struct sk_buff *VAR_35;
 struct mpls_nh *VAR_36;
 u8 VAR_37;
 int VAR_38;

 VAR_38 = FUNC_13(VAR_20, VAR_21, VAR_26, VAR_22);
 if (VAR_38 < 0)
  goto errout;

 VAR_32 = FUNC_19(VAR_21);

 if (VAR_26[VAR_11]) {
  u8 VAR_39;

  if (FUNC_14(VAR_26[VAR_11], 1, &VAR_39,
       &VAR_25, VAR_22)) {
   VAR_38 = -VAR_1;
   goto errout;
  }

  if (!FUNC_9(VAR_23, &VAR_25, VAR_22)) {
   VAR_38 = -VAR_1;
   goto errout;
  }
 }

 VAR_31 = FUNC_11(VAR_23, VAR_25);
 if (!VAR_31) {
  VAR_38 = -VAR_3;
  goto errout;
 }

 if (VAR_32->rtm_flags & VAR_15) {
  VAR_35 = FUNC_21(FUNC_5(VAR_31), VAR_6);
  if (!VAR_35) {
   VAR_38 = -VAR_4;
   goto errout;
  }

  VAR_38 = FUNC_6(VAR_35, VAR_24, VAR_21->nlmsg_seq,
          VAR_16, VAR_25, VAR_31, 0);
  if (VAR_38 < 0) {

   FUNC_1(VAR_38 == -VAR_2);
   goto errout_free;
  }

  return FUNC_24(VAR_35, VAR_23, VAR_24);
 }

 if (VAR_26[VAR_13]) {
  if (FUNC_14(VAR_26[VAR_13], VAR_8, &VAR_37,
       VAR_27, VAR_22) != 0) {
   VAR_38 = -VAR_1;
   goto errout;
  }

  VAR_29 = VAR_37 * sizeof(struct mpls_shim_hdr);
 }

 VAR_35 = FUNC_2(VAR_10, VAR_6);
 if (!VAR_35) {
  VAR_38 = -VAR_4;
  goto errout;
 }

 VAR_35->protocol = FUNC_3(VAR_5);

 if (VAR_29) {
  bool VAR_40;
  int VAR_41;

  if (FUNC_25(VAR_35, VAR_29)) {
   VAR_38 = -VAR_4;
   goto errout_free;
  }

  FUNC_28(VAR_35, VAR_29);
  FUNC_27(VAR_35, VAR_29);
  FUNC_29(VAR_35);


  VAR_28 = FUNC_8(VAR_35);
  VAR_40 = 1;
  for (VAR_41 = VAR_37 - 1; VAR_41 >= 0; VAR_41--) {
   VAR_28[VAR_41] = FUNC_7(VAR_27[VAR_41],
         1, 0, VAR_40);
   VAR_40 = 0;
  }
 }

 VAR_36 = FUNC_12(VAR_31, VAR_35);
 if (!VAR_36) {
  VAR_38 = -VAR_3;
  goto errout_free;
 }

 if (VAR_29) {
  FUNC_26(VAR_35, VAR_29);
  FUNC_29(VAR_35);
 }

 VAR_34 = FUNC_22(VAR_35, VAR_24, VAR_21->nlmsg_seq,
   VAR_16, sizeof(*VAR_33), 0);
 if (!VAR_34) {
  VAR_38 = -VAR_2;
  goto errout_free;
 }

 VAR_33 = FUNC_19(VAR_34);
 VAR_33->rtm_family = VAR_0;
 VAR_33->rtm_dst_len = 20;
 VAR_33->rtm_src_len = 0;
 VAR_33->rtm_table = VAR_19;
 VAR_33->rtm_type = VAR_17;
 VAR_33->rtm_scope = VAR_18;
 VAR_33->rtm_protocol = VAR_31->rt_protocol;
 VAR_33->rtm_flags = 0;

 if (FUNC_15(VAR_35, VAR_11, 1, &VAR_25))
  goto nla_put_failure;

 if (VAR_36->nh_labels &&
     FUNC_15(VAR_35, VAR_13, VAR_36->nh_labels,
      VAR_36->nh_label))
  goto nla_put_failure;

 if (VAR_36->nh_via_table != VAR_9 &&
     FUNC_17(VAR_35, VAR_36->nh_via_table, FUNC_10(VAR_31, VAR_36),
   VAR_36->nh_via_alen))
  goto nla_put_failure;
 VAR_30 = FUNC_23(VAR_36->nh_dev);
 if (VAR_30 && FUNC_16(VAR_35, VAR_14, VAR_30->ifindex))
  goto nla_put_failure;

 FUNC_20(VAR_35, VAR_34);

 VAR_38 = FUNC_24(VAR_35, VAR_23, VAR_24);
errout:
 return VAR_38;

nla_put_failure:
 FUNC_18(VAR_35, VAR_34);
 VAR_38 = -VAR_2;
errout_free:
 FUNC_4(VAR_35);
 return VAR_38;
}
