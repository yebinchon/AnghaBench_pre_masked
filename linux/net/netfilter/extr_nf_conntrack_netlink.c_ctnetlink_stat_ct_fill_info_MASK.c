
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int len; } ;
struct nlmsghdr {int dummy; } ;
struct nfgenmsg {scalar_t__ res_id; int version; int nfgen_family; } ;
struct TYPE_2__ {int count; } ;
struct net {TYPE_1__ ct; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (unsigned int) ;
 unsigned int VAR_7 ;
 unsigned int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 int FUNC_4 (struct sk_buff*,struct nlmsghdr*) ;
 struct nfgenmsg* FUNC_5 (struct nlmsghdr*) ;
 int FUNC_6 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_7 (struct sk_buff*,scalar_t__,scalar_t__,unsigned int,int,unsigned int) ;

__attribute__((used)) static int
FUNC_8(struct sk_buff *VAR_8, u32 VAR_9, u32 VAR_10, u32 VAR_11,
       struct net *VAR_12)
{
 struct nlmsghdr *VAR_13;
 struct nfgenmsg *VAR_14;
 unsigned int VAR_15 = VAR_9 ? VAR_6 : 0, VAR_16;
 unsigned int VAR_17 = FUNC_0(&VAR_12->ct.count);

 VAR_16 = FUNC_2(VAR_5, VAR_3);
 VAR_13 = FUNC_7(VAR_8, VAR_9, VAR_10, VAR_16, sizeof(*VAR_14), VAR_15);
 if (VAR_13 == ((void*)0))
  goto nlmsg_failure;

 VAR_14 = FUNC_5(VAR_13);
 VAR_14->nfgen_family = VAR_0;
 VAR_14->version = VAR_4;
 VAR_14->res_id = 0;

 if (FUNC_3(VAR_8, VAR_1, FUNC_1(VAR_17)))
  goto nla_put_failure;

 if (FUNC_3(VAR_8, VAR_2, FUNC_1(VAR_7)))
  goto nla_put_failure;

 FUNC_6(VAR_8, VAR_13);
 return VAR_8->len;

nla_put_failure:
nlmsg_failure:
 FUNC_4(VAR_8, VAR_13);
 return -1;
}
