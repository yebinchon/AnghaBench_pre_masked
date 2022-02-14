
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nfgenmsg {scalar_t__ res_id; int version; int nfgen_family; } ;
typedef enum ipset_cmd { ____Placeholder_ipset_cmd } ipset_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 struct nfgenmsg* FUNC_1 (struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_2 (struct sk_buff*,int ,int ,int ,int,unsigned int) ;

__attribute__((used)) static struct nlmsghdr *
FUNC_3(struct sk_buff *VAR_3, u32 VAR_4, u32 VAR_5, unsigned int VAR_6,
   enum ipset_cmd VAR_7)
{
 struct nlmsghdr *VAR_8;
 struct nfgenmsg *VAR_9;

 VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_5, FUNC_0(VAR_1, VAR_7),
   sizeof(*VAR_9), VAR_6);
 if (!VAR_8)
  return ((void*)0);

 VAR_9 = FUNC_1(VAR_8);
 VAR_9->nfgen_family = VAR_2;
 VAR_9->version = VAR_0;
 VAR_9->res_id = 0;

 return VAR_8;
}
