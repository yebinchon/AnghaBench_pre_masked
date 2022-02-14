
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pool_workqueue {scalar_t__ refcnt; TYPE_1__* pool; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct pool_workqueue *VAR_0)
{
 FUNC_1(&VAR_0->pool->lock);
 FUNC_0(VAR_0->refcnt <= 0);
 VAR_0->refcnt++;
}
