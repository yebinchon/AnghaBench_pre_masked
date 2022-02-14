
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct runtime_stat {int dummy; } ;
struct perf_stat_config {int stats_num; int * stats; } ;


 int * FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct perf_stat_config *VAR_0, int VAR_1)
{
 int VAR_2;

 VAR_0->stats = FUNC_0(VAR_1, sizeof(struct runtime_stat));
 if (!VAR_0->stats)
  return -1;

 VAR_0->stats_num = VAR_1;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  FUNC_1(&VAR_0->stats[VAR_2]);

 return 0;
}
