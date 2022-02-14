
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worker_pool {int nr_idle; } ;
struct worker {int flags; int entry; struct worker_pool* pool; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct worker*,int) ;

__attribute__((used)) static void FUNC_3(struct worker *VAR_1)
{
 struct worker_pool *VAR_2 = VAR_1->pool;

 if (FUNC_0(!(VAR_1->flags & VAR_0)))
  return;
 FUNC_2(VAR_1, VAR_0);
 VAR_2->nr_idle--;
 FUNC_1(&VAR_1->entry);
}
