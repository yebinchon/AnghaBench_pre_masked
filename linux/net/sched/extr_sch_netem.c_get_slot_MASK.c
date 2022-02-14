
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc_netem_slot {scalar_t__ max_packets; scalar_t__ max_bytes; int min_delay; int max_delay; int dist_jitter; } ;
struct nlattr {int dummy; } ;
struct TYPE_2__ {scalar_t__ packets_left; scalar_t__ bytes_left; scalar_t__ slot_next; } ;
struct netem_sched_data {TYPE_1__ slot; struct tc_netem_slot slot_config; } ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 () ;
 struct tc_netem_slot* FUNC_1 (struct nlattr const*) ;

__attribute__((used)) static void FUNC_2(struct netem_sched_data *VAR_1, const struct nlattr *VAR_2)
{
 const struct tc_netem_slot *VAR_3 = FUNC_1(VAR_2);

 VAR_1->slot_config = *VAR_3;
 if (VAR_1->slot_config.max_packets == 0)
  VAR_1->slot_config.max_packets = VAR_0;
 if (VAR_1->slot_config.max_bytes == 0)
  VAR_1->slot_config.max_bytes = VAR_0;
 VAR_1->slot.packets_left = VAR_1->slot_config.max_packets;
 VAR_1->slot.bytes_left = VAR_1->slot_config.max_bytes;
 if (VAR_1->slot_config.min_delay | VAR_1->slot_config.max_delay |
     VAR_1->slot_config.dist_jitter)
  VAR_1->slot.slot_next = FUNC_0();
 else
  VAR_1->slot.slot_next = 0;
}
