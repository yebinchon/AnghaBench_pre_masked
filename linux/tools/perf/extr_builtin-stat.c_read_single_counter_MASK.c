
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct timespec {unsigned long long tv_sec; void* tv_nsec; } ;
struct perf_counts_values {void* val; void* run; void* ena; } ;
struct evsel {scalar_t__ tool_event; int counts; } ;


 scalar_t__ VAR_0 ;
 struct perf_counts_values* FUNC_0 (int ,int,int) ;
 int FUNC_1 (struct evsel*,int,int) ;

__attribute__((used)) static int FUNC_2(struct evsel *VAR_1, int VAR_2,
          int VAR_3, struct timespec *VAR_4)
{
 if (VAR_1->tool_event == VAR_0) {
  u64 VAR_5 = VAR_4->tv_nsec + VAR_4->tv_sec*1000000000ULL;
  struct perf_counts_values *VAR_6 =
   FUNC_0(VAR_1->counts, VAR_2, VAR_3);
  VAR_6->ena = VAR_6->run = VAR_5;
  VAR_6->val = VAR_5;
  return 0;
 }
 return FUNC_1(VAR_1, VAR_2, VAR_3);
}
