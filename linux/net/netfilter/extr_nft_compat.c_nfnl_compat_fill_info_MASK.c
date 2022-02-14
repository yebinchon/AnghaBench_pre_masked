
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct sk_buff {int len; } ;
struct nlmsghdr {int dummy; } ;
struct nfgenmsg {scalar_t__ res_id; int version; int nfgen_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,char const*) ;
 int FUNC_4 (struct sk_buff*,struct nlmsghdr*) ;
 struct nfgenmsg* FUNC_5 (struct nlmsghdr*) ;
 int FUNC_6 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_7 (struct sk_buff*,scalar_t__,scalar_t__,int,int,unsigned int) ;

__attribute__((used)) static int
FUNC_8(struct sk_buff *VAR_6, u32 VAR_7, u32 VAR_8, u32 VAR_9,
        int VAR_10, u16 VAR_11, const char *VAR_12,
        int VAR_13, int VAR_14)
{
 struct nlmsghdr *VAR_15;
 struct nfgenmsg *VAR_16;
 unsigned int VAR_17 = VAR_7 ? VAR_5 : 0;

 VAR_10 = FUNC_1(VAR_1, VAR_10);
 VAR_15 = FUNC_7(VAR_6, VAR_7, VAR_8, VAR_10, sizeof(*VAR_16), VAR_17);
 if (VAR_15 == ((void*)0))
  goto nlmsg_failure;

 VAR_16 = FUNC_5(VAR_15);
 VAR_16->nfgen_family = VAR_11;
 VAR_16->version = VAR_0;
 VAR_16->res_id = 0;

 if (FUNC_3(VAR_6, VAR_2, VAR_12) ||
     FUNC_2(VAR_6, VAR_3, FUNC_0(VAR_13)) ||
     FUNC_2(VAR_6, VAR_4, FUNC_0(VAR_14)))
  goto nla_put_failure;

 FUNC_6(VAR_6, VAR_15);
 return VAR_6->len;

nlmsg_failure:
nla_put_failure:
 FUNC_4(VAR_6, VAR_15);
 return -1;
}
