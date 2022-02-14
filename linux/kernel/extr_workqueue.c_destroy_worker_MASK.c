
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worker_pool {int nr_idle; int nr_workers; int lock; } ;
struct worker {int current_work; int flags; int task; int entry; int scheduled; struct worker_pool* pool; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct worker *VAR_2)
{
 struct worker_pool *VAR_3 = VAR_2->pool;

 FUNC_3(&VAR_3->lock);


 if (FUNC_0(VAR_2->current_work) ||
     FUNC_0(!FUNC_2(&VAR_2->scheduled)) ||
     FUNC_0(!(VAR_2->flags & VAR_1)))
  return;

 VAR_3->nr_workers--;
 VAR_3->nr_idle--;

 FUNC_1(&VAR_2->entry);
 VAR_2->flags |= VAR_0;
 FUNC_4(VAR_2->task);
}
