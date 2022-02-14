
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_stat_config {int metric_only; int * output; } ;
struct evsel {double scale; } ;
struct caggr_data {double avg; int avg_enabled; int avg_running; } ;
typedef int FILE ;


 int FUNC_0 (struct perf_stat_config*,struct evsel*,int ,struct caggr_data*) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (struct perf_stat_config*,int,int ,struct evsel*,double,char*,int ,int ,double,int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct perf_stat_config *VAR_2,
          struct evsel *VAR_3, char *VAR_4)
{
 bool VAR_5 = VAR_2->metric_only;
 FILE *VAR_6 = VAR_2->output;
 double VAR_7;
 struct caggr_data VAR_8 = { .avg = 0.0 };

 if (!FUNC_0(VAR_2, VAR_3, VAR_0, &VAR_8))
  return;

 if (VAR_4 && !VAR_5)
  FUNC_1(VAR_6, "%s", VAR_4);

 VAR_7 = VAR_8.avg * VAR_3->scale;
 FUNC_2(VAR_2, -1, 0, VAR_3, VAR_7, VAR_4, VAR_8.avg_running, VAR_8.avg_enabled,
   VAR_8.avg, &VAR_1);
 if (!VAR_5)
  FUNC_1(VAR_6, "\n");
}
