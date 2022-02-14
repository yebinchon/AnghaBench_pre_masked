
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct net_bridge_port {int dummy; } ;


 struct net_bridge_port* FUNC_0 (struct net_device const*) ;
 scalar_t__ FUNC_1 (struct net_device const*) ;

__attribute__((used)) static inline struct net_bridge_port *FUNC_2(const struct net_device *VAR_0)
{
 return FUNC_1(VAR_0) ? FUNC_0(VAR_0) : ((void*)0);
}
