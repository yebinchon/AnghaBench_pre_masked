
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_record_stat {int thread; int cpu; int id; int run; int ena; int val; } ;
union perf_event {struct perf_record_stat stat; } ;
struct perf_session {int evlist; } ;
struct perf_counts_values {int run; int ena; int val; } ;
struct evsel {int supported; int counts; } ;


 int VAR_0 ;
 struct perf_counts_values* FUNC_0 (int ,int ,int ) ;
 struct evsel* FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;

int FUNC_3(struct perf_session *VAR_1,
       union perf_event *VAR_2)
{
 struct perf_counts_values VAR_3;
 struct perf_record_stat *VAR_4 = &VAR_2->stat;
 struct evsel *VAR_5;

 VAR_3.val = VAR_4->val;
 VAR_3.ena = VAR_4->ena;
 VAR_3.run = VAR_4->run;

 VAR_5 = FUNC_1(VAR_1->evlist, VAR_4->id);
 if (!VAR_5) {
  FUNC_2("Failed to resolve counter for stat event.\n");
  return -VAR_0;
 }

 *FUNC_0(VAR_5->counts, VAR_4->cpu, VAR_4->thread) = VAR_3;
 VAR_5->supported = 1;
 return 0;
}
