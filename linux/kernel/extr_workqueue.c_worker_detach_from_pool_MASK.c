
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worker_pool {struct completion* detach_completion; int workers; } ;
struct worker {int flags; struct worker_pool* pool; int node; } ;
struct completion {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct completion*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(struct worker *VAR_3)
{
 struct worker_pool *VAR_4 = VAR_3->pool;
 struct completion *VAR_5 = ((void*)0);

 FUNC_3(&VAR_2);

 FUNC_1(&VAR_3->node);
 VAR_3->pool = ((void*)0);

 if (FUNC_2(&VAR_4->workers))
  VAR_5 = VAR_4->detach_completion;
 FUNC_4(&VAR_2);


 VAR_3->flags &= ~(VAR_1 | VAR_0);

 if (VAR_5)
  FUNC_0(VAR_5);
}
