
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct timechart {int dummy; } ;
struct perf_sample {int time; int cpu; } ;
struct evsel {int dummy; } ;


 void* FUNC_0 (struct evsel*,struct perf_sample*,char*) ;
 int FUNC_1 (struct timechart*,int ,int ,int,int,void*,char const*) ;

__attribute__((used)) static int
FUNC_2(struct timechart *VAR_0,
       struct evsel *VAR_1,
       struct perf_sample *VAR_2,
       const char *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_1, VAR_2, "prev_pid");
 int VAR_5 = FUNC_0(VAR_1, VAR_2, "next_pid");
 u64 VAR_6 = FUNC_0(VAR_1, VAR_2, "prev_state");

 FUNC_1(VAR_0, VAR_2->cpu, VAR_2->time, VAR_4, VAR_5,
       VAR_6, VAR_3);
 return 0;
}
