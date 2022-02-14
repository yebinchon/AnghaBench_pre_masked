
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct net_bridge_port {int dummy; } ;
struct TYPE_9__ {scalar_t__ ip4; } ;
struct TYPE_8__ {TYPE_4__ u; } ;
struct TYPE_10__ {int port; TYPE_3__ addr; } ;
struct TYPE_7__ {int timer; } ;
struct TYPE_6__ {int timer; } ;
struct net_bridge {TYPE_5__ ip4_querier; TYPE_2__ ip4_other_query; TYPE_1__ ip4_own_query; } ;
typedef scalar_t__ __be32 ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,struct net_bridge_port*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct net_bridge *VAR_0,
         struct net_bridge_port *VAR_1,
         __be32 VAR_2)
{
 if (!FUNC_2(&VAR_0->ip4_own_query.timer) &&
     !FUNC_2(&VAR_0->ip4_other_query.timer))
  goto update;

 if (!VAR_0->ip4_querier.addr.u.ip4)
  goto update;

 if (FUNC_0(VAR_2) <= FUNC_0(VAR_0->ip4_querier.addr.u.ip4))
  goto update;

 return 0;

update:
 VAR_0->ip4_querier.addr.u.ip4 = VAR_2;


 FUNC_1(VAR_0->ip4_querier.port, VAR_1);

 return 1;
}
