
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; int needs_free_netdev; int * header_ops; int * netdev_ops; int tx_queue_len; scalar_t__ watchdog_timeo; scalar_t__ needed_tailroom; scalar_t__ hard_header_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(struct net_device *VAR_5)
{
 VAR_5->hard_header_len = 0;
 VAR_5->needed_tailroom = 0;
 VAR_5->flags = VAR_2 | VAR_1;
 VAR_5->watchdog_timeo = 0;
 VAR_5->tx_queue_len = VAR_0;

 VAR_5->netdev_ops = &VAR_4;
 VAR_5->header_ops = &VAR_3;
 VAR_5->needs_free_netdev = 1;
}
