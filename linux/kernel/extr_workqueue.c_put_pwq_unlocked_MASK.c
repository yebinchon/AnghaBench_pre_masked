
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pool_workqueue {TYPE_1__* pool; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (struct pool_workqueue*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct pool_workqueue *VAR_0)
{
 if (VAR_0) {




  FUNC_1(&VAR_0->pool->lock);
  FUNC_0(VAR_0);
  FUNC_2(&VAR_0->pool->lock);
 }
}
