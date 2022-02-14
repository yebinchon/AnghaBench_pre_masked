
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_flags; } ;
struct nlattr {int dummy; } ;
struct nft_table {int flags; } ;
struct nft_ctx {int dummy; } ;
struct nft_chain {int flags; } ;
struct nfgenmsg {int nfgen_family; } ;
struct netlink_ext_ack {int dummy; } ;
struct TYPE_2__ {int commit_mutex; } ;
struct net {TYPE_1__ nft; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct nft_table*) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;


 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct netlink_ext_ack*,struct nlattr const*) ;
 int FUNC_2 (struct nft_table*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct nft_ctx*,int,int,int,int) ;
 int FUNC_6 (struct nft_ctx*,int,int,int) ;
 struct nft_table* FUNC_7 (struct net*,struct nft_table*,struct nlattr const*,int) ;
 struct nft_table* FUNC_8 (struct nft_table*,int ,int) ;
 int FUNC_9 (struct nft_ctx*,struct net*,struct sk_buff*,struct nlmsghdr const*,int,struct nft_table*,struct nft_table*,struct nlattr const* const*) ;
 int FUNC_10 (struct net*) ;
 int FUNC_11 (struct nft_table*) ;
 struct nft_table* FUNC_12 (struct net*,struct nlattr const* const,int,int) ;
 int FUNC_13 (struct nlattr const* const) ;
 int FUNC_14 (struct nlattr const* const) ;
 struct nfgenmsg* FUNC_15 (struct nlmsghdr const*) ;
 void* FUNC_16 (int ) ;

__attribute__((used)) static int FUNC_17(struct net *VAR_13, struct sock *VAR_14,
         struct sk_buff *VAR_15, const struct nlmsghdr *VAR_16,
         const struct nlattr * const VAR_17[],
         struct netlink_ext_ack *VAR_18)
{
 const struct nfgenmsg *VAR_19 = FUNC_15(VAR_16);
 u8 VAR_20 = FUNC_10(VAR_13);
 int VAR_21 = VAR_19->nfgen_family;
 const struct nlattr *VAR_22;
 struct nft_table *VAR_23;
 struct nft_chain *VAR_24;
 u8 VAR_25 = 129;
 struct nft_ctx VAR_26;
 u64 VAR_27 = 0;
 u32 VAR_28 = 0;

 FUNC_4(&VAR_13->nft.commit_mutex);

 VAR_23 = FUNC_12(VAR_13, VAR_17[VAR_9], VAR_21, VAR_20);
 if (FUNC_0(VAR_23)) {
  FUNC_1(VAR_18, VAR_17[VAR_9]);
  return FUNC_2(VAR_23);
 }

 VAR_24 = ((void*)0);
 VAR_22 = VAR_17[VAR_7];

 if (VAR_17[VAR_5]) {
  VAR_27 = FUNC_3(FUNC_14(VAR_17[VAR_5]));
  VAR_24 = FUNC_8(VAR_23, VAR_27, VAR_20);
  if (FUNC_0(VAR_24)) {
   FUNC_1(VAR_18, VAR_17[VAR_5]);
   return FUNC_2(VAR_24);
  }
  VAR_22 = VAR_17[VAR_5];
 } else {
  VAR_24 = FUNC_7(VAR_13, VAR_23, VAR_22, VAR_20);
  if (FUNC_0(VAR_24)) {
   if (FUNC_2(VAR_24) != -VAR_2) {
    FUNC_1(VAR_18, VAR_22);
    return FUNC_2(VAR_24);
   }
   VAR_24 = ((void*)0);
  }
 }

 if (VAR_17[VAR_8]) {
  if (VAR_24 != ((void*)0) &&
      !FUNC_11(VAR_24)) {
   FUNC_1(VAR_18, VAR_17[VAR_8]);
   return -VAR_3;
  }

  if (VAR_24 == ((void*)0) &&
      VAR_17[VAR_6] == ((void*)0)) {
   FUNC_1(VAR_18, VAR_17[VAR_8]);
   return -VAR_3;
  }

  VAR_25 = FUNC_16(FUNC_13(VAR_17[VAR_8]));
  switch (VAR_25) {
  case 128:
  case 129:
   break;
  default:
   return -VAR_1;
  }
 }

 if (VAR_17[VAR_4])
  VAR_28 = FUNC_16(FUNC_13(VAR_17[VAR_4]));
 else if (VAR_24)
  VAR_28 = VAR_24->flags;

 FUNC_9(&VAR_26, VAR_13, VAR_15, VAR_16, VAR_21, VAR_23, VAR_24, VAR_17);

 if (VAR_24 != ((void*)0)) {
  if (VAR_16->nlmsg_flags & VAR_11) {
   FUNC_1(VAR_18, VAR_22);
   return -VAR_0;
  }
  if (VAR_16->nlmsg_flags & VAR_12)
   return -VAR_3;

  VAR_28 |= VAR_24->flags & VAR_10;
  return FUNC_6(&VAR_26, VAR_20, VAR_25, VAR_28);
 }

 return FUNC_5(&VAR_26, VAR_21, VAR_20, VAR_25, VAR_28);
}
