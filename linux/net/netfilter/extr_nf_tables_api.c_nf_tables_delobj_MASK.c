
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct nft_table {scalar_t__ use; } ;
struct nft_object {scalar_t__ use; } ;
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
 size_t VAR_5 ;
 int FUNC_1 (struct netlink_ext_ack*,struct nlattr const*) ;
 int FUNC_2 (struct nft_table*) ;
 int FUNC_3 (struct nft_ctx*,struct net*,struct sk_buff*,struct nlmsghdr const*,int,struct nft_table*,int *,struct nlattr const* const*) ;
 int FUNC_4 (struct nft_ctx*,struct nft_table*) ;
 int FUNC_5 (struct net*) ;
 struct nft_table* FUNC_6 (struct net*,struct nft_table*,struct nlattr const*,int ,int ) ;
 struct nft_table* FUNC_7 (struct nft_table*,struct nlattr const*,int ,int ) ;
 struct nft_table* FUNC_8 (struct net*,struct nlattr const* const,int,int ) ;
 int FUNC_9 (struct nlattr const* const) ;
 struct nfgenmsg* FUNC_10 (struct nlmsghdr const*) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct net *VAR_6, struct sock *VAR_7,
       struct sk_buff *VAR_8, const struct nlmsghdr *VAR_9,
       const struct nlattr * const VAR_10[],
       struct netlink_ext_ack *VAR_11)
{
 const struct nfgenmsg *VAR_12 = FUNC_10(VAR_9);
 u8 VAR_13 = FUNC_5(VAR_6);
 int VAR_14 = VAR_12->nfgen_family;
 const struct nlattr *VAR_15;
 struct nft_table *VAR_16;
 struct nft_object *VAR_17;
 struct nft_ctx VAR_18;
 u32 VAR_19;

 if (!VAR_10[VAR_5] ||
     (!VAR_10[VAR_3] && !VAR_10[VAR_2]))
  return -VAR_1;

 VAR_16 = FUNC_8(VAR_6, VAR_10[VAR_4], VAR_14, VAR_13);
 if (FUNC_0(VAR_16)) {
  FUNC_1(VAR_11, VAR_10[VAR_4]);
  return FUNC_2(VAR_16);
 }

 VAR_19 = FUNC_11(FUNC_9(VAR_10[VAR_5]));
 if (VAR_10[VAR_2]) {
  VAR_15 = VAR_10[VAR_2];
  VAR_17 = FUNC_7(VAR_16, VAR_15, VAR_19, VAR_13);
 } else {
  VAR_15 = VAR_10[VAR_3];
  VAR_17 = FUNC_6(VAR_6, VAR_16, VAR_15, VAR_19, VAR_13);
 }

 if (FUNC_0(VAR_17)) {
  FUNC_1(VAR_11, VAR_15);
  return FUNC_2(VAR_17);
 }
 if (VAR_17->use > 0) {
  FUNC_1(VAR_11, VAR_15);
  return -VAR_0;
 }

 FUNC_3(&VAR_18, VAR_6, VAR_8, VAR_9, VAR_14, VAR_16, ((void*)0), VAR_10);

 return FUNC_4(&VAR_18, VAR_17);
}
