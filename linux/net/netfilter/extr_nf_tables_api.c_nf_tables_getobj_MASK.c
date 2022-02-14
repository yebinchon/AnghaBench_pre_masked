
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_flags; int nlmsg_seq; int nlmsg_type; } ;
struct nlattr {int dummy; } ;
struct nft_table {int dummy; } ;
typedef struct nft_table const nft_object ;
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
 scalar_t__ FUNC_2 (int ) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct netlink_ext_ack*,struct nlattr const* const) ;
 int FUNC_4 (struct nft_table const*) ;
 int VAR_10 ;
 struct sk_buff* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (struct sk_buff*,struct net*,int ,int ,int ,int ,int,struct nft_table const*,struct nft_table const*,int) ;
 int FUNC_8 (struct net*) ;
 int FUNC_9 (struct sock*,struct sk_buff*,struct nlmsghdr const*,struct netlink_dump_control*) ;
 struct nft_table* FUNC_10 (struct net*,struct nft_table const*,struct nlattr const* const,int ,int ) ;
 struct nft_table* FUNC_11 (struct net*,struct nlattr const* const,int,int ) ;
 int FUNC_12 (struct nlattr const* const) ;
 struct nfgenmsg* FUNC_13 (struct nlmsghdr const*) ;
 int FUNC_14 (struct sock*,struct sk_buff*,int ) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(struct net *VAR_14, struct sock *VAR_15,
       struct sk_buff *VAR_16, const struct nlmsghdr *VAR_17,
       const struct nlattr * const VAR_18[],
       struct netlink_ext_ack *VAR_19)
{
 const struct nfgenmsg *VAR_20 = FUNC_13(VAR_17);
 u8 VAR_21 = FUNC_8(VAR_14);
 int VAR_22 = VAR_20->nfgen_family;
 const struct nft_table *VAR_23;
 struct nft_object *VAR_24;
 struct sk_buff *VAR_25;
 bool VAR_26 = 0;
 u32 VAR_27;
 int VAR_28;

 if (VAR_17->nlmsg_flags & VAR_9) {
  struct netlink_dump_control VAR_29 = {
   .start = VAR_13,
   .dump = VAR_11,
   .done = VAR_12,
   .module = VAR_10,
   .data = (void *)VAR_18,
  };

  return FUNC_9(VAR_15, VAR_16, VAR_17, &VAR_29);
 }

 if (!VAR_18[VAR_3] ||
     !VAR_18[VAR_5])
  return -VAR_0;

 VAR_23 = FUNC_11(VAR_14, VAR_18[VAR_4], VAR_22, VAR_21);
 if (FUNC_0(VAR_23)) {
  FUNC_3(VAR_19, VAR_18[VAR_4]);
  return FUNC_4(VAR_23);
 }

 VAR_27 = FUNC_15(FUNC_12(VAR_18[VAR_5]));
 VAR_24 = FUNC_10(VAR_14, VAR_23, VAR_18[VAR_3], VAR_27, VAR_21);
 if (FUNC_0(VAR_24)) {
  FUNC_3(VAR_19, VAR_18[VAR_3]);
  return FUNC_4(VAR_24);
 }

 VAR_25 = FUNC_5(VAR_8, VAR_2);
 if (!VAR_25)
  return -VAR_1;

 if (FUNC_2(VAR_17->nlmsg_type) == VAR_6)
  VAR_26 = 1;

 VAR_28 = FUNC_7(VAR_25, VAR_14, FUNC_1(VAR_16).portid,
          VAR_17->nlmsg_seq, VAR_7, 0,
          VAR_22, VAR_23, VAR_24, VAR_26);
 if (VAR_28 < 0)
  goto err;

 return FUNC_14(VAR_15, VAR_25, FUNC_1(VAR_16).portid);
err:
 FUNC_6(VAR_25);
 return VAR_28;
}
