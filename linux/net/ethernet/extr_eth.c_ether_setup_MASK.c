
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; int broadcast; int priv_flags; int tx_queue_len; int addr_len; void* max_mtu; int min_mtu; void* mtu; void* min_header_len; void* hard_header_len; int type; int * header_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int VAR_9 ;

void FUNC_1(struct net_device *VAR_10)
{
 VAR_10->header_ops = &VAR_9;
 VAR_10->type = VAR_0;
 VAR_10->hard_header_len = VAR_4;
 VAR_10->min_header_len = VAR_4;
 VAR_10->mtu = VAR_3;
 VAR_10->min_mtu = VAR_5;
 VAR_10->max_mtu = VAR_3;
 VAR_10->addr_len = VAR_2;
 VAR_10->tx_queue_len = VAR_1;
 VAR_10->flags = VAR_6|VAR_7;
 VAR_10->priv_flags |= VAR_8;

 FUNC_0(VAR_10->broadcast);

}
