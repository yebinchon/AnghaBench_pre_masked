
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {TYPE_1__* rtnl_link_ops; } ;
struct net {int dummy; } ;
struct TYPE_2__ {struct net* (* get_link_net ) (struct net_device const*) ;} ;


 struct net* FUNC_0 (struct net_device const*) ;

__attribute__((used)) static struct net *FUNC_1(const struct net_device *VAR_0,
          struct net *VAR_1)
{
 if (!VAR_0->rtnl_link_ops)
  return VAR_1;

 if (!VAR_0->rtnl_link_ops->get_link_net)
  return VAR_1;

 return VAR_0->rtnl_link_ops->get_link_net(VAR_0);
}
