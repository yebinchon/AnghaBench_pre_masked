
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct sk_buff {int len; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct nfgenmsg {scalar_t__ res_id; int version; int nfgen_family; } ;
struct TYPE_2__ {int (* obj_to_nlattr ) (struct sk_buff*,unsigned int const*) ;} ;
struct nf_conntrack_l4proto {TYPE_1__ ctnl_timeout; int l4proto; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 int FUNC_6 (struct sk_buff*,struct nlmsghdr*) ;
 struct nfgenmsg* FUNC_7 (struct nlmsghdr*) ;
 int FUNC_8 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_9 (struct sk_buff*,scalar_t__,scalar_t__,int,int,unsigned int) ;
 int FUNC_10 (struct sk_buff*,unsigned int const*) ;

__attribute__((used)) static int
FUNC_11(struct net *VAR_7, struct sk_buff *VAR_8, u32 VAR_9,
       u32 VAR_10, u32 VAR_11, int VAR_12, u16 VAR_13,
       const struct nf_conntrack_l4proto *VAR_14,
       const unsigned int *VAR_15)
{
 struct nlmsghdr *VAR_16;
 struct nfgenmsg *VAR_17;
 unsigned int VAR_18 = VAR_9 ? VAR_6 : 0;
 struct nlattr *VAR_19;
 int VAR_20;

 VAR_12 = FUNC_1(VAR_5, VAR_12);
 VAR_16 = FUNC_9(VAR_8, VAR_9, VAR_10, VAR_12, sizeof(*VAR_17), VAR_18);
 if (VAR_16 == ((void*)0))
  goto nlmsg_failure;

 VAR_17 = FUNC_7(VAR_16);
 VAR_17->nfgen_family = VAR_0;
 VAR_17->version = VAR_4;
 VAR_17->res_id = 0;

 if (FUNC_4(VAR_8, VAR_2, FUNC_0(VAR_13)) ||
     FUNC_5(VAR_8, VAR_3, VAR_14->l4proto))
  goto nla_put_failure;

 VAR_19 = FUNC_3(VAR_8, VAR_1);
 if (!VAR_19)
  goto nla_put_failure;

 VAR_20 = VAR_14->ctnl_timeout.obj_to_nlattr(VAR_8, VAR_15);
 if (VAR_20 < 0)
  goto nla_put_failure;

 FUNC_2(VAR_8, VAR_19);

 FUNC_8(VAR_8, VAR_16);
 return VAR_8->len;

nlmsg_failure:
nla_put_failure:
 FUNC_6(VAR_8, VAR_16);
 return -1;
}
