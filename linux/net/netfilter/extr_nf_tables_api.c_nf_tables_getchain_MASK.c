
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
typedef struct nft_table const nft_table ;
typedef struct nft_table nft_chain ;
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
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct netlink_ext_ack*,struct nlattr const* const) ;
 int FUNC_3 (struct nft_table const*) ;
 int VAR_7 ;
 struct sk_buff* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int VAR_8 ;
 int FUNC_6 (struct sk_buff*,struct net*,int ,int ,int ,int ,int,struct nft_table const*,struct nft_table const*) ;
 struct nft_table* FUNC_7 (struct net*,struct nft_table const*,struct nlattr const* const,int ) ;
 int FUNC_8 (struct net*) ;
 int FUNC_9 (struct sock*,struct sk_buff*,struct nlmsghdr const*,struct netlink_dump_control*) ;
 struct nft_table* FUNC_10 (struct net*,struct nlattr const* const,int,int ) ;
 struct nfgenmsg* FUNC_11 (struct nlmsghdr const*) ;
 int FUNC_12 (struct sock*,struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_13(struct net *VAR_9, struct sock *VAR_10,
         struct sk_buff *VAR_11, const struct nlmsghdr *VAR_12,
         const struct nlattr * const VAR_13[],
         struct netlink_ext_ack *VAR_14)
{
 const struct nfgenmsg *VAR_15 = FUNC_11(VAR_12);
 u8 VAR_16 = FUNC_8(VAR_9);
 const struct nft_chain *VAR_17;
 struct nft_table *VAR_18;
 struct sk_buff *VAR_19;
 int VAR_20 = VAR_15->nfgen_family;
 int VAR_21;

 if (VAR_12->nlmsg_flags & VAR_6) {
  struct netlink_dump_control VAR_22 = {
   .dump = VAR_8,
   .module = VAR_7,
  };

  return FUNC_9(VAR_10, VAR_11, VAR_12, &VAR_22);
 }

 VAR_18 = FUNC_10(VAR_9, VAR_13[VAR_3], VAR_20, VAR_16);
 if (FUNC_0(VAR_18)) {
  FUNC_2(VAR_14, VAR_13[VAR_3]);
  return FUNC_3(VAR_18);
 }

 VAR_17 = FUNC_7(VAR_9, VAR_18, VAR_13[VAR_2], VAR_16);
 if (FUNC_0(VAR_17)) {
  FUNC_2(VAR_14, VAR_13[VAR_2]);
  return FUNC_3(VAR_17);
 }

 VAR_19 = FUNC_4(VAR_5, VAR_1);
 if (!VAR_19)
  return -VAR_0;

 VAR_21 = FUNC_6(VAR_19, VAR_9, FUNC_1(VAR_11).portid,
     VAR_12->nlmsg_seq, VAR_4, 0,
     VAR_20, VAR_18, VAR_17);
 if (VAR_21 < 0)
  goto err;

 return FUNC_12(VAR_10, VAR_19, FUNC_1(VAR_11).portid);

err:
 FUNC_5(VAR_19);
 return VAR_21;
}
