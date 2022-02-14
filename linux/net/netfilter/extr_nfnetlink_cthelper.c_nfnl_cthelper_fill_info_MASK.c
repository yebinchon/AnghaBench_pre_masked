
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {int len; } ;
struct nlmsghdr {int dummy; } ;
struct nfgenmsg {scalar_t__ res_id; int version; int nfgen_family; } ;
struct nf_conntrack_helper {int queue_num; int data_len; int flags; int name; } ;


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
 unsigned int VAR_10 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct sk_buff*,struct nf_conntrack_helper*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,struct nf_conntrack_helper*) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 int FUNC_6 (struct sk_buff*,struct nlmsghdr*) ;
 struct nfgenmsg* FUNC_7 (struct nlmsghdr*) ;
 int FUNC_8 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_9 (struct sk_buff*,scalar_t__,scalar_t__,int,int,unsigned int) ;

__attribute__((used)) static int
FUNC_10(struct sk_buff *VAR_11, u32 VAR_12, u32 VAR_13, u32 VAR_14,
   int VAR_15, struct nf_conntrack_helper *VAR_16)
{
 struct nlmsghdr *VAR_17;
 struct nfgenmsg *VAR_18;
 unsigned int VAR_19 = VAR_12 ? VAR_10 : 0;
 int VAR_20;

 VAR_15 = FUNC_3(VAR_8, VAR_15);
 VAR_17 = FUNC_9(VAR_11, VAR_12, VAR_13, VAR_15, sizeof(*VAR_18), VAR_19);
 if (VAR_17 == ((void*)0))
  goto nlmsg_failure;

 VAR_18 = FUNC_7(VAR_17);
 VAR_18->nfgen_family = VAR_0;
 VAR_18->version = VAR_7;
 VAR_18->res_id = 0;

 if (FUNC_5(VAR_11, VAR_1, VAR_16->name))
  goto nla_put_failure;

 if (FUNC_4(VAR_11, VAR_3, FUNC_0(VAR_16->queue_num)))
  goto nla_put_failure;

 if (FUNC_2(VAR_11, VAR_16) < 0)
  goto nla_put_failure;

 if (FUNC_1(VAR_11, VAR_16) < 0)
  goto nla_put_failure;

 if (FUNC_4(VAR_11, VAR_2, FUNC_0(VAR_16->data_len)))
  goto nla_put_failure;

 if (VAR_16->flags & VAR_9)
  VAR_20 = VAR_6;
 else
  VAR_20 = VAR_5;

 if (FUNC_4(VAR_11, VAR_4, FUNC_0(VAR_20)))
  goto nla_put_failure;

 FUNC_8(VAR_11, VAR_17);
 return VAR_11->len;

nlmsg_failure:
nla_put_failure:
 FUNC_6(VAR_11, VAR_17);
 return -1;
}
