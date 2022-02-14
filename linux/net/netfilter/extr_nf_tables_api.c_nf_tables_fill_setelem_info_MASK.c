
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct nft_set_elem {int dummy; } ;
struct nft_set {int name; } ;
struct nft_ctx {TYPE_3__* table; TYPE_2__* net; int family; } ;
struct nfgenmsg {int res_id; int version; int nfgen_family; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_4__ {int base_seq; } ;
struct TYPE_5__ {TYPE_1__ nft; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,struct nft_set const*,struct nft_set_elem const*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_4 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 struct nfgenmsg* FUNC_6 (struct nlmsghdr*) ;
 int FUNC_7 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_8 (struct sk_buff*,int ,int ,int,int,int ) ;
 int FUNC_9 (struct sk_buff*,struct nlmsghdr*) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_5,
           const struct nft_ctx *VAR_6, u32 VAR_7,
           u32 VAR_8, int VAR_9, u16 VAR_10,
           const struct nft_set *VAR_11,
           const struct nft_set_elem *VAR_12)
{
 struct nfgenmsg *VAR_13;
 struct nlmsghdr *VAR_14;
 struct nlattr *VAR_15;
 int VAR_16;

 VAR_9 = FUNC_2(VAR_1, VAR_9);
 VAR_14 = FUNC_8(VAR_5, VAR_8, VAR_7, VAR_9, sizeof(struct nfgenmsg),
   VAR_10);
 if (VAR_14 == ((void*)0))
  goto nla_put_failure;

 VAR_13 = FUNC_6(VAR_14);
 VAR_13->nfgen_family = VAR_6->family;
 VAR_13->version = VAR_0;
 VAR_13->res_id = FUNC_0(VAR_6->net->nft.base_seq & 0xffff);

 if (FUNC_5(VAR_5, VAR_4, VAR_6->table->name))
  goto nla_put_failure;
 if (FUNC_5(VAR_5, VAR_3, VAR_11->name))
  goto nla_put_failure;

 VAR_15 = FUNC_4(VAR_5, VAR_2);
 if (VAR_15 == ((void*)0))
  goto nla_put_failure;

 VAR_16 = FUNC_1(VAR_5, VAR_11, VAR_12);
 if (VAR_16 < 0)
  goto nla_put_failure;

 FUNC_3(VAR_5, VAR_15);

 FUNC_7(VAR_5, VAR_14);
 return 0;

nla_put_failure:
 FUNC_9(VAR_5, VAR_14);
 return -1;
}
