
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct rtvia {int* rtvia_addr; scalar_t__ rtvia_family; } ;
struct rtmsg {int rtm_dst_len; int rtm_src_len; int rtm_table; int rtm_flags; int rtm_protocol; int rtm_scope; int rtm_type; int rtm_tos; scalar_t__ rtm_family; } ;
struct TYPE_6__ {int tclassid; unsigned long expires; int error; TYPE_1__* dev; } ;
struct rtable {int rt_flags; scalar_t__ rt_gw_family; scalar_t__ rt_gw4; int rt_pmtu; TYPE_2__ dst; scalar_t__ rt_mtu_locked; int rt_gw6; scalar_t__ rt_uses_gateway; int rt_type; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct in6_addr {int dummy; } ;
struct flowi4 {scalar_t__ saddr; int flowi4_mark; int flowi4_iif; int daddr; int flowi4_uid; int flowi4_tos; } ;
typedef int metrics ;
typedef scalar_t__ __be32 ;
struct TYPE_7__ {int flags; } ;
struct TYPE_5__ {int ifindex; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_1 (struct sk_buff*) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct net*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_3 () ;
 int * FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct net*,struct sk_buff*,scalar_t__,int ,struct rtmsg*,int) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 unsigned long VAR_28 ;
 int FUNC_9 (int*,int *,int) ;
 struct rtvia* FUNC_10 (struct nlattr*) ;
 scalar_t__ FUNC_11 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_12 (struct sk_buff*,int ,int) ;
 struct nlattr* FUNC_13 (struct sk_buff*,int ,int) ;
 int FUNC_14 (struct sk_buff*,struct nlmsghdr*) ;
 struct rtmsg* FUNC_15 (struct nlmsghdr*) ;
 int FUNC_16 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_17 (struct sk_buff*,int,int,int ,int,unsigned int) ;
 scalar_t__ FUNC_18 (struct rtable*) ;
 scalar_t__ FUNC_19 (struct sk_buff*,int*) ;
 scalar_t__ FUNC_20 (struct sk_buff*,TYPE_2__*,int ,unsigned long,int) ;
 scalar_t__ FUNC_21 (unsigned long,unsigned long) ;
 int FUNC_22 (int ,int ) ;

__attribute__((used)) static int FUNC_23(struct net *VAR_29, __be32 VAR_30, __be32 VAR_31,
   struct rtable *VAR_32, u32 VAR_33, struct flowi4 *VAR_34,
   struct sk_buff *VAR_35, u32 VAR_36, u32 VAR_37,
   unsigned int VAR_38)
{
 struct rtmsg *VAR_39;
 struct nlmsghdr *VAR_40;
 unsigned long VAR_41 = 0;
 u32 VAR_42;
 u32 VAR_43[VAR_7];

 VAR_40 = FUNC_17(VAR_35, VAR_36, VAR_37, VAR_24, sizeof(*VAR_39), VAR_38);
 if (!VAR_40)
  return -VAR_2;

 VAR_39 = FUNC_15(VAR_40);
 VAR_39->rtm_family = VAR_0;
 VAR_39->rtm_dst_len = 32;
 VAR_39->rtm_src_len = 0;
 VAR_39->rtm_tos = VAR_34 ? VAR_34->flowi4_tos : 0;
 VAR_39->rtm_table = VAR_33 < 256 ? VAR_33 : VAR_27;
 if (FUNC_12(VAR_35, VAR_17, VAR_33))
  goto nla_put_failure;
 VAR_39->rtm_type = VAR_32->rt_type;
 VAR_39->rtm_scope = VAR_26;
 VAR_39->rtm_protocol = VAR_25;
 VAR_39->rtm_flags = (VAR_32->rt_flags & ~0xFFFF) | VAR_22;
 if (VAR_32->rt_flags & VAR_21)
  VAR_39->rtm_flags |= VAR_23;
 if (FUNC_1(VAR_35)->flags & VAR_4)
  VAR_39->rtm_flags |= VAR_20;

 if (FUNC_11(VAR_35, VAR_9, VAR_30))
  goto nla_put_failure;
 if (VAR_31) {
  VAR_39->rtm_src_len = 32;
  if (FUNC_11(VAR_35, VAR_16, VAR_31))
   goto nla_put_failure;
 }
 if (VAR_32->dst.dev &&
     FUNC_12(VAR_35, VAR_14, VAR_32->dst.dev->ifindex))
  goto nla_put_failure;





 if (VAR_34 && !FUNC_18(VAR_32) &&
     VAR_34->saddr != VAR_31) {
  if (FUNC_11(VAR_35, VAR_15, VAR_34->saddr))
   goto nla_put_failure;
 }
 if (VAR_32->rt_uses_gateway) {
  if (VAR_32->rt_gw_family == VAR_0 &&
      FUNC_11(VAR_35, VAR_11, VAR_32->rt_gw4)) {
   goto nla_put_failure;
  } else if (VAR_32->rt_gw_family == VAR_1) {
   int VAR_44 = sizeof(struct in6_addr);
   struct nlattr *VAR_45;
   struct rtvia *VAR_46;

   VAR_45 = FUNC_13(VAR_35, VAR_19, VAR_44 + 2);
   if (!VAR_45)
    goto nla_put_failure;

   VAR_46 = FUNC_10(VAR_45);
   VAR_46->rtvia_family = VAR_1;
   FUNC_9(VAR_46->rtvia_addr, &VAR_32->rt_gw6, VAR_44);
  }
 }

 VAR_41 = VAR_32->dst.expires;
 if (VAR_41) {
  unsigned long VAR_47 = VAR_28;

  if (FUNC_21(VAR_47, VAR_41))
   VAR_41 -= VAR_47;
  else
   VAR_41 = 0;
 }

 FUNC_9(VAR_43, FUNC_4(&VAR_32->dst), sizeof(VAR_43));
 if (VAR_32->rt_pmtu && VAR_41)
  VAR_43[VAR_8 - 1] = VAR_32->rt_pmtu;
 if (VAR_32->rt_mtu_locked && VAR_41)
  VAR_43[VAR_6 - 1] |= FUNC_0(VAR_8);
 if (FUNC_19(VAR_35, VAR_43) < 0)
  goto nla_put_failure;

 if (VAR_34) {
  if (VAR_34->flowi4_mark &&
      FUNC_12(VAR_35, VAR_13, VAR_34->flowi4_mark))
   goto nla_put_failure;

  if (!FUNC_22(VAR_34->flowi4_uid, VAR_3) &&
      FUNC_12(VAR_35, VAR_18,
    FUNC_5(FUNC_3(),
       VAR_34->flowi4_uid)))
   goto nla_put_failure;

  if (FUNC_18(VAR_32)) {
    if (FUNC_12(VAR_35, VAR_12, VAR_34->flowi4_iif))
     goto nla_put_failure;
  }
 }

 VAR_42 = VAR_32->dst.error;

 if (FUNC_20(VAR_35, &VAR_32->dst, 0, VAR_41, VAR_42) < 0)
  goto nla_put_failure;

 FUNC_16(VAR_35, VAR_40);
 return 0;

nla_put_failure:
 FUNC_14(VAR_35, VAR_40);
 return -VAR_2;
}
