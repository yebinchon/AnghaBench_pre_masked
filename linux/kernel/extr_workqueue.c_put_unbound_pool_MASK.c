
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worker_pool {scalar_t__ cpu; scalar_t__ id; int flags; int rcu; int mayday_timer; int idle_timer; int * detach_completion; int workers; int lock; scalar_t__ nr_idle; scalar_t__ nr_workers; int hash_node; int worklist; scalar_t__ refcnt; } ;
struct worker {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct worker*) ;
 int VAR_1 ;
 struct worker* FUNC_5 (struct worker_pool*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_2 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int,int ) ;
 int FUNC_15 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_16(struct worker_pool *VAR_7)
{
 FUNC_0(VAR_1);
 struct worker *VAR_8;

 FUNC_9(&VAR_6);

 if (--VAR_7->refcnt)
  return;


 if (FUNC_1(!(VAR_7->cpu < 0)) ||
     FUNC_1(!FUNC_8(&VAR_7->worklist)))
  return;


 if (VAR_7->id >= 0)
  FUNC_7(&VAR_3, VAR_7->id);
 FUNC_6(&VAR_7->hash_node);






 FUNC_12(&VAR_7->lock);
 FUNC_14(VAR_4,
       !(VAR_7->flags & VAR_0), VAR_7->lock);
 VAR_7->flags |= VAR_0;

 while ((VAR_8 = FUNC_5(VAR_7)))
  FUNC_4(VAR_8);
 FUNC_1(VAR_7->nr_workers || VAR_7->nr_idle);
 FUNC_13(&VAR_7->lock);

 FUNC_10(&VAR_5);
 if (!FUNC_8(&VAR_7->workers))
  VAR_7->detach_completion = &VAR_1;
 FUNC_11(&VAR_5);

 if (VAR_7->detach_completion)
  FUNC_15(VAR_7->detach_completion);


 FUNC_3(&VAR_7->idle_timer);
 FUNC_3(&VAR_7->mayday_timer);


 FUNC_2(&VAR_7->rcu, VAR_2);
}
