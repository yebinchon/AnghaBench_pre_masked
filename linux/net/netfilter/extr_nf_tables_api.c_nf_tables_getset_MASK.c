
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_flags; } ;
struct nlattr {int dummy; } ;
struct nft_set {int dummy; } ;
struct nft_ctx {int table; } ;
struct nfgenmsg {scalar_t__ nfgen_family; } ;
struct netlink_ext_ack {int dummy; } ;
struct netlink_dump_control {int module; struct nft_ctx* data; int done; int dump; int start; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct nft_set const*) ;
 TYPE_1__ FUNC_1 (struct sk_buff*) ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct nft_set const*) ;
 int VAR_10 ;
 struct sk_buff* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (struct sk_buff*,struct nft_ctx*,struct nft_set const*,int ,int ) ;
 int FUNC_6 (struct nft_ctx*,struct net*,struct sk_buff*,struct nlmsghdr const*,struct nlattr const* const*,struct netlink_ext_ack*,int ) ;
 int FUNC_7 (struct net*) ;
 int FUNC_8 (struct sock*,struct sk_buff*,struct nlmsghdr const*,struct netlink_dump_control*) ;
 struct nft_set* FUNC_9 (int ,struct nlattr const* const,int ) ;
 struct nfgenmsg* FUNC_10 (struct nlmsghdr const*) ;
 int FUNC_11 (struct sock*,struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_12(struct net *VAR_14, struct sock *VAR_15,
       struct sk_buff *VAR_16, const struct nlmsghdr *VAR_17,
       const struct nlattr * const VAR_18[],
       struct netlink_ext_ack *VAR_19)
{
 u8 VAR_20 = FUNC_7(VAR_14);
 const struct nft_set *VAR_21;
 struct nft_ctx VAR_22;
 struct sk_buff *VAR_23;
 const struct nfgenmsg *VAR_24 = FUNC_10(VAR_17);
 int VAR_25;


 VAR_25 = FUNC_6(&VAR_22, VAR_14, VAR_16, VAR_17, VAR_18, VAR_19,
     VAR_20);
 if (VAR_25 < 0)
  return VAR_25;

 if (VAR_17->nlmsg_flags & VAR_9) {
  struct netlink_dump_control VAR_26 = {
   .start = VAR_13,
   .dump = VAR_11,
   .done = VAR_12,
   .data = &VAR_22,
   .module = VAR_10,
  };

  return FUNC_8(VAR_15, VAR_16, VAR_17, &VAR_26);
 }


 if (VAR_24->nfgen_family == VAR_4)
  return -VAR_0;
 if (!VAR_18[VAR_6])
  return -VAR_1;

 VAR_21 = FUNC_9(VAR_22.table, VAR_18[VAR_5], VAR_20);
 if (FUNC_0(VAR_21))
  return FUNC_2(VAR_21);

 VAR_23 = FUNC_3(VAR_8, VAR_3);
 if (VAR_23 == ((void*)0))
  return -VAR_2;

 VAR_25 = FUNC_5(VAR_23, &VAR_22, VAR_21, VAR_7, 0);
 if (VAR_25 < 0)
  goto err;

 return FUNC_11(VAR_15, VAR_23, FUNC_1(VAR_16).portid);

err:
 FUNC_4(VAR_23);
 return VAR_25;
}
