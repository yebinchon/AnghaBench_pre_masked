
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int perm_addr; } ;
struct failover_ops {int (* slave_link_change ) (struct net_device*,struct net_device*) ;} ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 struct net_device* FUNC_1 (int ,struct failover_ops**) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2)
{
 struct net_device *VAR_3;
 struct failover_ops *VAR_4;

 if (!FUNC_2(VAR_2))
  goto done;

 FUNC_0();

 VAR_3 = FUNC_1(VAR_2->perm_addr, &VAR_4);
 if (!VAR_3)
  goto done;

 if (!FUNC_3(VAR_3))
  goto done;

 if (VAR_4 && VAR_4->slave_link_change &&
     !VAR_4->slave_link_change(VAR_2, VAR_3))
  return VAR_1;

done:
 return VAR_0;
}
