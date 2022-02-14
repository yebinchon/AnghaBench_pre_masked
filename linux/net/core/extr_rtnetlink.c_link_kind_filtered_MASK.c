
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link_ops {int dummy; } ;
struct net_device {struct rtnl_link_ops const* rtnl_link_ops; } ;



__attribute__((used)) static bool FUNC_0(const struct net_device *VAR_0,
          const struct rtnl_link_ops *VAR_1)
{
 if (VAR_1 && VAR_0->rtnl_link_ops != VAR_1)
  return 1;

 return 0;
}
