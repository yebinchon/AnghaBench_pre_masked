
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct batadv_forw_packet {TYPE_2__* if_outgoing; TYPE_1__* if_incoming; } ;
struct TYPE_4__ {struct net_device* soft_iface; } ;
struct TYPE_3__ {scalar_t__ if_status; struct net_device* soft_iface; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct batadv_forw_packet*,TYPE_2__*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(struct batadv_forw_packet *VAR_1)
{
 struct net_device *VAR_2;

 if (!VAR_1->if_incoming) {
  FUNC_2("Error - can't forward packet: incoming iface not specified\n");
  return;
 }

 VAR_2 = VAR_1->if_incoming->soft_iface;

 if (FUNC_0(!VAR_1->if_outgoing))
  return;

 if (FUNC_0(VAR_1->if_outgoing->soft_iface != VAR_2))
  return;

 if (VAR_1->if_incoming->if_status != VAR_0)
  return;


 FUNC_1(VAR_1, VAR_1->if_outgoing);
}
