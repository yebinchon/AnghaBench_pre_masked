
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worker_pool {int id; int cpu; int refcnt; int attrs; int hash_node; int worker_ida; int workers; int mayday_timer; int idle_timer; int busy_hash; int idle_list; int worklist; int watchdog_ts; int flags; int node; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct worker_pool *VAR_7)
{
 FUNC_5(&VAR_7->lock);
 VAR_7->id = -1;
 VAR_7->cpu = -1;
 VAR_7->node = VAR_1;
 VAR_7->flags |= VAR_2;
 VAR_7->watchdog_ts = VAR_5;
 FUNC_1(&VAR_7->worklist);
 FUNC_1(&VAR_7->idle_list);
 FUNC_3(VAR_7->busy_hash);

 FUNC_6(&VAR_7->idle_timer, VAR_4, VAR_3);

 FUNC_6(&VAR_7->mayday_timer, VAR_6, 0);

 FUNC_1(&VAR_7->workers);

 FUNC_4(&VAR_7->worker_ida);
 FUNC_0(&VAR_7->hash_node);
 VAR_7->refcnt = 1;


 VAR_7->attrs = FUNC_2();
 if (!VAR_7->attrs)
  return -VAR_0;
 return 0;
}
