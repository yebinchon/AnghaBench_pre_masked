
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_pool_map {scalar_t__ npools; int * pool_to; int * to_pool; int count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct svc_pool_map VAR_0 ;
 int VAR_1 ;

void
FUNC_3(void)
{
 struct svc_pool_map *VAR_2 = &VAR_0;

 FUNC_1(&VAR_1);

 if (!--VAR_2->count) {
  FUNC_0(VAR_2->to_pool);
  VAR_2->to_pool = ((void*)0);
  FUNC_0(VAR_2->pool_to);
  VAR_2->pool_to = ((void*)0);
  VAR_2->npools = 0;
 }

 FUNC_2(&VAR_1);
}
