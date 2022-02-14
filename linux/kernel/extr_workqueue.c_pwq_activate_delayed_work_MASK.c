
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct pool_workqueue {int nr_active; TYPE_1__* pool; } ;
struct TYPE_2__ {int worklist; int watchdog_ts; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct pool_workqueue* FUNC_1 (struct work_struct*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct work_struct*,int *,int *) ;
 int FUNC_4 (struct work_struct*) ;
 int FUNC_5 (struct work_struct*) ;

__attribute__((used)) static void FUNC_6(struct work_struct *VAR_2)
{
 struct pool_workqueue *VAR_3 = FUNC_1(VAR_2);

 FUNC_4(VAR_2);
 if (FUNC_2(&VAR_3->pool->worklist))
  VAR_3->pool->watchdog_ts = VAR_1;
 FUNC_3(VAR_2, &VAR_3->pool->worklist, ((void*)0));
 FUNC_0(VAR_0, FUNC_5(VAR_2));
 VAR_3->nr_active++;
}
