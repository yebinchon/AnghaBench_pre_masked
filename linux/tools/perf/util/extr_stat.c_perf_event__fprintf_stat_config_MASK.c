
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union perf_event {int stat_config; } ;
struct perf_stat_config {int aggr_mode; int scale; int interval; } ;
typedef int FILE ;


 size_t FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct perf_stat_config*,int *) ;

size_t FUNC_2(union perf_event *VAR_0, FILE *VAR_1)
{
 struct perf_stat_config VAR_2;
 size_t VAR_3;

 FUNC_1(&VAR_2, &VAR_0->stat_config);

 VAR_3 = FUNC_0(VAR_1, "\n");
 VAR_3 += FUNC_0(VAR_1, "... aggr_mode %d\n", VAR_2.aggr_mode);
 VAR_3 += FUNC_0(VAR_1, "... scale     %d\n", VAR_2.scale);
 VAR_3 += FUNC_0(VAR_1, "... interval  %u\n", VAR_2.interval);

 return VAR_3;
}
