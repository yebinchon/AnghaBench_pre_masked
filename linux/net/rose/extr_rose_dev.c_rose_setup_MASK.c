
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; int type; int addr_len; scalar_t__ hard_header_len; int * header_ops; int * netdev_ops; scalar_t__ mtu; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void FUNC_0(struct net_device *VAR_9)
{
 VAR_9->mtu = VAR_5 - 2;
 VAR_9->netdev_ops = &VAR_8;

 VAR_9->header_ops = &VAR_7;
 VAR_9->hard_header_len = VAR_1 + VAR_2 + VAR_6;
 VAR_9->addr_len = VAR_4;
 VAR_9->type = VAR_0;


 VAR_9->flags = VAR_3;
}
