
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
typedef int ktime_t ;
struct TYPE_7__ {void* pc; } ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (TYPE_2__*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_3 () ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int *) ;
 struct sk_buff* FUNC_5 (struct sk_buff*,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 struct per_cpu_dm_data* FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(void *VAR_3,
           struct sk_buff *VAR_4,
           void *VAR_5)
{
 ktime_t VAR_6 = FUNC_3();
 struct per_cpu_dm_data *VAR_7;
 struct sk_buff *VAR_8;
 unsigned long VAR_9;

 if (!FUNC_6(VAR_4))
  return;

 VAR_8 = FUNC_5(VAR_4, VAR_0);
 if (!VAR_8)
  return;

 FUNC_0(VAR_8)->pc = VAR_5;



 VAR_8->tstamp = VAR_6;

 VAR_7 = FUNC_10(&VAR_1);

 FUNC_8(&VAR_7->drop_queue.lock, VAR_9);
 if (FUNC_7(&VAR_7->drop_queue) < VAR_2)
  FUNC_1(&VAR_7->drop_queue, VAR_8);
 else
  goto unlock_free;
 FUNC_9(&VAR_7->drop_queue.lock, VAR_9);

 FUNC_4(&VAR_7->dm_alert_work);

 return;

unlock_free:
 FUNC_9(&VAR_7->drop_queue.lock, VAR_9);
 FUNC_11(&VAR_7->stats.syncp);
 VAR_7->stats.dropped++;
 FUNC_12(&VAR_7->stats.syncp);
 FUNC_2(VAR_8);
}
