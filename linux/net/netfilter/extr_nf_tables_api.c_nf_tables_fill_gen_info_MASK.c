
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nfgenmsg {int res_id; int version; int nfgen_family; } ;
struct TYPE_2__ {int base_seq; } ;
struct net {TYPE_1__ nft; } ;


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
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 struct nfgenmsg* FUNC_6 (struct nlmsghdr*) ;
 int FUNC_7 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_8 (struct sk_buff*,int ,int ,int,int,int ) ;
 int FUNC_9 (struct sk_buff*,struct nlmsghdr*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_10, struct net *VAR_11,
       u32 VAR_12, u32 VAR_13)
{
 struct nlmsghdr *VAR_14;
 struct nfgenmsg *VAR_15;
 char VAR_16[VAR_8];
 int VAR_17 = FUNC_3(VAR_3, VAR_7);

 VAR_14 = FUNC_8(VAR_10, VAR_12, VAR_13, VAR_17, sizeof(struct nfgenmsg), 0);
 if (VAR_14 == ((void*)0))
  goto nla_put_failure;

 VAR_15 = FUNC_6(VAR_14);
 VAR_15->nfgen_family = VAR_0;
 VAR_15->version = VAR_2;
 VAR_15->res_id = FUNC_2(VAR_11->nft.base_seq & 0xffff);

 if (FUNC_4(VAR_10, VAR_4, FUNC_1(VAR_11->nft.base_seq)) ||
     FUNC_4(VAR_10, VAR_6, FUNC_1(FUNC_10(VAR_9))) ||
     FUNC_5(VAR_10, VAR_5, FUNC_0(VAR_16, VAR_9)))
  goto nla_put_failure;

 FUNC_7(VAR_10, VAR_14);
 return 0;

nla_put_failure:
 FUNC_9(VAR_10, VAR_14);
 return -VAR_1;
}
