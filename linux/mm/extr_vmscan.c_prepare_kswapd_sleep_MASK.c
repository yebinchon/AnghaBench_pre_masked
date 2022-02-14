
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ kswapd_failures; int pfmemalloc_wait; } ;
typedef TYPE_1__ pg_data_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bool FUNC_4(pg_data_t *VAR_1, int VAR_2, int VAR_3)
{
 if (FUNC_2(&VAR_1->pfmemalloc_wait))
  FUNC_3(&VAR_1->pfmemalloc_wait);


 if (VAR_1->kswapd_failures >= VAR_0)
  return 1;

 if (FUNC_1(VAR_1, VAR_2, VAR_3)) {
  FUNC_0(VAR_1);
  return 1;
 }

 return 0;
}
