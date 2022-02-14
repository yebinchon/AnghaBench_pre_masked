
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int watchdog_timeo; int * netdev_ops; int priv_flags; int max_mtu; scalar_t__ min_mtu; int addr_len; int broadcast; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*) ;

void FUNC_2(struct net_device *VAR_5)
{

 FUNC_0(VAR_5->broadcast);
 VAR_5->addr_len = VAR_0;

 FUNC_1(VAR_5);
 VAR_5->min_mtu = 0;
 VAR_5->max_mtu = VAR_1;
 VAR_5->priv_flags &= ~VAR_3;
 VAR_5->netdev_ops = &VAR_4;

 VAR_5->watchdog_timeo = VAR_2 * 2;
}
