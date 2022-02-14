
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shrinker {int flags; int * nr_deferred; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (unsigned int,int ) ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_2 (struct shrinker*) ;

int FUNC_3(struct shrinker *VAR_5)
{
 unsigned int VAR_6 = sizeof(*VAR_5->nr_deferred);

 if (VAR_5->flags & VAR_3)
  VAR_6 *= VAR_4;

 VAR_5->nr_deferred = FUNC_1(VAR_6, VAR_1);
 if (!VAR_5->nr_deferred)
  return -VAR_0;

 if (VAR_5->flags & VAR_2) {
  if (FUNC_2(VAR_5))
   goto free_deferred;
 }

 return 0;

free_deferred:
 FUNC_0(VAR_5->nr_deferred);
 VAR_5->nr_deferred = ((void*)0);
 return -VAR_0;
}
