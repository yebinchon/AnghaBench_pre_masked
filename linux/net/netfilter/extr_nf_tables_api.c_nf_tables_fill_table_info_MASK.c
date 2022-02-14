
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nft_table {int handle; int use; int flags; int name; } ;
struct nfgenmsg {int nfgen_family; int res_id; int version; } ;
struct TYPE_2__ {int base_seq; } ;
struct net {TYPE_1__ nft; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 struct nfgenmsg* FUNC_7 (struct nlmsghdr*) ;
 int FUNC_8 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_9 (struct sk_buff*,int ,int ,int,int,int ) ;
 int FUNC_10 (struct sk_buff*,struct nlmsghdr*) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_7, struct net *VAR_8,
         u32 VAR_9, u32 VAR_10, int VAR_11, u32 VAR_12,
         int VAR_13, const struct nft_table *VAR_14)
{
 struct nlmsghdr *VAR_15;
 struct nfgenmsg *VAR_16;

 VAR_11 = FUNC_3(VAR_1, VAR_11);
 VAR_15 = FUNC_9(VAR_7, VAR_9, VAR_10, VAR_11, sizeof(struct nfgenmsg), VAR_12);
 if (VAR_15 == ((void*)0))
  goto nla_put_failure;

 VAR_16 = FUNC_7(VAR_15);
 VAR_16->nfgen_family = VAR_13;
 VAR_16->version = VAR_0;
 VAR_16->res_id = FUNC_2(VAR_8->nft.base_seq & 0xffff);

 if (FUNC_6(VAR_7, VAR_4, VAR_14->name) ||
     FUNC_4(VAR_7, VAR_2, FUNC_1(VAR_14->flags)) ||
     FUNC_4(VAR_7, VAR_6, FUNC_1(VAR_14->use)) ||
     FUNC_5(VAR_7, VAR_3, FUNC_0(VAR_14->handle),
    VAR_5))
  goto nla_put_failure;

 FUNC_8(VAR_7, VAR_15);
 return 0;

nla_put_failure:
 FUNC_10(VAR_7, VAR_15);
 return -1;
}
