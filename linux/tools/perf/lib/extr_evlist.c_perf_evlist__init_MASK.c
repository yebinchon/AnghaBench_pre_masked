
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_evlist {scalar_t__ nr_entries; int entries; int * heads; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

void FUNC_2(struct perf_evlist *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2)
  FUNC_0(&VAR_1->heads[VAR_2]);
 FUNC_1(&VAR_1->entries);
 VAR_1->nr_entries = 0;
}
