
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event_attr {int sample_type; } ;
struct evsel {int idx; int tracking; char* unit; double scale; int bpf_fd; int cmdline_group_boundary; int collect_stat; int * pmu_name; int * metric_events; int * metric_name; int * metric_expr; int sample_size; int config_terms; int * bpf_obj; int * evlist; int max_events; struct evsel* leader; int core; } ;
struct TYPE_2__ {int (* init ) (struct evsel*) ;} ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct evsel*) ;
 int FUNC_3 (int *,struct perf_event_attr*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_4 (struct evsel*) ;

void FUNC_5(struct evsel *VAR_2,
   struct perf_event_attr *VAR_3, int VAR_4)
{
 FUNC_3(&VAR_2->core, VAR_3);
 VAR_2->idx = VAR_4;
 VAR_2->tracking = !VAR_4;
 VAR_2->leader = VAR_2;
 VAR_2->unit = "";
 VAR_2->scale = 1.0;
 VAR_2->max_events = VAR_0;
 VAR_2->evlist = ((void*)0);
 VAR_2->bpf_obj = ((void*)0);
 VAR_2->bpf_fd = -1;
 FUNC_0(&VAR_2->config_terms);
 VAR_1.init(VAR_2);
 VAR_2->sample_size = FUNC_1(VAR_3->sample_type);
 FUNC_2(VAR_2);
 VAR_2->cmdline_group_boundary = 0;
 VAR_2->metric_expr = ((void*)0);
 VAR_2->metric_name = ((void*)0);
 VAR_2->metric_events = ((void*)0);
 VAR_2->collect_stat = 0;
 VAR_2->pmu_name = ((void*)0);
}
