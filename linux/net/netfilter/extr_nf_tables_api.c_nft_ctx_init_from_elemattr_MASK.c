
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct nft_table {int dummy; } ;
struct nft_ctx {int dummy; } ;
struct nfgenmsg {int nfgen_family; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;


 scalar_t__ FUNC_0 (struct nft_table*) ;
 size_t VAR_0 ;
 int FUNC_1 (struct netlink_ext_ack*,struct nlattr const* const) ;
 int FUNC_2 (struct nft_table*) ;
 int FUNC_3 (struct nft_ctx*,struct net*,struct sk_buff const*,struct nlmsghdr const*,int,struct nft_table*,int *,struct nlattr const* const*) ;
 struct nft_table* FUNC_4 (struct net*,struct nlattr const* const,int,int ) ;
 struct nfgenmsg* FUNC_5 (struct nlmsghdr const*) ;

__attribute__((used)) static int FUNC_6(struct nft_ctx *VAR_1, struct net *VAR_2,
          const struct sk_buff *VAR_3,
          const struct nlmsghdr *VAR_4,
          const struct nlattr * const VAR_5[],
          struct netlink_ext_ack *VAR_6,
          u8 VAR_7)
{
 const struct nfgenmsg *VAR_8 = FUNC_5(VAR_4);
 int VAR_9 = VAR_8->nfgen_family;
 struct nft_table *VAR_10;

 VAR_10 = FUNC_4(VAR_2, VAR_5[VAR_0], VAR_9,
     VAR_7);
 if (FUNC_0(VAR_10)) {
  FUNC_1(VAR_6, VAR_5[VAR_0]);
  return FUNC_2(VAR_10);
 }

 FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_9, VAR_10, ((void*)0), VAR_5);
 return 0;
}
