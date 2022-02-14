
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xps_dev_maps {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {int sender_cpu; struct sock* sk; } ;
struct net_device {int num_rx_queues; int xps_cpus_map; int xps_rxqs_map; } ;


 int FUNC_0 (struct net_device*,struct sk_buff*,struct xps_dev_maps*,unsigned int) ;
 struct xps_dev_maps* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2, struct net_device *VAR_3,
    struct sk_buff *VAR_4)
{
 return -1;

}
