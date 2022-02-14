
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct worker_pool {scalar_t__ nr_idle; int flags; scalar_t__ nr_workers; int nr_running; int idle_timer; int idle_list; } ;
struct TYPE_2__ {scalar_t__ pprev; scalar_t__ next; } ;
struct worker {int flags; int entry; scalar_t__ last_active; TYPE_1__ hentry; struct worker_pool* pool; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct worker_pool*) ;

__attribute__((used)) static void FUNC_7(struct worker *VAR_4)
{
 struct worker_pool *VAR_5 = VAR_4->pool;

 if (FUNC_0(VAR_4->flags & VAR_2) ||
     FUNC_0(!FUNC_3(&VAR_4->entry) &&
    (VAR_4->hentry.next || VAR_4->hentry.pprev)))
  return;


 VAR_4->flags |= VAR_2;
 VAR_5->nr_idle++;
 VAR_4->last_active = VAR_3;


 FUNC_2(&VAR_4->entry, &VAR_5->idle_list);

 if (FUNC_6(VAR_5) && !FUNC_5(&VAR_5->idle_timer))
  FUNC_4(&VAR_5->idle_timer, VAR_3 + VAR_0);







 FUNC_0(!(VAR_5->flags & VAR_1) &&
       VAR_5->nr_workers == VAR_5->nr_idle &&
       FUNC_1(&VAR_5->nr_running));
}
