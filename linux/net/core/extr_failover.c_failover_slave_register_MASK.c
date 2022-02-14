
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_lag_upper_info {int tx_type; } ;
struct net_device {scalar_t__ type; int priv_flags; int name; int perm_addr; } ;
struct failover_ops {int (* slave_register ) (struct net_device*,struct net_device*) ;int slave_handle_frame; scalar_t__ (* slave_pre_register ) (struct net_device*,struct net_device*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct net_device* FUNC_1 (int ,struct failover_ops**) ;
 int FUNC_2 (struct net_device*,char*,int,...) ;
 int FUNC_3 (struct net_device*,struct net_device*,int *,struct netdev_lag_upper_info*,int *) ;
 int FUNC_4 (struct net_device*,int ,struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,struct net_device*) ;
 scalar_t__ FUNC_7 (struct net_device*,struct net_device*) ;
 int FUNC_8 (struct net_device*,struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_6)
{
 struct netdev_lag_upper_info VAR_7;
 struct net_device *VAR_8;
 struct failover_ops *VAR_9;
 int VAR_10;

 if (VAR_6->type != VAR_0)
  goto done;

 FUNC_0();

 VAR_8 = FUNC_1(VAR_6->perm_addr, &VAR_9);
 if (!VAR_8)
  goto done;

 if (VAR_9 && VAR_9->slave_pre_register &&
     VAR_9->slave_pre_register(VAR_6, VAR_8))
  goto done;

 VAR_10 = FUNC_4(VAR_6, VAR_9->slave_handle_frame,
      VAR_8);
 if (VAR_10) {
  FUNC_2(VAR_6, "can not register failover rx handler (err = %d)\n",
      VAR_10);
  goto done;
 }

 VAR_7.tx_type = VAR_3;
 VAR_10 = FUNC_3(VAR_6, VAR_8, ((void*)0),
        &VAR_7, ((void*)0));
 if (VAR_10) {
  FUNC_2(VAR_6, "can not set failover device %s (err = %d)\n",
      VAR_8->name, VAR_10);
  goto err_upper_link;
 }

 VAR_6->priv_flags |= (VAR_1 | VAR_2);

 if (VAR_9 && VAR_9->slave_register &&
     !VAR_9->slave_register(VAR_6, VAR_8))
  return VAR_5;

 FUNC_6(VAR_6, VAR_8);
 VAR_6->priv_flags &= ~(VAR_1 | VAR_2);
err_upper_link:
 FUNC_5(VAR_6);
done:
 return VAR_4;
}
