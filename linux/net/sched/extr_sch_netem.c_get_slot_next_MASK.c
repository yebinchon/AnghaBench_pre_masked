
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int min_delay; int max_delay; int max_bytes; int max_packets; scalar_t__ dist_jitter; int dist_delay; } ;
struct TYPE_3__ {int slot_next; int bytes_left; int packets_left; } ;
struct netem_sched_data {TYPE_2__ slot_config; TYPE_1__ slot; int slot_dist; } ;
typedef int s64 ;
typedef int s32 ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct netem_sched_data *VAR_0, u64 VAR_1)
{
 s64 VAR_2;

 if (!VAR_0->slot_dist)
  VAR_2 = VAR_0->slot_config.min_delay +
    (FUNC_0() *
     (VAR_0->slot_config.max_delay -
      VAR_0->slot_config.min_delay) >> 32);
 else
  VAR_2 = FUNC_1(VAR_0->slot_config.dist_delay,
           (s32)(VAR_0->slot_config.dist_jitter),
           ((void*)0), VAR_0->slot_dist);

 VAR_0->slot.slot_next = VAR_1 + VAR_2;
 VAR_0->slot.packets_left = VAR_0->slot_config.max_packets;
 VAR_0->slot.bytes_left = VAR_0->slot_config.max_bytes;
}
