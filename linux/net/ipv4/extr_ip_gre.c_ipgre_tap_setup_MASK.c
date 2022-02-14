
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int priv_flags; int * netdev_ops; scalar_t__ max_mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct net_device*,int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_4)
{
 FUNC_0(VAR_4);
 VAR_4->max_mtu = 0;
 VAR_4->netdev_ops = &VAR_3;
 VAR_4->priv_flags &= ~VAR_1;
 VAR_4->priv_flags |= VAR_0;
 FUNC_1(VAR_4, VAR_2);
}
