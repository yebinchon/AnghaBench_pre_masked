
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_flags; } ;
struct nlattr {int dummy; } ;
struct nft_table {scalar_t__ use; } ;
struct nft_ctx {int family; struct nft_table* table; } ;
struct nfgenmsg {int nfgen_family; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct nft_table*) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct netlink_ext_ack*,struct nlattr const*) ;
 int FUNC_2 (struct nft_table*) ;
 int FUNC_3 (struct nft_ctx*,struct net*,struct sk_buff*,struct nlmsghdr const*,int ,int *,int *,struct nlattr const* const*) ;
 int FUNC_4 (struct nft_ctx*,int) ;
 int FUNC_5 (struct nft_ctx*) ;
 int FUNC_6 (struct net*) ;
 struct nft_table* FUNC_7 (struct net*,struct nlattr const*,int,int ) ;
 struct nft_table* FUNC_8 (struct net*,struct nlattr const*,int ) ;
 struct nfgenmsg* FUNC_9 (struct nlmsghdr const*) ;

__attribute__((used)) static int FUNC_10(struct net *VAR_5, struct sock *VAR_6,
         struct sk_buff *VAR_7, const struct nlmsghdr *VAR_8,
         const struct nlattr * const VAR_9[],
         struct netlink_ext_ack *VAR_10)
{
 const struct nfgenmsg *VAR_11 = FUNC_9(VAR_8);
 u8 VAR_12 = FUNC_6(VAR_5);
 int VAR_13 = VAR_11->nfgen_family;
 const struct nlattr *VAR_14;
 struct nft_table *VAR_15;
 struct nft_ctx VAR_16;

 FUNC_3(&VAR_16, VAR_5, VAR_7, VAR_8, 0, ((void*)0), ((void*)0), VAR_9);
 if (VAR_13 == VAR_0 ||
     (!VAR_9[VAR_3] && !VAR_9[VAR_2]))
  return FUNC_4(&VAR_16, VAR_13);

 if (VAR_9[VAR_2]) {
  VAR_14 = VAR_9[VAR_2];
  VAR_15 = FUNC_8(VAR_5, VAR_14, VAR_12);
 } else {
  VAR_14 = VAR_9[VAR_3];
  VAR_15 = FUNC_7(VAR_5, VAR_14, VAR_13, VAR_12);
 }

 if (FUNC_0(VAR_15)) {
  FUNC_1(VAR_10, VAR_14);
  return FUNC_2(VAR_15);
 }

 if (VAR_8->nlmsg_flags & VAR_4 &&
     VAR_15->use > 0)
  return -VAR_1;

 VAR_16.family = VAR_13;
 VAR_16.table = VAR_15;

 return FUNC_5(&VAR_16);
}
