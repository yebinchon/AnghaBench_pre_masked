
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_bridge_port {TYPE_1__* br; } ;
struct TYPE_6__ {unsigned char* prio; unsigned char* addr; } ;
struct TYPE_5__ {unsigned char* prio; unsigned char* addr; } ;
struct br_config_bpdu {int root_path_cost; int port_id; int forward_delay; int hello_time; int max_age; int message_age; TYPE_3__ bridge_id; TYPE_2__ root; scalar_t__ topology_change_ack; scalar_t__ topology_change; } ;
struct TYPE_4__ {scalar_t__ stp_enabled; } ;


 unsigned char VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct net_bridge_port*,unsigned char*,int) ;
 int FUNC_1 (unsigned char*,int ) ;

void FUNC_2(struct net_bridge_port *VAR_2, struct br_config_bpdu *VAR_3)
{
 unsigned char VAR_4[35];

 if (VAR_2->br->stp_enabled != VAR_1)
  return;

 VAR_4[0] = 0;
 VAR_4[1] = 0;
 VAR_4[2] = 0;
 VAR_4[3] = VAR_0;
 VAR_4[4] = (VAR_3->topology_change ? 0x01 : 0) |
  (VAR_3->topology_change_ack ? 0x80 : 0);
 VAR_4[5] = VAR_3->root.prio[0];
 VAR_4[6] = VAR_3->root.prio[1];
 VAR_4[7] = VAR_3->root.addr[0];
 VAR_4[8] = VAR_3->root.addr[1];
 VAR_4[9] = VAR_3->root.addr[2];
 VAR_4[10] = VAR_3->root.addr[3];
 VAR_4[11] = VAR_3->root.addr[4];
 VAR_4[12] = VAR_3->root.addr[5];
 VAR_4[13] = (VAR_3->root_path_cost >> 24) & 0xFF;
 VAR_4[14] = (VAR_3->root_path_cost >> 16) & 0xFF;
 VAR_4[15] = (VAR_3->root_path_cost >> 8) & 0xFF;
 VAR_4[16] = VAR_3->root_path_cost & 0xFF;
 VAR_4[17] = VAR_3->bridge_id.prio[0];
 VAR_4[18] = VAR_3->bridge_id.prio[1];
 VAR_4[19] = VAR_3->bridge_id.addr[0];
 VAR_4[20] = VAR_3->bridge_id.addr[1];
 VAR_4[21] = VAR_3->bridge_id.addr[2];
 VAR_4[22] = VAR_3->bridge_id.addr[3];
 VAR_4[23] = VAR_3->bridge_id.addr[4];
 VAR_4[24] = VAR_3->bridge_id.addr[5];
 VAR_4[25] = (VAR_3->port_id >> 8) & 0xFF;
 VAR_4[26] = VAR_3->port_id & 0xFF;

 FUNC_1(VAR_4+27, VAR_3->message_age);
 FUNC_1(VAR_4+29, VAR_3->max_age);
 FUNC_1(VAR_4+31, VAR_3->hello_time);
 FUNC_1(VAR_4+33, VAR_3->forward_delay);

 FUNC_0(VAR_2, VAR_4, 35);
}
