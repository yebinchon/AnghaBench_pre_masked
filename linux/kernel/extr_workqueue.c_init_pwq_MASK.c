
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_struct {int dummy; } ;
struct worker_pool {int dummy; } ;
struct pool_workqueue {int flush_color; int refcnt; int unbound_release_work; int mayday_node; int pwqs_node; int delayed_works; struct workqueue_struct* wq; struct worker_pool* pool; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 unsigned long VAR_0 ;
 int FUNC_3 (struct pool_workqueue*,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct pool_workqueue *VAR_2, struct workqueue_struct *VAR_3,
       struct worker_pool *VAR_4)
{
 FUNC_0((unsigned long)VAR_2 & VAR_0);

 FUNC_3(VAR_2, 0, sizeof(*VAR_2));

 VAR_2->pool = VAR_4;
 VAR_2->wq = VAR_3;
 VAR_2->flush_color = -1;
 VAR_2->refcnt = 1;
 FUNC_1(&VAR_2->delayed_works);
 FUNC_1(&VAR_2->pwqs_node);
 FUNC_1(&VAR_2->mayday_node);
 FUNC_2(&VAR_2->unbound_release_work, VAR_1);
}
