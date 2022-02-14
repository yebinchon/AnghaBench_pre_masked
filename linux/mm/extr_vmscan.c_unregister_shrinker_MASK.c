
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shrinker {int flags; int * nr_deferred; int list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (struct shrinker*) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct shrinker *VAR_2)
{
 if (!VAR_2->nr_deferred)
  return;
 if (VAR_2->flags & VAR_0)
  FUNC_3(VAR_2);
 FUNC_0(&VAR_1);
 FUNC_2(&VAR_2->list);
 FUNC_4(&VAR_1);
 FUNC_1(VAR_2->nr_deferred);
 VAR_2->nr_deferred = ((void*)0);
}
