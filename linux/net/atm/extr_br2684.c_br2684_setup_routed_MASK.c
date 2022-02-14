
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int hard_header_len; int flags; int tx_queue_len; int type; int max_mtu; scalar_t__ min_mtu; int mtu; scalar_t__ addr_len; int * netdev_ops; } ;
struct br2684_dev {int brvccs; struct net_device* net_dev; } ;
typedef int llc_oui_ipv4 ;


 int VAR_0 ;
 struct br2684_dev* FUNC_0 (struct net_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_7)
{
 struct br2684_dev *VAR_8 = FUNC_0(VAR_7);

 VAR_8->net_dev = VAR_7;
 VAR_7->hard_header_len = sizeof(llc_oui_ipv4);
 VAR_7->netdev_ops = &VAR_6;
 VAR_7->addr_len = 0;
 VAR_7->mtu = VAR_1;
 VAR_7->min_mtu = 0;
 VAR_7->max_mtu = VAR_2;
 VAR_7->type = VAR_0;
 VAR_7->flags = VAR_5 | VAR_4 | VAR_3;
 VAR_7->tx_queue_len = 100;
 FUNC_1(&VAR_8->brvccs);
}
