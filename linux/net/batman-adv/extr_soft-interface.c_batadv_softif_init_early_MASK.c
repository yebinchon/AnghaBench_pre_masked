
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int needs_free_netdev; int features; int * ethtool_ops; int mtu; int priv_flags; int priv_destructor; int * netdev_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_8)
{
 FUNC_1(VAR_8);

 VAR_8->netdev_ops = &VAR_6;
 VAR_8->needs_free_netdev = 1;
 VAR_8->priv_destructor = VAR_7;
 VAR_8->features |= VAR_2 | VAR_4;
 VAR_8->features |= VAR_3;
 VAR_8->priv_flags |= VAR_1;




 VAR_8->mtu = VAR_0;


 FUNC_0(VAR_8);

 VAR_8->ethtool_ops = &VAR_5;
}
