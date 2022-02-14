
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link_ops {int (* dellink ) (struct net_device*,int *) ;} ;
struct net_device {struct rtnl_link_ops* rtnl_link_ops; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct net_device*,int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct net_device *VAR_2)
{
 const struct rtnl_link_ops *VAR_3;
 FUNC_0(VAR_1);

 VAR_3 = VAR_2->rtnl_link_ops;
 if (!VAR_3 || !VAR_3->dellink)
  return -VAR_0;

 VAR_3->dellink(VAR_2, &VAR_1);
 FUNC_2(&VAR_1);

 return 0;
}
