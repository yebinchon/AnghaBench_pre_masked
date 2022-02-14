
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int priv_flags; int perm_addr; } ;
struct failover_ops {int (* slave_unregister ) (struct net_device*,struct net_device*) ;scalar_t__ (* slave_pre_unregister ) (struct net_device*,struct net_device*) ;} ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct net_device* FUNC_1 (int ,struct failover_ops**) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*,struct net_device*) ;
 int FUNC_6 (struct net_device*,struct net_device*) ;

int FUNC_7(struct net_device *VAR_4)
{
 struct net_device *VAR_5;
 struct failover_ops *VAR_6;

 if (!FUNC_4(VAR_4))
  goto done;

 FUNC_0();

 VAR_5 = FUNC_1(VAR_4->perm_addr, &VAR_6);
 if (!VAR_5)
  goto done;

 if (VAR_6 && VAR_6->slave_pre_unregister &&
     VAR_6->slave_pre_unregister(VAR_4, VAR_5))
  goto done;

 FUNC_2(VAR_4);
 FUNC_3(VAR_4, VAR_5);
 VAR_4->priv_flags &= ~(VAR_0 | VAR_1);

 if (VAR_6 && VAR_6->slave_unregister &&
     !VAR_6->slave_unregister(VAR_4, VAR_5))
  return VAR_3;

done:
 return VAR_2;
}
