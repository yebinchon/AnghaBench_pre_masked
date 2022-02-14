
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct net_bridge_port {TYPE_1__* br; } ;
struct TYPE_2__ {struct net_device* dev; } ;


 struct net_bridge_port* FUNC_0 (struct net_device const*) ;

__attribute__((used)) static inline struct net_device *FUNC_1(const struct net_device *VAR_0)
{
 struct net_bridge_port *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 return VAR_1 ? VAR_1->br->dev : ((void*)0);
}
