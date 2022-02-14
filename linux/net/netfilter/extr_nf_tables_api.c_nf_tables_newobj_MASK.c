
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_flags; } ;
struct nlattr {int dummy; } ;
struct TYPE_3__ {struct nft_table const* name; struct nft_table const* table; } ;
typedef struct nft_table {int owner; TYPE_2__* ops; TYPE_1__ key; int list; int use; int objects; int rhlhead; int handle; } const nft_table ;
struct nft_object_type {int owner; TYPE_2__* ops; TYPE_1__ key; int list; int use; int objects; int rhlhead; int handle; } ;
typedef struct nft_object {int owner; TYPE_2__* ops; TYPE_1__ key; int list; int use; int objects; int rhlhead; int handle; } const nft_object ;
struct nft_ctx {int dummy; } ;
struct nfgenmsg {int nfgen_family; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_4__ {int (* destroy ) (struct nft_ctx*,struct nft_table const*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct nft_table const*) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct netlink_ext_ack*,struct nlattr const* const) ;
 int FUNC_3 (struct nft_table const*) ;
 int FUNC_4 (struct nft_table const*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct nft_table const*) ;
 int FUNC_8 (struct nft_ctx*,struct nft_table const*,struct nlattr const* const,struct nft_table const*) ;
 int FUNC_9 (struct nft_ctx*,struct net*,struct sk_buff*,struct nlmsghdr const*,int,struct nft_table const*,int *,struct nlattr const* const*) ;
 int FUNC_10 (struct net*) ;
 struct nft_table* FUNC_11 (struct nft_ctx*,struct nft_table const*,struct nlattr const* const) ;
 struct nft_table* FUNC_12 (struct net*,struct nft_table const*,struct nlattr const* const,int ,int ) ;
 struct nft_table* FUNC_13 (struct net*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 struct nft_table* FUNC_14 (struct net*,struct nlattr const* const,int,int ) ;
 int FUNC_15 (struct nft_ctx*,int ,struct nft_table const*) ;
 int FUNC_16 (struct nlattr const* const) ;
 struct nft_table const* FUNC_17 (struct nlattr const* const,int ) ;
 struct nfgenmsg* FUNC_18 (struct nlmsghdr const*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int *,int *,int ) ;
 int FUNC_21 (struct nft_ctx*,struct nft_table const*) ;

__attribute__((used)) static int FUNC_22(struct net *VAR_15, struct sock *VAR_16,
       struct sk_buff *VAR_17, const struct nlmsghdr *VAR_18,
       const struct nlattr * const VAR_19[],
       struct netlink_ext_ack *VAR_20)
{
 const struct nfgenmsg *VAR_21 = FUNC_18(VAR_18);
 const struct nft_object_type *VAR_22;
 u8 VAR_23 = FUNC_10(VAR_15);
 int VAR_24 = VAR_21->nfgen_family;
 struct nft_table *VAR_25;
 struct nft_object *VAR_26;
 struct nft_ctx VAR_27;
 u32 VAR_28;
 int VAR_29;

 if (!VAR_19[VAR_9] ||
     !VAR_19[VAR_7] ||
     !VAR_19[VAR_6])
  return -VAR_1;

 VAR_25 = FUNC_14(VAR_15, VAR_19[VAR_8], VAR_24, VAR_23);
 if (FUNC_1(VAR_25)) {
  FUNC_2(VAR_20, VAR_19[VAR_8]);
  return FUNC_3(VAR_25);
 }

 VAR_28 = FUNC_19(FUNC_16(VAR_19[VAR_9]));
 VAR_26 = FUNC_12(VAR_15, VAR_25, VAR_19[VAR_7], VAR_28, VAR_23);
 if (FUNC_1(VAR_26)) {
  VAR_29 = FUNC_3(VAR_26);
  if (VAR_29 != -VAR_2) {
   FUNC_2(VAR_20, VAR_19[VAR_7]);
   return VAR_29;
  }
 } else {
  if (VAR_18->nlmsg_flags & VAR_11) {
   FUNC_2(VAR_20, VAR_19[VAR_7]);
   return -VAR_0;
  }
  if (VAR_18->nlmsg_flags & VAR_12)
   return -VAR_4;

  VAR_22 = FUNC_13(VAR_15, VAR_28);
  FUNC_9(&VAR_27, VAR_15, VAR_17, VAR_18, VAR_24, VAR_25, ((void*)0), VAR_19);

  return FUNC_8(&VAR_27, VAR_22, VAR_19[VAR_6], VAR_26);
 }

 FUNC_9(&VAR_27, VAR_15, VAR_17, VAR_18, VAR_24, VAR_25, ((void*)0), VAR_19);

 VAR_22 = FUNC_13(VAR_15, VAR_28);
 if (FUNC_1(VAR_22))
  return FUNC_3(VAR_22);

 VAR_26 = FUNC_11(&VAR_27, VAR_22, VAR_19[VAR_6]);
 if (FUNC_1(VAR_26)) {
  VAR_29 = FUNC_3(VAR_26);
  goto err1;
 }
 VAR_26->key.table = VAR_25;
 VAR_26->handle = FUNC_7(VAR_25);

 VAR_26->key.name = FUNC_17(VAR_19[VAR_7], VAR_5);
 if (!VAR_26->key.name) {
  VAR_29 = -VAR_3;
  goto err2;
 }

 VAR_29 = FUNC_15(&VAR_27, VAR_10, VAR_26);
 if (VAR_29 < 0)
  goto err3;

 VAR_29 = FUNC_20(&VAR_13, &VAR_26->rhlhead,
         VAR_14);
 if (VAR_29 < 0)
  goto err4;

 FUNC_5(&VAR_26->list, &VAR_25->objects);
 VAR_25->use++;
 return 0;
err4:

 FUNC_0(&VAR_26->list);
 return VAR_29;
err3:
 FUNC_4(VAR_26->key.name);
err2:
 if (VAR_26->ops->destroy)
  VAR_26->ops->destroy(&VAR_27, VAR_26);
 FUNC_4(VAR_26);
err1:
 FUNC_6(VAR_22->owner);
 return VAR_29;
}
