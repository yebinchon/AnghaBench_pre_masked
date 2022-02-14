
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int tx_queue_len; int* broadcast; int flags; int addr_len; int mtu; int hard_header_len; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_0(struct net_device *VAR_7)
{


 VAR_7->type = VAR_0;
 VAR_7->hard_header_len = VAR_5;
 VAR_7->mtu = VAR_6;
 VAR_7->addr_len = VAR_4;
 VAR_7->tx_queue_len = 10;

 VAR_7->broadcast[0] = 0xFF;

 VAR_7->flags = VAR_1|VAR_2|VAR_3;
}
