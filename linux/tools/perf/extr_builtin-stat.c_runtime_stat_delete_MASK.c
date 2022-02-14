
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_stat_config {int stats_num; int * stats; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int **) ;

__attribute__((used)) static void FUNC_2(struct perf_stat_config *VAR_0)
{
 int VAR_1;

 if (!VAR_0->stats)
  return;

 for (VAR_1 = 0; VAR_1 < VAR_0->stats_num; VAR_1++)
  FUNC_0(&VAR_0->stats[VAR_1]);

 FUNC_1(&VAR_0->stats);
}
