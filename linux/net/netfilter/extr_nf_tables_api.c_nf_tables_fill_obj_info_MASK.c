
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nft_table {int name; } ;
struct TYPE_6__ {int name; } ;
struct nft_object {int handle; int use; TYPE_4__* ops; TYPE_2__ key; } ;
struct nfgenmsg {int nfgen_family; int res_id; int version; } ;
struct TYPE_5__ {int base_seq; } ;
struct net {TYPE_1__ nft; } ;
struct TYPE_8__ {TYPE_3__* type; } ;
struct TYPE_7__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,struct nft_object*,int) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;
 struct nfgenmsg* FUNC_8 (struct nlmsghdr*) ;
 int FUNC_9 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_10 (struct sk_buff*,int ,int ,int,int,int ) ;
 int FUNC_11 (struct sk_buff*,struct nlmsghdr*) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_9, struct net *VAR_10,
       u32 VAR_11, u32 VAR_12, int VAR_13, u32 VAR_14,
       int VAR_15, const struct nft_table *VAR_16,
       struct nft_object *VAR_17, bool VAR_18)
{
 struct nfgenmsg *VAR_19;
 struct nlmsghdr *VAR_20;

 VAR_13 = FUNC_3(VAR_1, VAR_13);
 VAR_20 = FUNC_10(VAR_9, VAR_11, VAR_12, VAR_13, sizeof(struct nfgenmsg), VAR_14);
 if (VAR_20 == ((void*)0))
  goto nla_put_failure;

 VAR_19 = FUNC_8(VAR_20);
 VAR_19->nfgen_family = VAR_15;
 VAR_19->version = VAR_0;
 VAR_19->res_id = FUNC_2(VAR_10->nft.base_seq & 0xffff);

 if (FUNC_7(VAR_9, VAR_6, VAR_16->name) ||
     FUNC_7(VAR_9, VAR_4, VAR_17->key.name) ||
     FUNC_5(VAR_9, VAR_7, FUNC_1(VAR_17->ops->type->type)) ||
     FUNC_5(VAR_9, VAR_8, FUNC_1(VAR_17->use)) ||
     FUNC_4(VAR_9, VAR_2, VAR_17, VAR_18) ||
     FUNC_6(VAR_9, VAR_3, FUNC_0(VAR_17->handle),
    VAR_5))
  goto nla_put_failure;

 FUNC_9(VAR_9, VAR_20);
 return 0;

nla_put_failure:
 FUNC_11(VAR_9, VAR_20);
 return -1;
}
