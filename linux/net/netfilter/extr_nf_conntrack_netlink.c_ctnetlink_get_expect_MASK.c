
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_flags; int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct nfgenmsg {int nfgen_family; } ;
struct nf_conntrack_zone {int dummy; } ;
struct nf_conntrack_tuple {int dummy; } ;
struct nf_conntrack_expect {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct netlink_dump_control {int done; int dump; } ;
struct net {int dummy; } ;
typedef scalar_t__ __be32 ;
struct TYPE_2__ {int portid; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct net*,struct sock*,struct sk_buff*,struct nlmsghdr const*,struct nlattr const* const*,struct netlink_ext_ack*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (struct sk_buff*,int ,int ,int ,struct nf_conntrack_expect*) ;
 int FUNC_3 (struct nlattr const* const*,struct nf_conntrack_tuple*,size_t,int ,int *) ;
 int FUNC_4 (struct nlattr const* const,struct nf_conntrack_zone*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sock*,struct sk_buff*,struct nlmsghdr const*,struct netlink_dump_control*) ;
 int FUNC_7 (struct sock*,struct sk_buff*,int ,int ) ;
 struct nf_conntrack_expect* FUNC_8 (struct net*,struct nf_conntrack_zone*,struct nf_conntrack_tuple*) ;
 int FUNC_9 (struct nf_conntrack_expect*) ;
 scalar_t__ FUNC_10 (struct nf_conntrack_expect*) ;
 scalar_t__ FUNC_11 (struct nlattr const* const) ;
 struct nfgenmsg* FUNC_12 (struct nlmsghdr const*) ;
 struct sk_buff* FUNC_13 (int ,int ) ;
 int FUNC_14 () ;
 int FUNC_15 () ;

__attribute__((used)) static int FUNC_16(struct net *VAR_16, struct sock *VAR_17,
    struct sk_buff *VAR_18, const struct nlmsghdr *VAR_19,
    const struct nlattr * const VAR_20[],
    struct netlink_ext_ack *VAR_21)
{
 struct nf_conntrack_tuple VAR_22;
 struct nf_conntrack_expect *VAR_23;
 struct sk_buff *VAR_24;
 struct nfgenmsg *VAR_25 = FUNC_12(VAR_19);
 u_int8_t VAR_26 = VAR_25->nfgen_family;
 struct nf_conntrack_zone VAR_27;
 int VAR_28;

 if (VAR_19->nlmsg_flags & VAR_13) {
  if (VAR_20[VAR_1])
   return FUNC_1(VAR_16, VAR_17, VAR_18, VAR_19, VAR_20,
           VAR_21);
  else {
   struct netlink_dump_control VAR_29 = {
    .dump = VAR_15,
    .done = VAR_14,
   };
   return FUNC_6(VAR_17, VAR_18, VAR_19, &VAR_29);
  }
 }

 VAR_28 = FUNC_4(VAR_20[VAR_3], &VAR_27);
 if (VAR_28 < 0)
  return VAR_28;

 if (VAR_20[VAR_2])
  VAR_28 = FUNC_3(VAR_20, &VAR_22, VAR_2,
         VAR_26, ((void*)0));
 else if (VAR_20[VAR_1])
  VAR_28 = FUNC_3(VAR_20, &VAR_22, VAR_1,
         VAR_26, ((void*)0));
 else
  return -VAR_5;

 if (VAR_28 < 0)
  return VAR_28;

 VAR_23 = FUNC_8(VAR_16, &VAR_27, &VAR_22);
 if (!VAR_23)
  return -VAR_7;

 if (VAR_20[VAR_0]) {
  __be32 VAR_30 = FUNC_11(VAR_20[VAR_0]);

  if (VAR_30 != FUNC_10(VAR_23)) {
   FUNC_9(VAR_23);
   return -VAR_7;
  }
 }

 VAR_28 = -VAR_8;
 VAR_24 = FUNC_13(VAR_12, VAR_9);
 if (VAR_24 == ((void*)0)) {
  FUNC_9(VAR_23);
  goto out;
 }

 FUNC_14();
 VAR_28 = FUNC_2(VAR_24, FUNC_0(VAR_18).portid,
          VAR_19->nlmsg_seq, VAR_10, VAR_23);
 FUNC_15();
 FUNC_9(VAR_23);
 if (VAR_28 <= 0)
  goto free;

 VAR_28 = FUNC_7(VAR_17, VAR_24, FUNC_0(VAR_18).portid, VAR_11);
 if (VAR_28 < 0)
  goto out;

 return 0;

free:
 FUNC_5(VAR_24);
out:

 return VAR_28 == -VAR_4 ? -VAR_6 : VAR_28;
}
