
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int needs_free_netdev; int priv_flags; int features; int priv_destructor; int * netdev_ops; scalar_t__ max_mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_5)
{

 FUNC_0(VAR_5);

 VAR_5->max_mtu = 0;
 VAR_5->netdev_ops = &VAR_4;
 VAR_5->needs_free_netdev = 1;
 VAR_5->priv_destructor = VAR_3;

 VAR_5->features |= VAR_2;
 VAR_5->priv_flags &= ~VAR_1;
 VAR_5->priv_flags |= VAR_0;
 FUNC_1(VAR_5);
}
