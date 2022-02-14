
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int tstamp; } ;
struct TYPE_5__ {int syncp; int dropped; } ;
struct TYPE_6__ {int lock; } ;
struct per_cpu_dm_data {TYPE_1__ stats; TYPE_2__ drop_queue; int dm_alert_work; } ;
struct net_dm_hw_metadata {int dummy; } ;
typedef int ktime_t ;
struct TYPE_7__ {struct net_dm_hw_metadata* hw_metadata; } ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (TYPE_2__*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_3 () ;
 struct net_dm_hw_metadata* FUNC_4 (struct net_dm_hw_metadata const*) ;
 int FUNC_5 (struct net_dm_hw_metadata*) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (int *) ;
 struct sk_buff* FUNC_7 (struct sk_buff*,int ) ;
 int FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 struct per_cpu_dm_data* FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void
FUNC_15(struct sk_buff *VAR_3,
         const struct net_dm_hw_metadata *VAR_4)
{
 struct net_dm_hw_metadata *VAR_5;
 ktime_t VAR_6 = FUNC_3();
 struct per_cpu_dm_data *VAR_7;
 struct sk_buff *VAR_8;
 unsigned long VAR_9;

 if (!FUNC_8(VAR_3))
  return;

 VAR_8 = FUNC_7(VAR_3, VAR_0);
 if (!VAR_8)
  return;

 VAR_5 = FUNC_4(VAR_4);
 if (!VAR_5)
  goto free;

 FUNC_0(VAR_8)->hw_metadata = VAR_5;
 VAR_8->tstamp = VAR_6;

 VAR_7 = FUNC_12(&VAR_1);

 FUNC_10(&VAR_7->drop_queue.lock, VAR_9);
 if (FUNC_9(&VAR_7->drop_queue) < VAR_2)
  FUNC_1(&VAR_7->drop_queue, VAR_8);
 else
  goto unlock_free;
 FUNC_11(&VAR_7->drop_queue.lock, VAR_9);

 FUNC_6(&VAR_7->dm_alert_work);

 return;

unlock_free:
 FUNC_11(&VAR_7->drop_queue.lock, VAR_9);
 FUNC_13(&VAR_7->stats.syncp);
 VAR_7->stats.dropped++;
 FUNC_14(&VAR_7->stats.syncp);
 FUNC_5(VAR_5);
free:
 FUNC_2(VAR_8);
}
