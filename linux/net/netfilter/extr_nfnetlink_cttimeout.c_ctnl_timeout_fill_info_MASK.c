
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int len; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct nfgenmsg {scalar_t__ res_id; int version; int nfgen_family; } ;
struct TYPE_3__ {int (* obj_to_nlattr ) (struct sk_buff*,int *) ;} ;
struct nf_conntrack_l4proto {TYPE_1__ ctnl_timeout; int l4proto; } ;
struct TYPE_4__ {int data; int l3num; struct nf_conntrack_l4proto* l4proto; } ;
struct ctnl_timeout {TYPE_2__ timeout; int refcnt; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_4 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int ) ;
 int FUNC_9 (struct sk_buff*,struct nlmsghdr*) ;
 struct nfgenmsg* FUNC_10 (struct nlmsghdr*) ;
 int FUNC_11 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_12 (struct sk_buff*,scalar_t__,scalar_t__,int,int,unsigned int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct sk_buff*,int *) ;

__attribute__((used)) static int
FUNC_15(struct sk_buff *VAR_9, u32 VAR_10, u32 VAR_11, u32 VAR_12,
         int VAR_13, struct ctnl_timeout *VAR_14)
{
 struct nlmsghdr *VAR_15;
 struct nfgenmsg *VAR_16;
 unsigned int VAR_17 = VAR_10 ? VAR_8 : 0;
 const struct nf_conntrack_l4proto *VAR_18 = VAR_14->timeout.l4proto;
 struct nlattr *VAR_19;
 int VAR_20;

 VAR_13 = FUNC_2(VAR_7, VAR_13);
 VAR_15 = FUNC_12(VAR_9, VAR_10, VAR_11, VAR_13, sizeof(*VAR_16), VAR_17);
 if (VAR_15 == ((void*)0))
  goto nlmsg_failure;

 VAR_16 = FUNC_10(VAR_15);
 VAR_16->nfgen_family = VAR_0;
 VAR_16->version = VAR_6;
 VAR_16->res_id = 0;

 if (FUNC_7(VAR_9, VAR_4, VAR_14->name) ||
     FUNC_5(VAR_9, VAR_2,
    FUNC_1(VAR_14->timeout.l3num)) ||
     FUNC_8(VAR_9, VAR_3, VAR_18->l4proto) ||
     FUNC_6(VAR_9, VAR_5,
    FUNC_0(FUNC_13(&VAR_14->refcnt))))
  goto nla_put_failure;

 VAR_19 = FUNC_4(VAR_9, VAR_1);
 if (!VAR_19)
  goto nla_put_failure;

 VAR_20 = VAR_18->ctnl_timeout.obj_to_nlattr(VAR_9, &VAR_14->timeout.data);
 if (VAR_20 < 0)
  goto nla_put_failure;

 FUNC_3(VAR_9, VAR_19);

 FUNC_11(VAR_9, VAR_15);
 return VAR_9->len;

nlmsg_failure:
nla_put_failure:
 FUNC_9(VAR_9, VAR_15);
 return -1;
}
