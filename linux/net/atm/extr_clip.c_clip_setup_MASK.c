
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int neigh_priv_len; int tx_queue_len; int mtu; int hard_header_len; int type; int * netdev_ops; } ;
struct atmarp_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_4)
{
 VAR_4->netdev_ops = &VAR_3;
 VAR_4->type = VAR_0;
 VAR_4->neigh_priv_len = sizeof(struct atmarp_entry);
 VAR_4->hard_header_len = VAR_1;
 VAR_4->mtu = VAR_2;
 VAR_4->tx_queue_len = 100;





 FUNC_0(VAR_4);
}
