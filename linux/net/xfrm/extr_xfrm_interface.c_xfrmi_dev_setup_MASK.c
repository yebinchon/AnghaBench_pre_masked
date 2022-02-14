
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int needs_free_netdev; int broadcast; int priv_destructor; int flags; int addr_len; void* max_mtu; int min_mtu; void* mtu; void* min_header_len; void* hard_header_len; int type; int * netdev_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_8)
{
 VAR_8->netdev_ops = &VAR_7;
 VAR_8->type = VAR_0;
 VAR_8->hard_header_len = VAR_3;
 VAR_8->min_header_len = VAR_3;
 VAR_8->mtu = VAR_2;
 VAR_8->min_mtu = VAR_4;
 VAR_8->max_mtu = VAR_2;
 VAR_8->addr_len = VAR_1;
 VAR_8->flags = VAR_5;
 VAR_8->needs_free_netdev = 1;
 VAR_8->priv_destructor = VAR_6;
 FUNC_1(VAR_8);

 FUNC_0(VAR_8->broadcast);
}
