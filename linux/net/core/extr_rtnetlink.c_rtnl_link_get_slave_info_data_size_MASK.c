
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link_ops {size_t (* get_slave_size ) (struct net_device*,struct net_device const*) ;} ;
struct nlattr {int dummy; } ;
struct net_device {struct rtnl_link_ops* rtnl_link_ops; } ;


 struct net_device* FUNC_0 (struct net_device*) ;
 size_t FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 size_t FUNC_4 (struct net_device*,struct net_device const*) ;

__attribute__((used)) static size_t FUNC_5(const struct net_device *VAR_0)
{
 struct net_device *VAR_1;
 const struct rtnl_link_ops *VAR_2;
 size_t VAR_3 = 0;

 FUNC_2();

 VAR_1 = FUNC_0((struct net_device *)VAR_0);
 if (!VAR_1)
  goto out;

 VAR_2 = VAR_1->rtnl_link_ops;
 if (!VAR_2 || !VAR_2->get_slave_size)
  goto out;

 VAR_3 = FUNC_1(sizeof(struct nlattr)) +
        VAR_2->get_slave_size(VAR_1, VAR_0);

out:
 FUNC_3();
 return VAR_3;
}
