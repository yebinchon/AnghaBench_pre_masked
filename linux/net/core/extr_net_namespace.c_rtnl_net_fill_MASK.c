
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rtgenmsg {int rtgen_family; } ;
struct nlmsghdr {int dummy; } ;
struct net_fill_args {int ref_nsid; scalar_t__ add_ref; int nsid; int flags; int cmd; int seq; int portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,int ) ;
 int FUNC_1 (struct sk_buff*,struct nlmsghdr*) ;
 struct rtgenmsg* FUNC_2 (struct nlmsghdr*) ;
 int FUNC_3 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_4 (struct sk_buff*,int ,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_4, struct net_fill_args *VAR_5)
{
 struct nlmsghdr *VAR_6;
 struct rtgenmsg *VAR_7;

 VAR_6 = FUNC_4(VAR_4, VAR_5->portid, VAR_5->seq, VAR_5->cmd, sizeof(*VAR_7),
   VAR_5->flags);
 if (!VAR_6)
  return -VAR_1;

 VAR_7 = FUNC_2(VAR_6);
 VAR_7->rtgen_family = VAR_0;

 if (FUNC_0(VAR_4, VAR_3, VAR_5->nsid))
  goto nla_put_failure;

 if (VAR_5->add_ref &&
     FUNC_0(VAR_4, VAR_2, VAR_5->ref_nsid))
  goto nla_put_failure;

 FUNC_3(VAR_4, VAR_6);
 return 0;

nla_put_failure:
 FUNC_1(VAR_4, VAR_6);
 return -VAR_1;
}
