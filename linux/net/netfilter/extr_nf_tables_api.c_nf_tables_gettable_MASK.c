
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_flags; int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct nft_table {int dummy; } ;
struct nfgenmsg {int nfgen_family; } ;
struct netlink_ext_ack {int dummy; } ;
struct netlink_dump_control {int module; int dump; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct nft_table const*) ;
 TYPE_1__ FUNC_1 (struct sk_buff*) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct netlink_ext_ack*,struct nlattr const* const) ;
 int FUNC_3 (struct nft_table const*) ;
 int VAR_6 ;
 struct sk_buff* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int VAR_7 ;
 int FUNC_6 (struct sk_buff*,struct net*,int ,int ,int ,int ,int,struct nft_table const*) ;
 int FUNC_7 (struct net*) ;
 int FUNC_8 (struct sock*,struct sk_buff*,struct nlmsghdr const*,struct netlink_dump_control*) ;
 struct nft_table* FUNC_9 (struct net*,struct nlattr const* const,int,int ) ;
 struct nfgenmsg* FUNC_10 (struct nlmsghdr const*) ;
 int FUNC_11 (struct sock*,struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_12(struct net *VAR_8, struct sock *VAR_9,
         struct sk_buff *VAR_10, const struct nlmsghdr *VAR_11,
         const struct nlattr * const VAR_12[],
         struct netlink_ext_ack *VAR_13)
{
 const struct nfgenmsg *VAR_14 = FUNC_10(VAR_11);
 u8 VAR_15 = FUNC_7(VAR_8);
 const struct nft_table *VAR_16;
 struct sk_buff *VAR_17;
 int VAR_18 = VAR_14->nfgen_family;
 int VAR_19;

 if (VAR_11->nlmsg_flags & VAR_5) {
  struct netlink_dump_control VAR_20 = {
   .dump = VAR_7,
   .module = VAR_6,
  };

  return FUNC_8(VAR_9, VAR_10, VAR_11, &VAR_20);
 }

 VAR_16 = FUNC_9(VAR_8, VAR_12[VAR_2], VAR_18, VAR_15);
 if (FUNC_0(VAR_16)) {
  FUNC_2(VAR_13, VAR_12[VAR_2]);
  return FUNC_3(VAR_16);
 }

 VAR_17 = FUNC_4(VAR_4, VAR_1);
 if (!VAR_17)
  return -VAR_0;

 VAR_19 = FUNC_6(VAR_17, VAR_8, FUNC_1(VAR_10).portid,
     VAR_11->nlmsg_seq, VAR_3, 0,
     VAR_18, VAR_16);
 if (VAR_19 < 0)
  goto err;

 return FUNC_11(VAR_9, VAR_17, FUNC_1(VAR_10).portid);

err:
 FUNC_5(VAR_17);
 return VAR_19;
}
