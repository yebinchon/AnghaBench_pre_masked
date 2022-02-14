
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_3__ {scalar_t__ expires; } ;
struct per_cpu_dm_data {int lock; TYPE_1__ send_timer; struct net_dm_hw_entries* hw_entries; } ;
struct net_dm_hw_metadata {int trap_name; } ;
struct net_dm_hw_entry {int count; int trap_name; } ;
struct net_dm_hw_entries {int num_entries; struct net_dm_hw_entry* entries; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 struct per_cpu_dm_data* FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_8(struct sk_buff *VAR_6,
   const struct net_dm_hw_metadata *VAR_7)
{
 struct net_dm_hw_entries *VAR_8;
 struct net_dm_hw_entry *VAR_9;
 struct per_cpu_dm_data *VAR_10;
 unsigned long VAR_11;
 int VAR_12;

 VAR_10 = FUNC_6(&VAR_4);
 FUNC_2(&VAR_10->lock, VAR_11);
 VAR_8 = VAR_10->hw_entries;

 if (!VAR_8)
  goto out;

 for (VAR_12 = 0; VAR_12 < VAR_8->num_entries; VAR_12++) {
  VAR_9 = &VAR_8->entries[VAR_12];
  if (!FUNC_5(VAR_9->trap_name, VAR_7->trap_name,
        VAR_1 - 1)) {
   VAR_9->count++;
   goto out;
  }
 }
 if (FUNC_0(VAR_8->num_entries == VAR_3))
  goto out;

 VAR_9 = &VAR_8->entries[VAR_8->num_entries];
 FUNC_4(VAR_9->trap_name, VAR_7->trap_name,
  VAR_1 - 1);
 VAR_9->count = 1;
 VAR_8->num_entries++;

 if (!FUNC_7(&VAR_10->send_timer)) {
  VAR_10->send_timer.expires = VAR_5 + VAR_2 * VAR_0;
  FUNC_1(&VAR_10->send_timer);
 }

out:
 FUNC_3(&VAR_10->lock, VAR_11);
}
