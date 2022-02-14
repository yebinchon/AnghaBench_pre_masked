
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_bridge_port {int flags; } ;
struct TYPE_2__ {scalar_t__ src_port_isolated; } ;


 TYPE_1__* FUNC_0 (struct sk_buff const*) ;
 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_1(const struct net_bridge_port *VAR_1,
       const struct sk_buff *VAR_2)
{
 return FUNC_0(VAR_2)->src_port_isolated &&
        (VAR_1->flags & VAR_0);
}
