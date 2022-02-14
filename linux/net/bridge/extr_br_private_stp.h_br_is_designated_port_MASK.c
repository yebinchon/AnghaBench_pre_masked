
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_bridge_port {scalar_t__ designated_port; scalar_t__ port_id; TYPE_1__* br; int designated_bridge; } ;
struct TYPE_2__ {int bridge_id; } ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static inline int FUNC_1(const struct net_bridge_port *VAR_0)
{
 return !FUNC_0(&VAR_0->designated_bridge, &VAR_0->br->bridge_id, 8) &&
  (VAR_0->designated_port == VAR_0->port_id);
}
