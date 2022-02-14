
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {int len; } ;
struct nlmsghdr {int dummy; } ;
struct nfgenmsg {int res_id; int version; int nfgen_family; } ;
struct ip_conntrack_stat {int search_restart; int error; int early_drop; int drop; int insert_failed; int insert; int ignore; int invalid; int found; } ;
typedef int __u16 ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 int FUNC_4 (struct sk_buff*,struct nlmsghdr*) ;
 struct nfgenmsg* FUNC_5 (struct nlmsghdr*) ;
 int FUNC_6 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_7 (struct sk_buff*,scalar_t__,scalar_t__,unsigned int,int,unsigned int) ;

__attribute__((used)) static int
FUNC_8(struct sk_buff *VAR_14, u32 VAR_15, u32 VAR_16,
    __u16 VAR_17, const struct ip_conntrack_stat *VAR_18)
{
 struct nlmsghdr *VAR_19;
 struct nfgenmsg *VAR_20;
 unsigned int VAR_21 = VAR_15 ? VAR_13 : 0, VAR_22;

 VAR_22 = FUNC_2(VAR_12,
         VAR_10);
 VAR_19 = FUNC_7(VAR_14, VAR_15, VAR_16, VAR_22, sizeof(*VAR_20), VAR_21);
 if (VAR_19 == ((void*)0))
  goto nlmsg_failure;

 VAR_20 = FUNC_5(VAR_19);
 VAR_20->nfgen_family = VAR_0;
 VAR_20->version = VAR_11;
 VAR_20->res_id = FUNC_1(VAR_17);

 if (FUNC_3(VAR_14, VAR_4, FUNC_0(VAR_18->found)) ||
     FUNC_3(VAR_14, VAR_8, FUNC_0(VAR_18->invalid)) ||
     FUNC_3(VAR_14, VAR_5, FUNC_0(VAR_18->ignore)) ||
     FUNC_3(VAR_14, VAR_6, FUNC_0(VAR_18->insert)) ||
     FUNC_3(VAR_14, VAR_7,
    FUNC_0(VAR_18->insert_failed)) ||
     FUNC_3(VAR_14, VAR_1, FUNC_0(VAR_18->drop)) ||
     FUNC_3(VAR_14, VAR_2, FUNC_0(VAR_18->early_drop)) ||
     FUNC_3(VAR_14, VAR_3, FUNC_0(VAR_18->error)) ||
     FUNC_3(VAR_14, VAR_9,
    FUNC_0(VAR_18->search_restart)))
  goto nla_put_failure;

 FUNC_6(VAR_14, VAR_19);
 return VAR_14->len;

nla_put_failure:
nlmsg_failure:
 FUNC_4(VAR_14, VAR_19);
 return -1;
}
