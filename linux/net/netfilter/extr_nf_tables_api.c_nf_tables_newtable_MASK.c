
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_flags; } ;
struct nlattr {int dummy; } ;
struct nft_table {int family; int flags; struct nft_table* name; int chains_ht; int list; scalar_t__ handle; int flowtables; int objects; int sets; int chains; } ;
struct nft_ctx {int dummy; } ;
struct nfgenmsg {int nfgen_family; } ;
struct netlink_ext_ack {int dummy; } ;
struct TYPE_2__ {int tables; int commit_mutex; } ;
struct net {TYPE_1__ nft; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct nft_table*) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct netlink_ext_ack*,struct nlattr const*) ;
 int FUNC_3 (struct nft_table*) ;
 int FUNC_4 (struct nft_table*) ;
 struct nft_table* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct nft_ctx*) ;
 int VAR_12 ;
 int FUNC_9 (struct nft_ctx*,struct net*,struct sk_buff*,struct nlmsghdr const*,int,struct nft_table*,int *,struct nlattr const* const*) ;
 int FUNC_10 (struct net*) ;
 struct nft_table* FUNC_11 (struct net*,struct nlattr const*,int,int ) ;
 int FUNC_12 (struct nft_ctx*,int ) ;
 int FUNC_13 (struct nlattr const* const) ;
 struct nft_table* FUNC_14 (struct nlattr const*,int ) ;
 struct nfgenmsg* FUNC_15 (struct nlmsghdr const*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int *) ;
 scalar_t__ VAR_13 ;

__attribute__((used)) static int FUNC_19(struct net *VAR_14, struct sock *VAR_15,
         struct sk_buff *VAR_16, const struct nlmsghdr *VAR_17,
         const struct nlattr * const VAR_18[],
         struct netlink_ext_ack *VAR_19)
{
 const struct nfgenmsg *VAR_20 = FUNC_15(VAR_17);
 u8 VAR_21 = FUNC_10(VAR_14);
 int VAR_22 = VAR_20->nfgen_family;
 const struct nlattr *VAR_23;
 struct nft_table *VAR_24;
 u32 VAR_25 = 0;
 struct nft_ctx VAR_26;
 int VAR_27;

 FUNC_7(&VAR_14->nft.commit_mutex);
 VAR_23 = VAR_18[VAR_7];
 VAR_24 = FUNC_11(VAR_14, VAR_23, VAR_22, VAR_21);
 if (FUNC_1(VAR_24)) {
  if (FUNC_3(VAR_24) != -VAR_2)
   return FUNC_3(VAR_24);
 } else {
  if (VAR_17->nlmsg_flags & VAR_10) {
   FUNC_2(VAR_19, VAR_23);
   return -VAR_0;
  }
  if (VAR_17->nlmsg_flags & VAR_11)
   return -VAR_4;

  FUNC_9(&VAR_26, VAR_14, VAR_16, VAR_17, VAR_22, VAR_24, ((void*)0), VAR_18);
  return FUNC_8(&VAR_26);
 }

 if (VAR_18[VAR_6]) {
  VAR_25 = FUNC_16(FUNC_13(VAR_18[VAR_6]));
  if (VAR_25 & ~VAR_9)
   return -VAR_1;
 }

 VAR_27 = -VAR_3;
 VAR_24 = FUNC_5(sizeof(*VAR_24), VAR_5);
 if (VAR_24 == ((void*)0))
  goto err_kzalloc;

 VAR_24->name = FUNC_14(VAR_23, VAR_5);
 if (VAR_24->name == ((void*)0))
  goto err_strdup;

 VAR_27 = FUNC_18(&VAR_24->chains_ht, &VAR_12);
 if (VAR_27)
  goto err_chain_ht;

 FUNC_0(&VAR_24->chains);
 FUNC_0(&VAR_24->sets);
 FUNC_0(&VAR_24->objects);
 FUNC_0(&VAR_24->flowtables);
 VAR_24->family = VAR_22;
 VAR_24->flags = VAR_25;
 VAR_24->handle = ++VAR_13;

 FUNC_9(&VAR_26, VAR_14, VAR_16, VAR_17, VAR_22, VAR_24, ((void*)0), VAR_18);
 VAR_27 = FUNC_12(&VAR_26, VAR_8);
 if (VAR_27 < 0)
  goto err_trans;

 FUNC_6(&VAR_24->list, &VAR_14->nft.tables);
 return 0;
err_trans:
 FUNC_17(&VAR_24->chains_ht);
err_chain_ht:
 FUNC_4(VAR_24->name);
err_strdup:
 FUNC_4(VAR_24);
err_kzalloc:
 return VAR_27;
}
