
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {struct dcbnl_rtnl_ops* dcbnl_ops; } ;
struct dcbnl_rtnl_ops {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1, struct nlmsghdr *VAR_2,
    u32 VAR_3, struct nlattr **VAR_4, struct sk_buff *VAR_5)
{
 const struct dcbnl_rtnl_ops *VAR_6 = VAR_1->dcbnl_ops;

 if (!VAR_6)
  return -VAR_0;

 return FUNC_0(VAR_5, VAR_1);
}
