
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
struct nft_table {int dummy; } ;
typedef struct nft_table const nft_flowtable ;
struct nfgenmsg {int nfgen_family; } ;
struct netlink_ext_ack {int dummy; } ;
struct netlink_dump_control {void* data; int module; int done; int dump; int start; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct nft_table const*) ;
 TYPE_1__ FUNC_1 (struct sk_buff*) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct nft_table const*) ;
 int VAR_8 ;
 struct sk_buff* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (struct sk_buff*,struct net*,int ,int ,int ,int ,int,struct nft_table const*) ;
 struct nft_table* FUNC_6 (struct nft_table const*,struct nlattr const* const,int ) ;
 int FUNC_7 (struct net*) ;
 int FUNC_8 (struct sock*,struct sk_buff*,struct nlmsghdr const*,struct netlink_dump_control*) ;
 struct nft_table* FUNC_9 (struct net*,struct nlattr const* const,int,int ) ;
 struct nfgenmsg* FUNC_10 (struct nlmsghdr const*) ;
 int FUNC_11 (struct sock*,struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_12(struct net *VAR_12, struct sock *VAR_13,
      struct sk_buff *VAR_14,
      const struct nlmsghdr *VAR_15,
      const struct nlattr * const VAR_16[],
      struct netlink_ext_ack *VAR_17)
{
 const struct nfgenmsg *VAR_18 = FUNC_10(VAR_15);
 u8 VAR_19 = FUNC_7(VAR_12);
 int VAR_20 = VAR_18->nfgen_family;
 struct nft_flowtable *VAR_21;
 const struct nft_table *VAR_22;
 struct sk_buff *VAR_23;
 int VAR_24;

 if (VAR_15->nlmsg_flags & VAR_7) {
  struct netlink_dump_control VAR_25 = {
   .start = VAR_11,
   .dump = VAR_9,
   .done = VAR_10,
   .module = VAR_8,
   .data = (void *)VAR_16,
  };

  return FUNC_8(VAR_13, VAR_14, VAR_15, &VAR_25);
 }

 if (!VAR_16[VAR_3])
  return -VAR_0;

 VAR_22 = FUNC_9(VAR_12, VAR_16[VAR_4], VAR_20,
     VAR_19);
 if (FUNC_0(VAR_22))
  return FUNC_2(VAR_22);

 VAR_21 = FUNC_6(VAR_22, VAR_16[VAR_3],
      VAR_19);
 if (FUNC_0(VAR_21))
  return FUNC_2(VAR_21);

 VAR_23 = FUNC_3(VAR_6, VAR_2);
 if (!VAR_23)
  return -VAR_1;

 VAR_24 = FUNC_5(VAR_23, VAR_12, FUNC_1(VAR_14).portid,
         VAR_15->nlmsg_seq,
         VAR_5, 0, VAR_20,
         VAR_21);
 if (VAR_24 < 0)
  goto err;

 return FUNC_11(VAR_13, VAR_23, FUNC_1(VAR_14).portid);
err:
 FUNC_4(VAR_23);
 return VAR_24;
}
