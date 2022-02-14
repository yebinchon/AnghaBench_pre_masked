
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shrinker {int flags; int * nr_deferred; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct shrinker*) ;

void FUNC_2(struct shrinker *VAR_1)
{
 if (!VAR_1->nr_deferred)
  return;

 if (VAR_1->flags & VAR_0)
  FUNC_1(VAR_1);

 FUNC_0(VAR_1->nr_deferred);
 VAR_1->nr_deferred = ((void*)0);
}
