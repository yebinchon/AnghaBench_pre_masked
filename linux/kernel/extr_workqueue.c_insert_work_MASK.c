
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worker_pool {int dummy; } ;
struct work_struct {int entry; } ;
struct pool_workqueue {struct worker_pool* pool; } ;
struct list_head {int dummy; } ;


 scalar_t__ FUNC_0 (struct worker_pool*) ;
 int FUNC_1 (struct pool_workqueue*) ;
 int FUNC_2 (int *,struct list_head*) ;
 int FUNC_3 (struct work_struct*,struct pool_workqueue*,unsigned int) ;
 int FUNC_4 () ;
 int FUNC_5 (struct worker_pool*) ;

__attribute__((used)) static void FUNC_6(struct pool_workqueue *VAR_0, struct work_struct *VAR_1,
   struct list_head *VAR_2, unsigned int VAR_3)
{
 struct worker_pool *VAR_4 = VAR_0->pool;


 FUNC_3(VAR_1, VAR_0, VAR_3);
 FUNC_2(&VAR_1->entry, VAR_2);
 FUNC_1(VAR_0);






 FUNC_4();

 if (FUNC_0(VAR_4))
  FUNC_5(VAR_4);
}
