
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link_ops {int dummy; } ;
struct net_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct net_device*,struct rtnl_link_ops const*) ;
 scalar_t__ FUNC_1 (struct net_device*,int) ;

__attribute__((used)) static bool FUNC_2(struct net_device *VAR_0,
          int VAR_1,
          const struct rtnl_link_ops *VAR_2)
{
 if (FUNC_1(VAR_0, VAR_1) ||
     FUNC_0(VAR_0, VAR_2))
  return 1;

 return 0;
}
