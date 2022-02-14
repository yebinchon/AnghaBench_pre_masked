
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worker_pool {int worklist; } ;


 scalar_t__ FUNC_0 (struct worker_pool*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct worker_pool *VAR_0)
{
 return !FUNC_1(&VAR_0->worklist) && FUNC_0(VAR_0);
}
