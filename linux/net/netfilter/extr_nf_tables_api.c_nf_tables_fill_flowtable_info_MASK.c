
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct nft_flowtable {int ops_len; TYPE_3__* ops; int priority; int hooknum; int handle; int use; int name; TYPE_2__* table; } ;
struct nfgenmsg {int nfgen_family; int res_id; int version; } ;
struct net_device {int name; } ;
struct TYPE_4__ {int base_seq; } ;
struct net {TYPE_1__ nft; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct net_device* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_6 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ,int ) ;
 struct nfgenmsg* FUNC_10 (struct nlmsghdr*) ;
 int FUNC_11 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_12 (struct sk_buff*,int ,int ,int,int,int ) ;
 int FUNC_13 (struct sk_buff*,struct nlmsghdr*) ;

__attribute__((used)) static int FUNC_14(struct sk_buff *VAR_12, struct net *VAR_13,
      u32 VAR_14, u32 VAR_15, int VAR_16,
      u32 VAR_17, int VAR_18,
      struct nft_flowtable *VAR_19)
{
 struct nlattr *VAR_20, *VAR_21;
 struct nfgenmsg *VAR_22;
 struct nlmsghdr *VAR_23;
 int VAR_24;

 VAR_16 = FUNC_4(VAR_1, VAR_16);
 VAR_23 = FUNC_12(VAR_12, VAR_14, VAR_15, VAR_16, sizeof(struct nfgenmsg), VAR_17);
 if (VAR_23 == ((void*)0))
  goto nla_put_failure;

 VAR_22 = FUNC_10(VAR_23);
 VAR_22->nfgen_family = VAR_18;
 VAR_22->version = VAR_0;
 VAR_22->res_id = FUNC_3(VAR_13->nft.base_seq & 0xffff);

 if (FUNC_9(VAR_12, VAR_10, VAR_19->table->name) ||
     FUNC_9(VAR_12, VAR_8, VAR_19->name) ||
     FUNC_7(VAR_12, VAR_11, FUNC_2(VAR_19->use)) ||
     FUNC_8(VAR_12, VAR_3, FUNC_1(VAR_19->handle),
    VAR_9))
  goto nla_put_failure;

 VAR_20 = FUNC_6(VAR_12, VAR_4);
 if (!VAR_20)
  goto nla_put_failure;
 if (FUNC_7(VAR_12, VAR_6, FUNC_2(VAR_19->hooknum)) ||
     FUNC_7(VAR_12, VAR_7, FUNC_2(VAR_19->priority)))
  goto nla_put_failure;

 VAR_21 = FUNC_6(VAR_12, VAR_5);
 if (!VAR_21)
  goto nla_put_failure;

 for (VAR_24 = 0; VAR_24 < VAR_19->ops_len; VAR_24++) {
  const struct net_device *VAR_25 = FUNC_0(VAR_19->ops[VAR_24].dev);

  if (VAR_25 &&
      FUNC_9(VAR_12, VAR_2, VAR_25->name))
   goto nla_put_failure;
 }
 FUNC_5(VAR_12, VAR_21);
 FUNC_5(VAR_12, VAR_20);

 FUNC_11(VAR_12, VAR_23);
 return 0;

nla_put_failure:
 FUNC_13(VAR_12, VAR_23);
 return -1;
}
