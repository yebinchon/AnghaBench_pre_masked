
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int rx_handler_data; } ;
struct net_bridge_port {int dummy; } ;


 struct net_bridge_port* FUNC_0 (int ) ;

__attribute__((used)) static inline struct net_bridge_port *FUNC_1(const struct net_device *VAR_0)
{
 return FUNC_0(VAR_0->rx_handler_data);
}
