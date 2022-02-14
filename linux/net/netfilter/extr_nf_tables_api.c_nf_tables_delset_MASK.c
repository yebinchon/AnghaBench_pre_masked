
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_flags; } ;
struct nlattr {int dummy; } ;
struct nft_set {int nelems; scalar_t__ use; } ;
struct nft_ctx {int table; } ;
struct nfgenmsg {scalar_t__ nfgen_family; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct nft_set*) ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct netlink_ext_ack*,struct nlattr const*) ;
 int FUNC_2 (struct nft_set*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct nft_ctx*,struct net*,struct sk_buff*,struct nlmsghdr const*,struct nlattr const* const*,struct netlink_ext_ack*,int ) ;
 int FUNC_5 (struct nft_ctx*,struct nft_set*) ;
 int FUNC_6 (struct net*) ;
 struct nft_set* FUNC_7 (int ,struct nlattr const*,int ) ;
 struct nft_set* FUNC_8 (int ,struct nlattr const*,int ) ;
 struct nfgenmsg* FUNC_9 (struct nlmsghdr const*) ;

__attribute__((used)) static int FUNC_10(struct net *VAR_8, struct sock *VAR_9,
       struct sk_buff *VAR_10, const struct nlmsghdr *VAR_11,
       const struct nlattr * const VAR_12[],
       struct netlink_ext_ack *VAR_13)
{
 const struct nfgenmsg *VAR_14 = FUNC_9(VAR_11);
 u8 VAR_15 = FUNC_6(VAR_8);
 const struct nlattr *VAR_16;
 struct nft_set *VAR_17;
 struct nft_ctx VAR_18;
 int VAR_19;

 if (VAR_14->nfgen_family == VAR_3)
  return -VAR_0;
 if (VAR_12[VAR_6] == ((void*)0))
  return -VAR_2;

 VAR_19 = FUNC_4(&VAR_18, VAR_8, VAR_10, VAR_11, VAR_12, VAR_13,
     VAR_15);
 if (VAR_19 < 0)
  return VAR_19;

 if (VAR_12[VAR_4]) {
  VAR_16 = VAR_12[VAR_4];
  VAR_17 = FUNC_8(VAR_18.table, VAR_16, VAR_15);
 } else {
  VAR_16 = VAR_12[VAR_5];
  VAR_17 = FUNC_7(VAR_18.table, VAR_16, VAR_15);
 }

 if (FUNC_0(VAR_17)) {
  FUNC_1(VAR_13, VAR_16);
  return FUNC_2(VAR_17);
 }
 if (VAR_17->use ||
     (VAR_11->nlmsg_flags & VAR_7 && FUNC_3(&VAR_17->nelems) > 0)) {
  FUNC_1(VAR_13, VAR_16);
  return -VAR_1;
 }

 return FUNC_5(&VAR_18, VAR_17);
}
