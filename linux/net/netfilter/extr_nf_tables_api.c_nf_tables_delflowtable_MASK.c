
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct nft_table {scalar_t__ use; } ;
struct nft_flowtable {scalar_t__ use; } ;
struct nft_ctx {int dummy; } ;
struct nfgenmsg {int nfgen_family; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct nft_table*) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (struct netlink_ext_ack*,struct nlattr const*) ;
 int FUNC_2 (struct nft_table*) ;
 int FUNC_3 (struct nft_ctx*,struct net*,struct sk_buff*,struct nlmsghdr const*,int,struct nft_table*,int *,struct nlattr const* const*) ;
 int FUNC_4 (struct nft_ctx*,struct nft_table*) ;
 struct nft_table* FUNC_5 (struct nft_table*,struct nlattr const*,int ) ;
 struct nft_table* FUNC_6 (struct nft_table*,struct nlattr const*,int ) ;
 int FUNC_7 (struct net*) ;
 struct nft_table* FUNC_8 (struct net*,struct nlattr const* const,int,int ) ;
 struct nfgenmsg* FUNC_9 (struct nlmsghdr const*) ;

__attribute__((used)) static int FUNC_10(struct net *VAR_5, struct sock *VAR_6,
      struct sk_buff *VAR_7,
      const struct nlmsghdr *VAR_8,
      const struct nlattr * const VAR_9[],
      struct netlink_ext_ack *VAR_10)
{
 const struct nfgenmsg *VAR_11 = FUNC_9(VAR_8);
 u8 VAR_12 = FUNC_7(VAR_5);
 int VAR_13 = VAR_11->nfgen_family;
 struct nft_flowtable *VAR_14;
 const struct nlattr *VAR_15;
 struct nft_table *VAR_16;
 struct nft_ctx VAR_17;

 if (!VAR_9[VAR_4] ||
     (!VAR_9[VAR_3] &&
      !VAR_9[VAR_2]))
  return -VAR_1;

 VAR_16 = FUNC_8(VAR_5, VAR_9[VAR_4], VAR_13,
     VAR_12);
 if (FUNC_0(VAR_16)) {
  FUNC_1(VAR_10, VAR_9[VAR_4]);
  return FUNC_2(VAR_16);
 }

 if (VAR_9[VAR_2]) {
  VAR_15 = VAR_9[VAR_2];
  VAR_14 = FUNC_6(VAR_16, VAR_15, VAR_12);
 } else {
  VAR_15 = VAR_9[VAR_3];
  VAR_14 = FUNC_5(VAR_16, VAR_15, VAR_12);
 }

 if (FUNC_0(VAR_14)) {
  FUNC_1(VAR_10, VAR_15);
  return FUNC_2(VAR_14);
 }
 if (VAR_14->use > 0) {
  FUNC_1(VAR_10, VAR_15);
  return -VAR_0;
 }

 FUNC_3(&VAR_17, VAR_5, VAR_7, VAR_8, VAR_13, VAR_16, ((void*)0), VAR_9);

 return FUNC_4(&VAR_17, VAR_14);
}
